#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class MHHDLGIJDMO;
class NKMIDHGFCDI;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define IILDDCNDMOJ_CHAMHFBICKC_OFFSET UNITYSDK_OFFSET(0x1644A2D0)
#define IILDDCNDMOJ_CHJHKJGDLGJ_OFFSET UNITYSDK_OFFSET(0x16449B10)
#define IILDDCNDMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1644A4D0)
#define IILDDCNDMOJ_DHGMLJIGPBK_OFFSET UNITYSDK_OFFSET(0x1644A010)
#define IILDDCNDMOJ_FCDHANBDKJA_OFFSET UNITYSDK_OFFSET(0x16449BE0)
#define IILDDCNDMOJ_FLKHHPELJGG_OFFSET UNITYSDK_OFFSET(0x1644A110)
#define IILDDCNDMOJ_GGEPLHACEKJ_OFFSET UNITYSDK_OFFSET(0x1644A1D0)
#define IILDDCNDMOJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16449A30)
#define IILDDCNDMOJ_HPLLKNBBKCP_OFFSET UNITYSDK_OFFSET(0x1644A3E0)
#define IILDDCNDMOJ_JALACOIGACL_OFFSET UNITYSDK_OFFSET(0x1644A480)
#define IILDDCNDMOJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16449AD0)
#define IILDDCNDMOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x164499C0)
#define IILDDCNDMOJ_POEFHGALPNI_OFFSET UNITYSDK_OFFSET(0x16449FC0)
#define IILDDCNDMOJ___STARTUPDATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1644A4E0)

	class IILDDCNDMOJ : public ::System::Object
	{
	public:
		::System::Action* CKEDCCHCKAH; // 0x10
		::MHHDLGIJDMO* BIOKPIMHBNK; // 0x18
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Boolean CHJHKJGDLGJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_CHJHKJGDLGJ_OFFSET))(this);
		}

		::System::Void POEFHGALPNI(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_POEFHGALPNI_OFFSET))(this, a1);
		}

		::System::Void DHGMLJIGPBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_DHGMLJIGPBK_OFFSET))(this, a1);
		}

		::System::Void FCDHANBDKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_FCDHANBDKJA_OFFSET))(this);
		}

		::System::Void GGEPLHACEKJ(::HIAMBDKHMIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIAMBDKHMIJ*))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_GGEPLHACEKJ_OFFSET))(this, a1);
		}

		::System::Void CHAMHFBICKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_CHAMHFBICKC_OFFSET))(this);
		}

		::System::Void FLKHHPELJGG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_FLKHHPELJGG_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* HPLLKNBBKCP(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_HPLLKNBBKCP_OFFSET))(this, a1);
		}

		::System::Void JALACOIGACL(::RPG::Client::ServerDispatchData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ServerDispatchData*))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_JALACOIGACL_OFFSET))(this, a1);
		}

		::System::Void __StartUpdate_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IILDDCNDMOJ___STARTUPDATE_B__9_0_OFFSET))(this);
		}

	};
