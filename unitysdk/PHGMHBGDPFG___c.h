#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHGMHBGDPFG;
namespace System { class Object; }

#define PHGMHBGDPFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F208030)
#define PHGMHBGDPFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F208060)
#define PHGMHBGDPFG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F208070)

inline static constexpr unsigned int PHGMHBGDPFG___c_TypeDefinitionIndex = 33143;

	class PHGMHBGDPFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHGMHBGDPFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG___C_CTOR_OFFSET))(this);
		}

		::PHGMHBGDPFG* __cctor_b__18_0()
		{
			return ((::PHGMHBGDPFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGMHBGDPFG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
