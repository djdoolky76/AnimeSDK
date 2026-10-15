#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AADIBKNAJJI;
class HLOHDPOEMDK;
class IIAJFCNCMEB;
class LDMBNFAMCOI;
class PNIFMEAJAEB;

#define EAHCLJPMCIG_CTOR_OFFSET UNITYSDK_OFFSET(0x126788C0)
#define EAHCLJPMCIG_GET_BATTLEDECKID_OFFSET UNITYSDK_OFFSET(0x12678850)
#define EAHCLJPMCIG_GET_CARDGAMESTATE_OFFSET UNITYSDK_OFFSET(0x12678880)
#define EAHCLJPMCIG_GET_DAMAGESTATISTICSSTATE_OFFSET UNITYSDK_OFFSET(0x126788A0)
#define EAHCLJPMCIG_GET_ENEMYSTATE_OFFSET UNITYSDK_OFFSET(0x12678890)
#define EAHCLJPMCIG_GET_FRIENDSTATE_OFFSET UNITYSDK_OFFSET(0x12678870)
#define EAHCLJPMCIG_GET_ISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x12678810)
#define EAHCLJPMCIG_GET_WAITINGULTRAORDERAVATARID_OFFSET UNITYSDK_OFFSET(0x12678830)
#define EAHCLJPMCIG_GET_WAVEINFOSTATE_OFFSET UNITYSDK_OFFSET(0x126788B0)
#define EAHCLJPMCIG_SET_BATTLEDECKID_OFFSET UNITYSDK_OFFSET(0x12678860)
#define EAHCLJPMCIG_SET_ISPLAYERACTION_OFFSET UNITYSDK_OFFSET(0x12678820)
#define EAHCLJPMCIG_SET_WAITINGULTRAORDERAVATARID_OFFSET UNITYSDK_OFFSET(0x12678840)

inline static constexpr unsigned int EAHCLJPMCIG_TypeDefinitionIndex = 80822;

	class EAHCLJPMCIG : public ::System::Object
	{
	public:
		::PNIFMEAJAEB* _WaveInfoState_k__BackingField; // 0x10
		::AADIBKNAJJI* _FriendState_k__BackingField; // 0x18
		::IIAJFCNCMEB* _DamageStatisticsState_k__BackingField; // 0x20
		::HLOHDPOEMDK* _CardGameState_k__BackingField; // 0x28
		::LDMBNFAMCOI* _EnemyState_k__BackingField; // 0x30
		::System::Boolean _IsPlayerAction_k__BackingField; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 _BattleDeckID_k__BackingField; // 0x3C
		::System::UInt32 _WaitingUltraOrderAvatarID_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_ISPLAYERACTION_OFFSET))(this);
		}

		::System::Void set_IsPlayerAction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_SET_ISPLAYERACTION_OFFSET))(this, a1);
		}

		::System::UInt32 get_WaitingUltraOrderAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_WAITINGULTRAORDERAVATARID_OFFSET))(this);
		}

		::System::Void set_WaitingUltraOrderAvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_SET_WAITINGULTRAORDERAVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleDeckID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_BATTLEDECKID_OFFSET))(this);
		}

		::System::Void set_BattleDeckID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_SET_BATTLEDECKID_OFFSET))(this, a1);
		}

		::AADIBKNAJJI* get_FriendState()
		{
			return ((::AADIBKNAJJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_FRIENDSTATE_OFFSET))(this);
		}

		::HLOHDPOEMDK* get_CardGameState()
		{
			return ((::HLOHDPOEMDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_CARDGAMESTATE_OFFSET))(this);
		}

		::LDMBNFAMCOI* get_EnemyState()
		{
			return ((::LDMBNFAMCOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_ENEMYSTATE_OFFSET))(this);
		}

		::IIAJFCNCMEB* get_DamageStatisticsState()
		{
			return ((::IIAJFCNCMEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_DAMAGESTATISTICSSTATE_OFFSET))(this);
		}

		::PNIFMEAJAEB* get_WaveInfoState()
		{
			return ((::PNIFMEAJAEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHCLJPMCIG_GET_WAVEINFOSTATE_OFFSET))(this);
		}

	};
