#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_InputNode_InputObjectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HEU_BoundingVolume;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine::Tilemaps { class Tilemap; }

#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0x383DDA0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x383DEB0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x383E1F0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_SETREFERENCESFROMGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x383E2F0)
#define HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x383E3F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputObjectInfo_TypeDefinitionIndex = 17955;

	class HEU_InputObjectInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _gameObject; // 0x10
		::System::String* gameObjectPath; // 0x18
		::HoudiniEngineUnity::HEU_InputNode_InputObjectType inputObjectType; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::Terrain* _terrainReference; // 0x28
		::HEU_BoundingVolume* _boundingVolumeReference; // 0x30
		::UnityEngine::Tilemaps::Tilemap* _tilemapReference; // 0x38
		::UnityEngine::ACF10FE87B4C5617 _syncdTransform; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>* _syncdChildTransforms; // 0x80
		::System::Boolean _useTransformOffset; // 0x88
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 _translateOffset; // 0x8C
		::UnityEngine::Vector3 _rotateOffset; // 0x98
		::UnityEngine::Vector3 _scaleOffset; // 0xA4
		::System::Type* _inputInterfaceType; // 0xB0

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void SetReferencesFromGameObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_SETREFERENCESFROMGAMEOBJECT_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InputObjectInfo* AAC2EF81BF09B09F)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_COPYTO_OFFSET))(this, AAC2EF81BF09B09F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InputObjectInfo* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputObjectInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTOBJECTINFO_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}
	};
}
