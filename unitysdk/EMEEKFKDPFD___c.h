#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMEEKFKDPFD;
namespace System { class Object; }

#define EMEEKFKDPFD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2600)
#define EMEEKFKDPFD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B2640)
#define EMEEKFKDPFD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2B2650)

inline static constexpr unsigned int EMEEKFKDPFD___c_TypeDefinitionIndex = 34773;

	class EMEEKFKDPFD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52DC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C_CTOR_OFFSET))(this);
		}

		::EMEEKFKDPFD* __cctor_b__23_0()
		{
			return ((::EMEEKFKDPFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMEEKFKDPFD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
