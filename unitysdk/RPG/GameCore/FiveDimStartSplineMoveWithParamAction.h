#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStartSplineMoveWithParamAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B0FB0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B0FC0)
#define RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B0F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStartSplineMoveWithParamAction_TypeDefinitionIndex = 18666;

	class FiveDimStartSplineMoveWithParamAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* StartPoint; // 0x10
		::System::String* EndPoint; // 0x18
		::System::Single Duration; // 0x20
		::System::UInt32 MusicDirectorID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStartSplineMoveWithParamAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTARTSPLINEMOVEWITHPARAMACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
