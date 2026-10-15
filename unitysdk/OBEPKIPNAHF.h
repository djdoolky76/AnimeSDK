#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleQTEStatus.h"
#include "unitysdk/System/Object.h"
class GIBILAKDENF;
namespace System { class Object; }

#define OBEPKIPNAHF_ADJHLGOAIND_OFFSET UNITYSDK_OFFSET(0xBD39FB0)
#define OBEPKIPNAHF_BPHKLCDPGMC_OFFSET UNITYSDK_OFFSET(0xBD3A050)
#define OBEPKIPNAHF_CTOR_OFFSET UNITYSDK_OFFSET(0xBD39B40)
#define OBEPKIPNAHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD39E50)
#define OBEPKIPNAHF_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xBD3A4F0)
#define OBEPKIPNAHF_EEPJEMMMDNP_OFFSET UNITYSDK_OFFSET(0xBD3A3F0)
#define OBEPKIPNAHF_FJOIKLDIPNP_OFFSET UNITYSDK_OFFSET(0xBD3A0A0)
#define OBEPKIPNAHF_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xBD3A5D0)
#define OBEPKIPNAHF_GNBFAIBEGEI_OFFSET UNITYSDK_OFFSET(0xBD39DC0)
#define OBEPKIPNAHF_JCKDNNGALEO_OFFSET UNITYSDK_OFFSET(0xBD3A5F0)
#define OBEPKIPNAHF_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBD39B90)
#define OBEPKIPNAHF_LBEHPHODDBE_OFFSET UNITYSDK_OFFSET(0xBD3A2B0)
#define OBEPKIPNAHF_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0xBD39DB0)
#define OBEPKIPNAHF_LKIFDCACLOK_OFFSET UNITYSDK_OFFSET(0xBD3A570)
#define OBEPKIPNAHF_MJKKFEOGNGJ_OFFSET UNITYSDK_OFFSET(0xBD3A530)
#define OBEPKIPNAHF_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xBD3A5E0)

	class OBEPKIPNAHF : public ::System::Object
	{
	public:
		::GIBILAKDENF* APPIHABBCGK; // 0x10
		::System::Single OFPOEJFBKIM; // 0x18
		::RPG::GameCore::BattleQTEStatus _Status_k__BackingField; // 0x1C
		::System::Void _ctor(::GIBILAKDENF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIBILAKDENF*))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_CTOR_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_DISPOSE_OFFSET))(this);
		}

		::System::Void ADJHLGOAIND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_ADJHLGOAIND_OFFSET))(this);
		}

		::System::Void GNBFAIBEGEI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_GNBFAIBEGEI_OFFSET))(this, a1);
		}

		::System::Void BPHKLCDPGMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_BPHKLCDPGMC_OFFSET))(this);
		}

		::System::Void FJOIKLDIPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_FJOIKLDIPNP_OFFSET))(this);
		}

		::System::Void LBEHPHODDBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_LBEHPHODDBE_OFFSET))(this);
		}

		::System::Void EEPJEMMMDNP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_EEPJEMMMDNP_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void MJKKFEOGNGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_MJKKFEOGNGJ_OFFSET))(this);
		}

		::System::Void LKIFDCACLOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_LKIFDCACLOK_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleQTEStatus get_Status()
		{
			return ((::RPG::GameCore::BattleQTEStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::GameCore::BattleQTEStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleQTEStatus))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_LDKMIKEMHFO_OFFSET))(this);
		}

		::System::Boolean JCKDNNGALEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBEPKIPNAHF_JCKDNNGALEO_OFFSET))(this);
		}

	};
