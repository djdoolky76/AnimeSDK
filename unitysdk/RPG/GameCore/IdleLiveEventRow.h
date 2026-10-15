#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77B2C0)
#define RPG_GAMECORE_IDLELIVEEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77B050)

namespace RPG::GameCore
{
	class IdleLiveEventRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* AvatarList; // 0x18
		::System::UInt32 InitialAvatarLevel; // 0x20
		::System::Boolean ChangeTeam; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x28
		::System::UInt32 SentenceSectionID; // 0x2C
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
