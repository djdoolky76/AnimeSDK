#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74D830)
#define RPG_GAMECORE_IDLELIVEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74D5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEventRow_TypeDefinitionIndex = 11705;

	class IdleLiveEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* AvatarList; // 0x10
		::System::String* FigurePath; // 0x18
		::System::UInt32 InitialAvatarLevel; // 0x20
		::System::UInt32 ID; // 0x24
		::System::UInt32 SentenceSectionID; // 0x28
		::System::Boolean ChangeTeam; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
