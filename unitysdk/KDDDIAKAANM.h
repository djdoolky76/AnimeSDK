#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPKHMAJLGK.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
class GPJENJKHNCN;
namespace System { class Action; }

#define KDDDIAKAANM_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD4F20)
#define KDDDIAKAANM_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBBD4D20)
#define KDDDIAKAANM_IEBNJBPFKKJ_OFFSET UNITYSDK_OFFSET(0xBBD4ED0)
#define KDDDIAKAANM_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xBBD4CD0)
#define KDDDIAKAANM_JMHMOEDJHAN_OFFSET UNITYSDK_OFFSET(0xBBD4E80)

inline static constexpr unsigned int KDDDIAKAANM_TypeDefinitionIndex = 82572;

	class KDDDIAKAANM : public ::MBPKHMAJLGK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDDIAKAANM_CTOR_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDDIAKAANM_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Action* HKKFFCBJOKM(::GPJENJKHNCN* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::GPJENJKHNCN*))((::PBYTE)hIl2Cpp + KDDDIAKAANM_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Boolean JMHMOEDJHAN(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + KDDDIAKAANM_JMHMOEDJHAN_OFFSET))(this, a1);
		}

		::System::Boolean IEBNJBPFKKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDDIAKAANM_IEBNJBPFKKJ_OFFSET))(this);
		}

	};
