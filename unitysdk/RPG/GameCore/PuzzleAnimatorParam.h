#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PuzzleAnimatorParam; }
namespace System { class String; }

#define RPG_GAMECORE_PUZZLEANIMATORPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95DF10)
#define RPG_GAMECORE_PUZZLEANIMATORPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95DD40)

namespace RPG::GameCore
{
	class PuzzleAnimatorParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnimatorPath; // 0x10
		::System::String* ParamName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParamType; // 0x20
		::System::Single ParamValue; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEANIMATORPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PuzzleAnimatorParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PuzzleAnimatorParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUZZLEANIMATORPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
