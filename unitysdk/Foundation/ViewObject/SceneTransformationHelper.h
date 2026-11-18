#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace Foundation::ViewObject { class SceneTransformationGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_ADDSCENETRANSFORMATIONGROUP_OFFSET UNITYSDK_OFFSET(0x116D26C0)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_REMOVESCENETRANSFORMATIONGROUP_OFFSET UNITYSDK_OFFSET(0x116D2940)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_TRYGETSCENETRANSFORMATIONGROUPINFO_OFFSET UNITYSDK_OFFSET(0x116D2B30)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x116D2C50)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneTransformationHelper_TypeDefinitionIndex = 61710;

	class SceneTransformationHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::ViewObject::SceneTransformationGroupInfo*>* _sceneTransformationGroupInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER__CTOR_OFFSET))(this);
		}

		::System::Void AddSceneTransformationGroup(::System::String* tag, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::System::Boolean isCoreGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_ADDSCENETRANSFORMATIONGROUP_OFFSET))(this, tag, groupHandle, isCoreGroup);
		}

		::System::Void RemoveSceneTransformationGroup(::System::String* tag, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::System::Boolean isCoreGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_REMOVESCENETRANSFORMATIONGROUP_OFFSET))(this, tag, groupHandle, isCoreGroup);
		}

		::System::Boolean TryGetSceneTransformationGroupInfo(::System::String* tag, ::Foundation::ViewObject::SceneTransformationGroupInfo*& groupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SceneTransformationGroupInfo*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_TRYGETSCENETRANSFORMATIONGROUPINFO_OFFSET))(this, tag, groupInfo);
		}
	};
}
