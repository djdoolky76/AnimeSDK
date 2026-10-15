#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateCurvePropGroupPuzzle; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3570)
#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E3580)
#define RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E3540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateCurvePropGroupPuzzle_TypeDefinitionIndex = 22255;

	class CreateCurvePropGroupPuzzle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x18
		::System::String* PuzzleKey; // 0x20
		::System::String* CurvePropGroupPrefabParam; // 0x28
		::System::String* CurvePropGroupPrefabPath; // 0x30
		::RPG::MVector3 Position; // 0x38
		::RPG::MVector3 Rotation; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateCurvePropGroupPuzzle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateCurvePropGroupPuzzle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATECURVEPROPGROUPPUZZLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
