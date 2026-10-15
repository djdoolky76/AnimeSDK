#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournContentCollectionRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA087E0)
#define RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA083E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentCollectionRow_TypeDefinitionIndex = 15033;

	class RogueTournContentCollectionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::String* SlotIconPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::UInt32 CollectionID; // 0x28
		::System::Int32 EntityRuntimeReplaceArtPrefabID; // 0x2C
		::System::UInt32 UnlockID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CollectionEffectDesc; // 0x38
		::RPG::Client::TextID CollectionName; // 0x48
		::RPG::Client::TextID CollectionDesc; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournContentCollectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournContentCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
