#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialResRow; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALRESROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E2F0)
#define RPG_GAMECORE_TUTORIALRESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC6D840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialResRow_TypeDefinitionIndex = 15384;

	class TutorialResRow : public ::System::Object
	{
	public:
		::System::String* KeyMapPath; // 0x10
		::System::String* TextPath; // 0x18
		::System::String* ContentPath; // 0x20
		::System::String* PrefabPath; // 0x28
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
