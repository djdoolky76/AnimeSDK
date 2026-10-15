#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomShowConditionType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleCustomShowCondition; }
namespace System { class String; }

#define RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D584A70)
#define RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D584960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleCustomShowCondition_TypeDefinitionIndex = 18976;

	class ChronicleCustomShowCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChronicleCustomShowConditionType Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Param; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChronicleCustomShowCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChronicleCustomShowCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMSHOWCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
