#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMABCOBMACM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class PCPJIEBCNBI;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define LCJPDOOLBEC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB611C10)
#define LCJPDOOLBEC_CTOR_OFFSET UNITYSDK_OFFSET(0xB610A80)
#define LCJPDOOLBEC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB610AE0)
#define LCJPDOOLBEC_EPPAJHCELPI_OFFSET UNITYSDK_OFFSET(0xB611810)
#define LCJPDOOLBEC_FCPDJANIEOC_OFFSET UNITYSDK_OFFSET(0xB611BE0)
#define LCJPDOOLBEC_FGEDDIBCGCK_OFFSET UNITYSDK_OFFSET(0xB6111A0)
#define LCJPDOOLBEC_GET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0xB611BF0)
#define LCJPDOOLBEC_ILJHPIIHNBE_OFFSET UNITYSDK_OFFSET(0xB610CA0)
#define LCJPDOOLBEC_INPDKBKMOIN_OFFSET UNITYSDK_OFFSET(0xB611970)
#define LCJPDOOLBEC_LHAGFOJIPMB_OFFSET UNITYSDK_OFFSET(0xB610C00)
#define LCJPDOOLBEC_LNIKONEIGDO_OFFSET UNITYSDK_OFFSET(0xB611B10)
#define LCJPDOOLBEC_MCAMFCCDAAN_OFFSET UNITYSDK_OFFSET(0xB611B70)
#define LCJPDOOLBEC_MDKPAIPOEJM_OFFSET UNITYSDK_OFFSET(0xB611650)
#define LCJPDOOLBEC_NEGLMAMIKEE_OFFSET UNITYSDK_OFFSET(0xB6110D0)
#define LCJPDOOLBEC_OHOOFHBFGPC_OFFSET UNITYSDK_OFFSET(0xB611920)
#define LCJPDOOLBEC_PGCBPNFMBGH_OFFSET UNITYSDK_OFFSET(0xB611BD0)
#define LCJPDOOLBEC_PMJOGEJADNL_OFFSET UNITYSDK_OFFSET(0xB610B30)
#define LCJPDOOLBEC_SET_ONELATIONPOINTCHANGED_OFFSET UNITYSDK_OFFSET(0xB611C00)

inline static constexpr unsigned int LCJPDOOLBEC_TypeDefinitionIndex = 56055;

	class LCJPDOOLBEC : public ::System::Object
	{
	public:
		::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* _OnElationPointChanged_k__BackingField; // 0x10
		::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
		::RPG::GameCore::FixPoint ELABCBPAHPC; // 0x20
		::RPG::GameCore::FixPoint PIJJEAOLBDM; // 0x28
		::RPG::GameCore::FixPoint PEBAJGKDIMJ; // 0x30
		static ::RPG::GameCore::PropertyAdsorptionConfig** StaticGet_FOKOFEOEENL()
		{
			return (::RPG::GameCore::PropertyAdsorptionConfig**)UnitySDK::FromName("", "LCJPDOOLBEC")->GetStaticField(0x554E0);
		}

		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCJPDOOLBEC_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_DISPOSE_OFFSET))(this);
		}

		::System::Void PMJOGEJADNL(::PCPJIEBCNBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCPJIEBCNBI*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_PMJOGEJADNL_OFFSET))(this, a1);
		}

		::System::Void NEGLMAMIKEE(::PCPJIEBCNBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCPJIEBCNBI*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_NEGLMAMIKEE_OFFSET))(this, a1);
		}

		::System::Void MDKPAIPOEJM(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_MDKPAIPOEJM_OFFSET))(this, a1);
		}

		::System::Void OHOOFHBFGPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_OHOOFHBFGPC_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint INPDKBKMOIN(::CMABCOBMACM a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::CMABCOBMACM))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_INPDKBKMOIN_OFFSET))(this, a1);
		}

		static ::RPG::GameCore::FixPoint EPPAJHCELPI(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_EPPAJHCELPI_OFFSET))(a1);
		}

		::RPG::GameCore::FixPoint LHAGFOJIPMB(::RPG::GameCore::FixPoint a1, ::PCPJIEBCNBI* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::PCPJIEBCNBI*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_LHAGFOJIPMB_OFFSET))(this, a1, a2);
		}

		::System::Void ILJHPIIHNBE(::RPG::GameCore::FixPoint a1, ::PCPJIEBCNBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::PCPJIEBCNBI*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_ILJHPIIHNBE_OFFSET))(this, a1, a2);
		}

		::System::Void FGEDDIBCGCK(::RPG::GameCore::FixPoint a1, ::PCPJIEBCNBI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::PCPJIEBCNBI*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_FGEDDIBCGCK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint PGCBPNFMBGH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_PGCBPNFMBGH_OFFSET))(this);
		}

		::System::Int32 MCAMFCCDAAN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_MCAMFCCDAAN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint FCPDJANIEOC()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_FCPDJANIEOC_OFFSET))(this);
		}

		::System::Int32 LNIKONEIGDO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_LNIKONEIGDO_OFFSET))(this);
		}

		::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* get_OnElationPointChanged()
		{
			return ((::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_GET_ONELATIONPOINTCHANGED_OFFSET))(this);
		}

		::System::Void set_OnElationPointChanged(::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint, ::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + LCJPDOOLBEC_SET_ONELATIONPOINTCHANGED_OFFSET))(this, a1);
		}

	};
