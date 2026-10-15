#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleState; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLESTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F4A30)
#define RPG_GAMECORE_FREESTYLESTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F4820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleState_TypeDefinitionIndex = 16938;

	class FreeStyleState : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MotionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* EntranceFreeStyleIDList; // 0x18
		::System::Boolean CanTransitionToState; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::String*>* TransitionToStateNames; // 0x28
		::System::UInt32 SameAsMotionIDOnLoop; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLESTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
