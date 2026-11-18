#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EGenericMonsterIdType.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ExtraGroupMemberBuildData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ANOKJGCCGAO;
class FLDPBAPLICI;
namespace Foundation::ViewObject { class GenericGroupMemberOverrideContext; }
namespace System { template <typename T> class Action_1; }

#define FOUNDATION_VIEWOBJECT_GENERICGROUPMEMBERCONFIGRESOLVER_CREATERUNTIMEMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x17510DE0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPMEMBERCONFIGRESOLVER_TRYRESOLVEVIEWOBJECTCONFIG_OFFSET UNITYSDK_OFFSET(0x175107E0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupMemberConfigResolver_TypeDefinitionIndex = 68724;

	class GenericGroupMemberConfigResolver : public ::System::Object
	{
	public:
		static ::System::Boolean TryResolveViewObjectConfig(::System::UInt32 groupId, ::System::UInt32 memberId, ::ANOKJGCCGAO* memberConfig, ::System::Action_1<::Foundation::ViewObject::GenericGroupMemberOverrideContext*>* paramOverride, ::Foundation::ViewObject::ExtraGroupMemberBuildData& buildData, ::FLDPBAPLICI* rawViewObjectConfig)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::ANOKJGCCGAO*, ::System::Action_1<::Foundation::ViewObject::GenericGroupMemberOverrideContext*>*, ::Foundation::ViewObject::ExtraGroupMemberBuildData&, ::FLDPBAPLICI*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPMEMBERCONFIGRESOLVER_TRYRESOLVEVIEWOBJECTCONFIG_OFFSET))(groupId, memberId, memberConfig, paramOverride, buildData, rawViewObjectConfig);
		}

		static ::ANOKJGCCGAO* CreateRuntimeMemberConfig(::System::UInt32 memberId, ::MDANEEPAJKA memberType, ::System::Int32 viewObjectId, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, ::System::Int32 monsterId, ::Foundation::ViewObject::EGenericMonsterIdType monsterIdType)
		{
			return ((::ANOKJGCCGAO*(*)(::System::UInt32, ::MDANEEPAJKA, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::Foundation::ViewObject::EGenericMonsterIdType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPMEMBERCONFIGRESOLVER_CREATERUNTIMEMEMBERCONFIG_OFFSET))(memberId, memberType, viewObjectId, position, rotation, monsterId, monsterIdType);
		}
	};
}
