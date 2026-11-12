#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEquipType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class GridFightTraitEquipEffectConfigRow; }
namespace System { class String; }

#define LODIBOHLLEG_BCHMEFEMKFH_OFFSET UNITYSDK_OFFSET(0xC058730)
#define LODIBOHLLEG_BJEMIEKMPIL_OFFSET UNITYSDK_OFFSET(0xC0585D0)
#define LODIBOHLLEG_DNGFPFIECNF_OFFSET UNITYSDK_OFFSET(0xC0587C0)
#define LODIBOHLLEG_DPIJFAJKLHC_OFFSET UNITYSDK_OFFSET(0xC058210)
#define LODIBOHLLEG_FJHJDPODPOA_OFFSET UNITYSDK_OFFSET(0xC058870)
#define LODIBOHLLEG_KDNJJNOBFKG_OFFSET UNITYSDK_OFFSET(0xC0583E0)

inline static constexpr unsigned int LODIBOHLLEG_TypeDefinitionIndex = 66510;

	class LODIBOHLLEG : public ::System::Object
	{
	public:
		// static const ::System::Object GEGOFFECEOH; // 0x0
		// static const ::System::String* NFJCLHFDLFN; // 0x0
		static ::System::Boolean DPIJFAJKLHC(::RPG::Client::GridFightEquipItemData* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightEquipItemData*, ::System::String*))((::PBYTE)hIl2Cpp + LODIBOHLLEG_DPIJFAJKLHC_OFFSET))(a1, a2);
		}

		static ::System::String* DNGFPFIECNF(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LODIBOHLLEG_DNGFPFIECNF_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::RPG::GameCore::FixPoint>* BCHMEFEMKFH()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)())((::PBYTE)hIl2Cpp + LODIBOHLLEG_BCHMEFEMKFH_OFFSET))();
		}

		static ::RPG::Client::GridFightTraitLayerConfig* FJHJDPODPOA()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)())((::PBYTE)hIl2Cpp + LODIBOHLLEG_FJHJDPODPOA_OFFSET))();
		}

		static ::System::Boolean KDNJJNOBFKG(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitEquipType a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitEquipType))((::PBYTE)hIl2Cpp + LODIBOHLLEG_KDNJJNOBFKG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::GridFightTraitEquipEffectConfigRow* BJEMIEKMPIL(::RPG::GameCore::GridFightTraitEquipType a1)
		{
			return ((::RPG::GameCore::GridFightTraitEquipEffectConfigRow*(*)(::RPG::GameCore::GridFightTraitEquipType))((::PBYTE)hIl2Cpp + LODIBOHLLEG_BJEMIEKMPIL_OFFSET))(a1);
		}

	};
