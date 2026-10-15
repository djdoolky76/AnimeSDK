#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MatchThreeDragTutorial; }

#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D827140)
#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D827150)
#define RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D827110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeDragTutorial_TypeDefinitionIndex = 20986;

	class MatchThreeDragTutorial : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean EnableMatchHint; // 0x19
		::System::Byte _padding0[0x6];
		::Il2CppArray<::RPG::MVector2>* MaskPos; // 0x20
		::Il2CppArray<::RPG::MVector2>* DragablePos; // 0x28
		::RPG::MVector2 DragStart; // 0x30
		::RPG::MVector2 DragEnd; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeDragTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeDragTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MatchThreeDragTutorial* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MatchThreeDragTutorial*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREEDRAGTUTORIAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
