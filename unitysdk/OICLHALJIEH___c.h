#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OICLHALJIEH;
namespace System { class Object; }

#define OICLHALJIEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE69900)
#define OICLHALJIEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE69940)
#define OICLHALJIEH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE69950)

inline static constexpr unsigned int OICLHALJIEH___c_TypeDefinitionIndex = 32393;

	class OICLHALJIEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OICLHALJIEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH___C_CTOR_OFFSET))(this);
		}

		::OICLHALJIEH* __cctor_b__18_0()
		{
			return ((::OICLHALJIEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OICLHALJIEH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
