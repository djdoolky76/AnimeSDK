#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Recommend/GoodRelicRecommendType.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemData; }
namespace RPG::Client::Recommend { class GoodRelicPropertyDataGroup; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ADDSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D077FA0)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D078270)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0767B0)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GETSUBPROPERTYMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x1D077F50)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GET_ISGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x1D078220)
#define RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ISMATCHSUBPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D078620)

namespace RPG::Client::Recommend
{
	inline static constexpr unsigned int GoodRelicPropertyDataGroup_TypeDefinitionIndex = 76607;

	class GoodRelicPropertyDataGroup : public ::System::Object
	{
	public:
		::System::String* AvatarIconPath; // 0x10
		::RPG::Client::ItemData* ItemData; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::AvatarPropertyType>* _SubPropertyTypes; // 0x20
		::System::UInt32 AvatarID; // 0x28
		::System::Boolean IsMarked; // 0x2C
		::System::Boolean IsHaveAvatar; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::Client::Recommend::GoodRelicRecommendType Type; // 0x30
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::Recommend::GoodRelicRecommendType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::Recommend::GoodRelicRecommendType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsGrowthTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GET_ISGROWTHTARGET_OFFSET))(this);
		}

		::System::Void AddSubProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ADDSUBPROPERTY_OFFSET))(this, a1);
		}

		::System::Int32 GetSubPropertyMatchCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_GETSUBPROPERTYMATCHCOUNT_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::Recommend::GoodRelicPropertyDataGroup* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Recommend::GoodRelicPropertyDataGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean IsMatchSubProperty(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECOMMEND_GOODRELICPROPERTYDATAGROUP_ISMATCHSUBPROPERTY_OFFSET))(this, a1);
		}

	};
}
