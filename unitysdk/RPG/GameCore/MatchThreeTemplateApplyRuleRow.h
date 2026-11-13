#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeTemplateType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeTemplateApplyRuleRow; }
namespace System { class String; }

#define RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB61D50)
#define RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB61B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeTemplateApplyRuleRow_TypeDefinitionIndex = 11985;

	class MatchThreeTemplateApplyRuleRow : public ::System::Object
	{
	public:
		::System::String* Mode; // 0x10
		::System::String* TemplatePath; // 0x18
		::System::UInt32 Round; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::MatchThreeTemplateType Type; // 0x28
		::System::UInt32 PR; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeTemplateApplyRuleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREETEMPLATEAPPLYRULEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
