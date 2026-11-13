#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOAGKOAJEMD;
namespace System { class Object; }

#define FOAGKOAJEMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202DF360)
#define FOAGKOAJEMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202DF3A0)
#define FOAGKOAJEMD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x202DF3B0)

inline static constexpr unsigned int FOAGKOAJEMD___c_TypeDefinitionIndex = 27899;

	class FOAGKOAJEMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOAGKOAJEMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAGKOAJEMD___C_CTOR_OFFSET))(this);
		}

		::FOAGKOAJEMD* __cctor_b__18_0()
		{
			return ((::FOAGKOAJEMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAGKOAJEMD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
