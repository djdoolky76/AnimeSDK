#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_COLLIDEREVENTMODE_OFFSET UNITYSDK_OFFSET(0x1044D8D0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_FLOORINFOLIST_OFFSET UNITYSDK_OFFSET(0x1044D7E0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_NPCACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1044D7D0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1044D7C0)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1044D8E0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_TypeDefinitionIndex = 47379;

	class SceneObject_MainCityCurveMove : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 SelfAreaId; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* AreaIdList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_SceneObjActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_NpcActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_NPCACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_FloorInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_FLOORINFOLIST_OFFSET))(this);
		}

		::ABLJDBEJNNI get_ColliderEventMode()
		{
			return ((::ABLJDBEJNNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_GET_COLLIDEREVENTMODE_OFFSET))(this);
		}
	};
}
