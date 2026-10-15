#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournPersonaStyleGiftDataBase.h"
class BGCFHJFJGBI;
class GNIGKPBJFOO;
class JEBLBMDOOML;
class JHECCCANFGP;
class PNDNFPHFBMK;
namespace RPG::Client { class RogueTournPersonaGameStyleGiftData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE0137C0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE013760)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE013740)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET UNITYSDK_OFFSET(0xE013D00)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE013CE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0xE013CF0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET UNITYSDK_OFFSET(0xE013AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameStyleGiftData_TypeDefinitionIndex = 67749;

	class RogueTournPersonaGameStyleGiftData : public ::RPG::Client::RogueTournPersonaStyleGiftDataBase
	{
	public:
		::PNDNFPHFBMK* _BlackboardContext; // 0x40
		::GNIGKPBJFOO* _DynamicHint; // 0x48
		::System::UInt32 _UniqueID_k__BackingField; // 0x50
		::System::Void _ctor(::PNDNFPHFBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNDNFPHFBMK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create(::JHECCCANFGP* a1, ::BGCFHJFJGBI* a2)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::JHECCCANFGP*, ::BGCFHJFJGBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournPersonaGameStyleGiftData* Create_1(::System::UInt32 a1, ::System::UInt32 a2, ::BGCFHJFJGBI* a3)
		{
			return ((::RPG::Client::RogueTournPersonaGameStyleGiftData*(*)(::System::UInt32, ::System::UInt32, ::BGCFHJFJGBI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_CREATE_1_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitFromRow(::JEBLBMDOOML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEBLBMDOOML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA__INITFROMROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_UNIQUEID_OFFSET))(this);
		}

		::System::Void set_UniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_SET_UNIQUEID_OFFSET))(this, a1);
		}

		::System::String* get_DynamicHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMESTYLEGIFTDATA_GET_DYNAMICHINT_OFFSET))(this);
		}

	};
}
