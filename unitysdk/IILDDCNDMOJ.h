#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIAMBDKHMIJ;
class JIAFOPELMJJ;
class MHHDLGIJDMO;
class NKMIDHGFCDI;
namespace RPG::Client { class ServerDispatchData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections { class IEnumerator; }

#define IILDDCNDMOJ_CHAMHFBICKC_OFFSET UNITYSDK_OFFSET(0x193DF3E0)
#define IILDDCNDMOJ_CHJHKJGDLGJ_OFFSET UNITYSDK_OFFSET(0x193DEC20)
#define IILDDCNDMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x193DF5E0)
#define IILDDCNDMOJ_DHGMLJIGPBK_OFFSET UNITYSDK_OFFSET(0x193DF120)
#define IILDDCNDMOJ_FCDHANBDKJA_OFFSET UNITYSDK_OFFSET(0x193DECF0)
#define IILDDCNDMOJ_FLKHHPELJGG_OFFSET UNITYSDK_OFFSET(0x193DF220)
#define IILDDCNDMOJ_GGEPLHACEKJ_OFFSET UNITYSDK_OFFSET(0x193DF2E0)
#define IILDDCNDMOJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x193DEB40)
#define IILDDCNDMOJ_HPLLKNBBKCP_OFFSET UNITYSDK_OFFSET(0x193DF4F0)
#define IILDDCNDMOJ_JALACOIGACL_OFFSET UNITYSDK_OFFSET(0x193DF590)
#define IILDDCNDMOJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x193DEBE0)
#define IILDDCNDMOJ_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x193DEAD0)
#define IILDDCNDMOJ_POEFHGALPNI_OFFSET UNITYSDK_OFFSET(0x193DF0D0)
#define IILDDCNDMOJ___STARTUPDATE_B__9_0_OFFSET UNITYSDK_OFFSET(0x193DF5F0)

inline static constexpr unsigned int IILDDCNDMOJ_TypeDefinitionIndex = 62612;

	class IILDDCNDMOJ : public ::System::Object
	{
	public:
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x10
		::System::Action_2<::System::Boolean, ::NKMIDHGFCDI*>* CKEDCCHCKAH; // 0x18
		::MHHDLGIJDMO* BIOKPIMHBNK; // 0x20
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

		::System::Void POEFHGALPNI(::System::Action_2<::System::Boolean, ::NKMIDHGFCDI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::NKMIDHGFCDI*>*))((::PBYTE)hIl2Cpp + IILDDCNDMOJ_POEFHGALPNI_OFFSET))(this, a1);
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
