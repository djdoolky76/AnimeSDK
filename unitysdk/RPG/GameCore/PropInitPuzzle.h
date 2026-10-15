#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINITPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94E0C0)
#define RPG_GAMECORE_PROPINITPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94E110)
#define RPG_GAMECORE_PROPINITPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94E040)

namespace RPG::GameCore
{
	class PropInitPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* BoardPath; // 0x20
		::System::String* AttachPoint; // 0x28
		::RPG::MVector3 LocalPosition; // 0x30
		::RPG::MVector3 LocalRotation; // 0x3C
		::RPG::MVector3 LocalScale; // 0x48
		::System::Boolean LOD; // 0x54
		::System::Boolean IsAsyncLoad; // 0x55
		::System::Boolean AutoPlayFinishSound; // 0x56
		::System::Byte _padding0[0x1];
		::RPG::GameCore::DynamicString* PuzzleArea; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropInitPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINITPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
