#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundEmitterSpaceShapeParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_SCENESOUNDOBJDATAITEM_AWAKE_OFFSET UNITYSDK_OFFSET(0x19CE99E0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x19CE9980)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x19CE9970)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x19CEA1A0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_INIT_OFFSET UNITYSDK_OFFSET(0x19CE9A70)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x19CE9E90)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19CE9AB0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONITEMACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x19CE9B20)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENELEAVE_OFFSET UNITYSDK_OFFSET(0x19CE9D80)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENETAGCHANGED_OFFSET UNITYSDK_OFFSET(0x19CE9B80)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMERESET_OFFSET UNITYSDK_OFFSET(0x19CEA3C0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMETOGGLEACTIVE_OFFSET UNITYSDK_OFFSET(0x19CEA420)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM_SETDEACTIVEBYBINDINGOBJECT_OFFSET UNITYSDK_OFFSET(0x19CE9DF0)
#define MOLEMOLE_SCENESOUNDOBJDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEA4A0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundObjDataItem_TypeDefinitionIndex = 75635;

	class SceneSoundObjDataItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* CMNAMGHOIBE; // 0x18
		::System::Boolean isTagActive; // 0x20
		::System::Boolean deactiveByBindingObject; // 0x21
		::System::Byte _padding0[0x6];
		::System::String* eventName; // 0x28
		::System::Boolean is2D; // 0x30
		::System::Boolean isBox; // 0x31
		::System::Byte _padding1[0x2];
		::System::Single radius; // 0x34
		::UnityEngine::Vector3 centerOffset; // 0x38
		::UnityEngine::Vector3 boxExtend; // 0x44
		::MoleMole::SceneSoundEmitterSpaceShapeParam* emitterSpaceShapeParam; // 0x50
		::System::Collections::Generic::List_1<::System::String*>* activeWhenSoundSceneTags; // 0x58
		::System::String* sceneObjectPath; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_soundGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDGAMEOBJECT_OFFSET))(this);
		}

		::System::String* get_soundActionSourceHint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnSceneTagChanged(::System::Collections::Generic::HashSet_1<::System::String*>* AFLNCCHFFNI, ::System::Collections::Generic::HashSet_1<::System::String*>* LDDDCANBLBD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENETAGCHANGED_OFFSET))(this, AFLNCCHFFNI, LDDDCANBLBD);
		}

		::System::Void OnSceneLeave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONSCENELEAVE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_INIT_OFFSET))(this);
		}

		::System::Void SetDeactiveByBindingObject(::System::Boolean KDEKMJNILKC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_SETDEACTIVEBYBINDINGOBJECT_OFFSET))(this, KDEKMJNILKC);
		}

		::System::Void OnItemActiveChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_ONITEMACTIVECHANGED_OFFSET))(this);
		}

		::System::Void RuntimeReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMERESET_OFFSET))(this);
		}

		::System::Void RuntimeToggleActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_RUNTIMETOGGLEACTIVE_OFFSET))(this);
		}

		::System::Void KKFNPONHGEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_KKFNPONHGEM_OFFSET))(this);
		}

		::System::Void HNEAGGGILAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDOBJDATAITEM_HNEAGGGILAC_OFFSET))(this);
		}
	};
}
