#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AssistantRuleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistantTipsConfigRow; }

#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D34C0)
#define RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D32C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistantTipsConfigRow_TypeDefinitionIndex = 12676;

	class AssistantTipsConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::Client::TextID Content; // 0x18
		::System::UInt32 TipsID; // 0x28
		::RPG::GameCore::AssistantRuleType TipsRule; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistantTipsConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistantTipsConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
