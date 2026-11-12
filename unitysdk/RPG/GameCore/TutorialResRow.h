#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialResRow; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALRESROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE80FE0)
#define RPG_GAMECORE_TUTORIALRESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE80530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialResRow_TypeDefinitionIndex = 15540;

	class TutorialResRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* ContentPath; // 0x18
		::System::String* TextPath; // 0x20
		::System::String* KeyMapPath; // 0x28
		::System::Int32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialResRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
