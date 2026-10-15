#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::TrainParty::Mapping { class SlotBtnMapping; }
namespace RPG::Client::TrainParty::Mapping { class SlotPosMapping; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PPAFCLJOBBM_APJOCLAEKCD_OFFSET UNITYSDK_OFFSET(0xC36FE70)
#define PPAFCLJOBBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC36FD90)
#define PPAFCLJOBBM_EBGKCBCCOCE_OFFSET UNITYSDK_OFFSET(0xC370230)
#define PPAFCLJOBBM_ELABBBCFGFM_OFFSET UNITYSDK_OFFSET(0xC36FFC0)
#define PPAFCLJOBBM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xC3702C0)
#define PPAFCLJOBBM_HMJNIGNBJFC_OFFSET UNITYSDK_OFFSET(0xC3700E0)
#define PPAFCLJOBBM_MMPIBHECKPG_OFFSET UNITYSDK_OFFSET(0xC3704E0)
#define PPAFCLJOBBM_OOAOCIJHPLD_OFFSET UNITYSDK_OFFSET(0xC370050)
#define PPAFCLJOBBM_POGGCINDCHG_OFFSET UNITYSDK_OFFSET(0xC3703B0)

inline static constexpr unsigned int PPAFCLJOBBM_TypeDefinitionIndex = 74376;

	class PPAFCLJOBBM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*>* EKPLJDLAPEN; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*>* HGCAIBIDJNJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_CTOR_OFFSET))(this);
		}

		::System::Void APJOCLAEKCD(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotPosMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotPosMapping*))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_APJOCLAEKCD_OFFSET))(this, a1, a2);
		}

		::System::Void ELABBBCFGFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_ELABBBCFGFM_OFFSET))(this, a1);
		}

		::System::Void OOAOCIJHPLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_OOAOCIJHPLD_OFFSET))(this);
		}

		::System::Void HMJNIGNBJFC(::System::UInt32 a1, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::Mapping::SlotBtnMapping*))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_HMJNIGNBJFC_OFFSET))(this, a1, a2);
		}

		::System::Void EBGKCBCCOCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_EBGKCBCCOCE_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean POGGCINDCHG(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_POGGCINDCHG_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::Mapping::SlotPosMapping* MMPIBHECKPG(::System::UInt32 a1)
		{
			return ((::RPG::Client::TrainParty::Mapping::SlotPosMapping*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPAFCLJOBBM_MMPIBHECKPG_OFFSET))(this, a1);
		}

	};
