#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPKHMAJLGK.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
class GPJENJKHNCN;
namespace System { class Action; }

#define GCPBLDNKFCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15984860)
#define GCPBLDNKFCI_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x15984810)
#define GCPBLDNKFCI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15984870)
#define GCPBLDNKFCI_IEBNJBPFKKJ_OFFSET UNITYSDK_OFFSET(0x15984930)
#define GCPBLDNKFCI_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x15984820)
#define GCPBLDNKFCI_JMHMOEDJHAN_OFFSET UNITYSDK_OFFSET(0x159848E0)

inline static constexpr unsigned int GCPBLDNKFCI_TypeDefinitionIndex = 79793;

	class GCPBLDNKFCI : public ::MBPKHMAJLGK
	{
	public:
		::RPG::Client::MechCraft::MechCraftAttributeType _Target_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType get_Target()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_GET_TARGET_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Action* HKKFFCBJOKM(::GPJENJKHNCN* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::GPJENJKHNCN*))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Boolean JMHMOEDJHAN(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_JMHMOEDJHAN_OFFSET))(this, a1);
		}

		::System::Boolean IEBNJBPFKKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPBLDNKFCI_IEBNJBPFKKJ_OFFSET))(this);
		}

	};
