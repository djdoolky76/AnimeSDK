#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameplayGuideSubTypeDataConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71C260)
#define RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D71BB80)

namespace RPG::GameCore
{
	class GameplayGuideSubTypeDataConfigRow : public ::System::Object
	{
	public:
		::System::String* TabIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ItemListForType; // 0x18
		::System::UInt32 SubTypeID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameplayGuideSubTypeDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDESUBTYPEDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
