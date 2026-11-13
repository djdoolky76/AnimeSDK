#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3DD710)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterStopFullBodyData_TypeDefinitionIndex = 49854;

	class BPCharacterStopFullBodyData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERSTOPFULLBODYDATA_CTOR_OFFSET))(this);
		}

	};
}
