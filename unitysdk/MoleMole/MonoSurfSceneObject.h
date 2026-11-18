#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SurfGameTriggerDataEntry.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"
#include "unitysdk/LGNMDDLDMMN.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_MONOSURFSCENEOBJECT_DALOAOKJKLM_OFFSET UNITYSDK_OFFSET(0x11946570)
#define MOLEMOLE_MONOSURFSCENEOBJECT_DGAHJACDEGM_OFFSET UNITYSDK_OFFSET(0x119463C0)
#define MOLEMOLE_MONOSURFSCENEOBJECT_EFCEJPPPGEE_OFFSET UNITYSDK_OFFSET(0x11946840)
#define MOLEMOLE_MONOSURFSCENEOBJECT_GETROTATION_OFFSET UNITYSDK_OFFSET(0x11946B90)
#define MOLEMOLE_MONOSURFSCENEOBJECT_JBIMGICMDHM_OFFSET UNITYSDK_OFFSET(0x11946A60)
#define MOLEMOLE_MONOSURFSCENEOBJECT_LBIAMHEKNKC_OFFSET UNITYSDK_OFFSET(0x11946B30)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11946520)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11946320)
#define MOLEMOLE_MONOSURFSCENEOBJECT_ONTRIGGEREVENT_OFFSET UNITYSDK_OFFSET(0x11946730)
#define MOLEMOLE_MONOSURFSCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11946C20)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSurfSceneObject_TypeDefinitionIndex = 71882;

	class MonoSurfSceneObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::UnityEngine::Collider* TriggerCollider; // 0x38
		::System::Int32 SurfSceneObjectID; // 0x40
		::System::Byte _padding0[0x4];
		::MoleMole::Config::SurfGameTriggerDataEntry CEJENBBHBBG; // 0x48
		::System::Boolean HLAGLLJGOHB; // 0x60
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::HashSet_1<::MoleMole::MonoTriggerEventDispatcher*>* FHFACCFPKOC; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTriggerEvent(::LGNMDDLDMMN FFNKDGGHBPP)
		{
			return ((::System::Void(*)(::PVOID, ::LGNMDDLDMMN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_ONTRIGGEREVENT_OFFSET))(this, FFNKDGGHBPP);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_GETROTATION_OFFSET))(this);
		}

		::System::Void DGAHJACDEGM(::MoleMole::MonoTriggerEventDispatcher* ICILGJFKNDB)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTriggerEventDispatcher*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_DGAHJACDEGM_OFFSET))(this, ICILGJFKNDB);
		}

		::System::Void DALOAOKJKLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_DALOAOKJKLM_OFFSET))(this);
		}

		::System::Void LBIAMHEKNKC(::LGNMDDLDMMN FFNKDGGHBPP)
		{
			return ((::System::Void(*)(::PVOID, ::LGNMDDLDMMN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_LBIAMHEKNKC_OFFSET))(this, FFNKDGGHBPP);
		}

		::System::Void EFCEJPPPGEE(::LGNMDDLDMMN FFNKDGGHBPP)
		{
			return ((::System::Void(*)(::PVOID, ::LGNMDDLDMMN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_EFCEJPPPGEE_OFFSET))(this, FFNKDGGHBPP);
		}

		::System::Void JBIMGICMDHM(::LGNMDDLDMMN FFNKDGGHBPP)
		{
			return ((::System::Void(*)(::PVOID, ::LGNMDDLDMMN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSURFSCENEOBJECT_JBIMGICMDHM_OFFSET))(this, FFNKDGGHBPP);
		}
	};
}
