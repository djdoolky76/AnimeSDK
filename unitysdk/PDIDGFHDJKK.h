#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBPKHMAJLGK.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
class GPJENJKHNCN;
namespace System { class Action; }

#define PDIDGFHDJKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC91A490)
#define PDIDGFHDJKK_GET_TARGET_OFFSET UNITYSDK_OFFSET(0xC91A430)
#define PDIDGFHDJKK_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xC91A4A0)
#define PDIDGFHDJKK_IEBNJBPFKKJ_OFFSET UNITYSDK_OFFSET(0xC91A5A0)
#define PDIDGFHDJKK_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0xC91A440)
#define PDIDGFHDJKK_JMHMOEDJHAN_OFFSET UNITYSDK_OFFSET(0xC91A550)

inline static constexpr unsigned int PDIDGFHDJKK_TypeDefinitionIndex = 82570;

	class PDIDGFHDJKK : public ::MBPKHMAJLGK
	{
	public:
		::RPG::Client::MechCraft::MechCraftAttributeType _Target_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::MechCraftAttributeType get_Target()
		{
			return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_GET_TARGET_OFFSET))(this);
		}

		::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType JBIOGKPHKKC()
		{
			return ((::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Action* HKKFFCBJOKM(::GPJENJKHNCN* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::GPJENJKHNCN*))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Boolean JMHMOEDJHAN(::RPG::Client::MechCraft::MechCraftAttributeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_JMHMOEDJHAN_OFFSET))(this, a1);
		}

		::System::Boolean IEBNJBPFKKJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDIDGFHDJKK_IEBNJBPFKKJ_OFFSET))(this);
		}

	};
