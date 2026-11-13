#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerStepOnUnstablePlatformReason.h"
#include "unitysdk/RPG/Client/StopPlayerMotionReason.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BBICCJAGCDL;
class DAGBNGJFCMG;
class NPEHFAHLDNM;
class PAOMMOHKLCO;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace System::Text { class StringBuilder; }

#define MMEOMOCGECN_BOLILFADGPJ_OFFSET UNITYSDK_OFFSET(0x1B9339A0)
#define MMEOMOCGECN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B934860)
#define MMEOMOCGECN_CNDPJGMOLOF_OFFSET UNITYSDK_OFFSET(0x1B9338D0)
#define MMEOMOCGECN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B932460)
#define MMEOMOCGECN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B932690)
#define MMEOMOCGECN_FGOMHPICHGO_OFFSET UNITYSDK_OFFSET(0x1B933A50)
#define MMEOMOCGECN_FJGIFEENOLG_OFFSET UNITYSDK_OFFSET(0x1B932DB0)
#define MMEOMOCGECN_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x1B934840)
#define MMEOMOCGECN_GET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1B934820)
#define MMEOMOCGECN_HOPCMMKELLF_OFFSET UNITYSDK_OFFSET(0x1B933D00)
#define MMEOMOCGECN_IHGOJIDFEKB_OFFSET UNITYSDK_OFFSET(0x1B933DD0)
#define MMEOMOCGECN_ILPMIHNABDF_OFFSET UNITYSDK_OFFSET(0x1B933B60)
#define MMEOMOCGECN_JIDHMPLCHEF_OFFSET UNITYSDK_OFFSET(0x1B933FB0)
#define MMEOMOCGECN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B932750)
#define MMEOMOCGECN_KKBDNALAPJG_OFFSET UNITYSDK_OFFSET(0x1B933940)
#define MMEOMOCGECN_MCPFMFJJNKJ_OFFSET UNITYSDK_OFFSET(0x1B932E70)
#define MMEOMOCGECN_MGJBJCOOOPF_OFFSET UNITYSDK_OFFSET(0x1B9329E0)
#define MMEOMOCGECN_NIFFKCPNIME_OFFSET UNITYSDK_OFFSET(0x1B9347D0)
#define MMEOMOCGECN_NLAIBBJMKIG_OFFSET UNITYSDK_OFFSET(0x1B932890)
#define MMEOMOCGECN_OBKAMGIDHLB_OFFSET UNITYSDK_OFFSET(0x1B933AB0)
#define MMEOMOCGECN_OFLOOFNPFFL_OFFSET UNITYSDK_OFFSET(0x1B933BE0)
#define MMEOMOCGECN_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET UNITYSDK_OFFSET(0x1B934850)
#define MMEOMOCGECN_SET_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x1B934830)

inline static constexpr unsigned int MMEOMOCGECN_TypeDefinitionIndex = 62290;

	class MMEOMOCGECN : public ::System::Object
	{
	public:
		::BBICCJAGCDL* BPNMAHNOAEG; // 0x10
		::System::Text::StringBuilder* DJKLHOHKMNH; // 0x18
		::System::Collections::Generic::Stack_1<::DAGBNGJFCMG*>* CABFDBJKKGN; // 0x20
		::BBICCJAGCDL* KOFFNKGOKDE; // 0x28
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* IFEJPPFNBCH; // 0x38
		::System::Boolean _PauseGame_k__BackingField; // 0x40
		::System::Boolean _BlockMovementSyncOnReconnecting_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single GFBJIODGOGO; // 0x44
		static ::RPG::Client::RPGProfilerMarker** StaticGet_OFKOKKHCNCI()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "MMEOMOCGECN")->GetStaticField(0x53200);
		}

		static ::System::Single* StaticGet_OLIKFIBJFEA()
		{
			return (::System::Single*)UnitySDK::FromName("", "MMEOMOCGECN")->GetStaticField(0x11DA0);
		}

		static ::System::Single* StaticGet_LKNEIJKAIHI()
		{
			return (::System::Single*)UnitySDK::FromName("", "MMEOMOCGECN")->GetStaticField(0x11DA4);
		}

		::System::Void _ctor(::RPG::Client::AdventurePhase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + MMEOMOCGECN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMEOMOCGECN_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMEOMOCGECN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FJGIFEENOLG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MMEOMOCGECN_FJGIFEENOLG_OFFSET))(this, a1);
		}

		::System::Void CNDPJGMOLOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_CNDPJGMOLOF_OFFSET))(this);
		}

		::System::Void KKBDNALAPJG(::RPG::Client::StopPlayerMotionReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + MMEOMOCGECN_KKBDNALAPJG_OFFSET))(this, a1);
		}

		::System::Void BOLILFADGPJ(::RPG::Client::StopPlayerMotionReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StopPlayerMotionReason))((::PBYTE)hIl2Cpp + MMEOMOCGECN_BOLILFADGPJ_OFFSET))(this, a1);
		}

		::System::Void FGOMHPICHGO(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + MMEOMOCGECN_FGOMHPICHGO_OFFSET))(this, a1);
		}

		::System::Void OBKAMGIDHLB(::RPG::Client::PlayerStepOnUnstablePlatformReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerStepOnUnstablePlatformReason))((::PBYTE)hIl2Cpp + MMEOMOCGECN_OBKAMGIDHLB_OFFSET))(this, a1);
		}

		::DAGBNGJFCMG* MCPFMFJJNKJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::DAGBNGJFCMG*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MMEOMOCGECN_MCPFMFJJNKJ_OFFSET))(this, a1, a2);
		}

		::NPEHFAHLDNM* ILPMIHNABDF()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_ILPMIHNABDF_OFFSET))(this);
		}

		::System::Void HOPCMMKELLF(::DAGBNGJFCMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGBNGJFCMG*))((::PBYTE)hIl2Cpp + MMEOMOCGECN_HOPCMMKELLF_OFFSET))(this, a1);
		}

		::System::Void MGJBJCOOOPF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMEOMOCGECN_MGJBJCOOOPF_OFFSET))(this, a1);
		}

		::System::Void JIDHMPLCHEF(::RPG::GameCore::EntityType a1, ::PAOMMOHKLCO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityType, ::PAOMMOHKLCO*))((::PBYTE)hIl2Cpp + MMEOMOCGECN_JIDHMPLCHEF_OFFSET))(this, a1, a2);
		}

		::PAOMMOHKLCO* IHGOJIDFEKB()
		{
			return ((::PAOMMOHKLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_IHGOJIDFEKB_OFFSET))(this);
		}

		::NPEHFAHLDNM* OFLOOFNPFFL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::NPEHFAHLDNM* a3)
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + MMEOMOCGECN_OFLOOFNPFFL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NLAIBBJMKIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_NLAIBBJMKIG_OFFSET))(this);
		}

		::System::Boolean get_PauseGame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_GET_PAUSEGAME_OFFSET))(this);
		}

		::System::Void set_PauseGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMEOMOCGECN_SET_PAUSEGAME_OFFSET))(this, a1);
		}

		::System::Boolean NIFFKCPNIME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_NIFFKCPNIME_OFFSET))(this);
		}

		::System::Boolean get_BlockMovementSyncOnReconnecting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMEOMOCGECN_GET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this);
		}

		::System::Void set_BlockMovementSyncOnReconnecting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MMEOMOCGECN_SET_BLOCKMOVEMENTSYNCONRECONNECTING_OFFSET))(this, a1);
		}

	};
