#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CutscenePropRow; }
namespace System { class String; }

#define RPG_GAMECORE_CUTSCENEPROPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FD690)
#define RPG_GAMECORE_CUTSCENEPROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7FD4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CutscenePropRow_TypeDefinitionIndex = 13173;

	class CutscenePropRow : public ::System::Object
	{
	public:
		::System::String* PropID; // 0x10
		::System::String* PropModelPath; // 0x18
		::System::String* ResidentPossessionKey; // 0x20
		::Il2CppArray<::System::String*>* ResidentEffectKey; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEPROPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CutscenePropRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CutscenePropRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUTSCENEPROPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
