#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolfCollectionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfCollectionRow; }

#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABB640)
#define RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DABB4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfCollectionRow_TypeDefinitionIndex = 12347;

	class SilverWolfCollectionRow : public ::System::Object
	{
	public:
		::System::UInt32 PositionID; // 0x10
		::System::UInt32 TypeParam; // 0x14
		::RPG::GameCore::SilverWolfCollectionType Type; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SilverWolfCollectionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SilverWolfCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFCOLLECTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
