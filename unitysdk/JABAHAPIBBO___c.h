#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABAHAPIBBO;
namespace System { class Object; }

#define JABAHAPIBBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EAE40)
#define JABAHAPIBBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EAE70)
#define JABAHAPIBBO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E6EAE80)

inline static constexpr unsigned int JABAHAPIBBO___c_TypeDefinitionIndex = 29347;

	class JABAHAPIBBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABAHAPIBBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO___C_CTOR_OFFSET))(this);
		}

		::JABAHAPIBBO* __cctor_b__33_0()
		{
			return ((::JABAHAPIBBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABAHAPIBBO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
