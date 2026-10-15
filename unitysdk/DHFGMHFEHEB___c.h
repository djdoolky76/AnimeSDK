#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHFGMHFEHEB;
namespace System { class Object; }

#define DHFGMHFEHEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B35F0)
#define DHFGMHFEHEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B3630)
#define DHFGMHFEHEB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1B3640)

	class DHFGMHFEHEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C_CTOR_OFFSET))(this);
		}

		::DHFGMHFEHEB* __cctor_b__28_0()
		{
			return ((::DHFGMHFEHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
