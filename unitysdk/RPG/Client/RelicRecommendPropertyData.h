#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RELICRECOMMENDPROPERTYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1971CC90)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicRecommendPropertyData_TypeDefinitionIndex = 68753;

	class RelicRecommendPropertyData : public ::System::Object
	{
	public:
		::System::UInt32 Percent; // 0x10
		::System::Boolean IsExcellent; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AvatarPropertyType PropertyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICRECOMMENDPROPERTYDATA_CTOR_OFFSET))(this);
		}

	};
}
