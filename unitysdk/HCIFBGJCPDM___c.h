#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCIFBGJCPDM;
namespace System { class Object; }

#define HCIFBGJCPDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5403C0)
#define HCIFBGJCPDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E540400)
#define HCIFBGJCPDM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E540410)

	class HCIFBGJCPDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCIFBGJCPDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFBGJCPDM___C_CTOR_OFFSET))(this);
		}

		::HCIFBGJCPDM* __cctor_b__18_0()
		{
			return ((::HCIFBGJCPDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCIFBGJCPDM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
