#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityReCollectionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRECOLLECTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA95FD0)
#define RPG_GAMECORE_ACTIVITYRECOLLECTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA95DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityReCollectionConfigRow_TypeDefinitionIndex = 12385;

	class ActivityReCollectionConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID Name; // 0x20
		::System::UInt32 ID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRECOLLECTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityReCollectionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityReCollectionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRECOLLECTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
