#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABLJDBEJNNI.h"
#include "unitysdk/MoleMole/SceneObject_MainCityCurveMove.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_COLLIDEREVENTMODE_OFFSET UNITYSDK_OFFSET(0x13116D90)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_FLOORINFOLIST_OFFSET UNITYSDK_OFFSET(0x13116D60)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_NPCACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x13116D70)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET UNITYSDK_OFFSET(0x13116D80)
#define MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x13116DA0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneObject_MainCityCurveMove_Animation_TypeDefinitionIndex = 65838;

	class SceneObject_MainCityCurveMove_Animation : public ::MoleMole::SceneObject_MainCityCurveMove
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* sceneObjActionStateInfoList; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* npcActionStateInfoList; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* floorInfos; // 0x38
		::ABLJDBEJNNI colliderEventMode; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_FloorInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_FLOORINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_NpcActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_NPCACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_SceneObjActionStateInfoList()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_SCENEOBJACTIONSTATEINFOLIST_OFFSET))(this);
		}

		::ABLJDBEJNNI get_ColliderEventMode()
		{
			return ((::ABLJDBEJNNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENEOBJECT_MAINCITYCURVEMOVE_ANIMATION_GET_COLLIDEREVENTMODE_OFFSET))(this);
		}
	};
}
