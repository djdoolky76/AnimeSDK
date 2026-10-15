#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/System/Object.h"
class GPJENJKHNCN;
class MBPKHMAJLGK;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define EHMNCCDAJDM_CTOR_OFFSET UNITYSDK_OFFSET(0x154AC100)
#define EHMNCCDAJDM_GET_DURATIONOFUNIT_OFFSET UNITYSDK_OFFSET(0x154ABEA0)
#define EHMNCCDAJDM_HDOFEPFEOEB_OFFSET UNITYSDK_OFFSET(0x154ABEC0)
#define EHMNCCDAJDM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x154AC030)
#define EHMNCCDAJDM_SET_DURATIONOFUNIT_OFFSET UNITYSDK_OFFSET(0x154ABEB0)

inline static constexpr unsigned int EHMNCCDAJDM_TypeDefinitionIndex = 79791;

	class EHMNCCDAJDM : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* _DurationOfUnit_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMNCCDAJDM_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* get_DurationOfUnit()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMNCCDAJDM_GET_DURATIONOFUNIT_OFFSET))(this);
		}

		::System::Void set_DurationOfUnit(::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType, ::System::Single>*))((::PBYTE)hIl2Cpp + EHMNCCDAJDM_SET_DURATIONOFUNIT_OFFSET))(this, a1);
		}

		::System::Single HDOFEPFEOEB(::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType))((::PBYTE)hIl2Cpp + EHMNCCDAJDM_HDOFEPFEOEB_OFFSET))(this, a1);
		}

		::System::Action* HKKFFCBJOKM(::MBPKHMAJLGK* a1, ::GPJENJKHNCN* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::MBPKHMAJLGK*, ::GPJENJKHNCN*))((::PBYTE)hIl2Cpp + EHMNCCDAJDM_HKKFFCBJOKM_OFFSET))(this, a1, a2);
		}

	};
