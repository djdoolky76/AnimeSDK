#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class HIAHLINDEHP;
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_AFFIXUIDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC448890)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int AffixUiData_TypeDefinitionIndex = 75410;

	class AffixUiData : public ::System::Object
	{
	public:
		::System::String* DisplayValue; // 0x10
		::System::String* Icon; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::Void _ctor(::HIAHLINDEHP* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIAHLINDEHP*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_AFFIXUIDATA_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
}
