#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/StaticSceneObjectListLoopType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ScreenPlayData;
namespace MoleMole { class ScreenPlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LODGroup; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_STATICSCENEOBJECTWIDGET_APGEOKFLNOO_OFFSET UNITYSDK_OFFSET(0x1A093DB0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A093C30)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_CGOJINHKPEP_OFFSET UNITYSDK_OFFSET(0x1A094580)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_DEPCCLNMDII_OFFSET UNITYSDK_OFFSET(0x1A094AC0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A094470)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A0941F0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A094090)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x1A0943F0)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A094370)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET_START_OFFSET UNITYSDK_OFFSET(0x1A093D30)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A094520)
#define MOLEMOLE_STATICSCENEOBJECTWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0944D0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticSceneObjectWidget_TypeDefinitionIndex = 55059;

	class StaticSceneObjectWidget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector3* StaticGet_JLFKHIGFPHG()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget_TypeDefinitionIndex)->GetStaticField(0x11A50);
		}
		static ::System::Int32* StaticGet_KMJHBPPOCLN()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(StaticSceneObjectWidget_TypeDefinitionIndex)->GetStaticField(0x11A5C);
		}
		::MoleMole::ScreenPlayer* KDICDGJEFNL; // 0x18
		::MoleMole::StaticSceneObjectListLoopType playMode; // 0x20
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::ScreenPlayData*>* playList; // 0x28
		::System::Boolean muteSound; // 0x30
		::System::Byte _padding1[0x7];
		::UnityEngine::LODGroup* BAKBGFKHIDD; // 0x38
		::Il2CppArray<::UnityEngine::Material*>* KOOBNNGPHDM; // 0x40
		::System::Boolean isDebug; // 0x48
		::System::Boolean overrideInitIntensity; // 0x49
		::System::Byte _padding2[0x2];
		::System::Single initIntensity; // 0x4C
		::Foundation::Coroutine::CoroutineHandle HDIEABKPPNF; // 0x50
		::System::Boolean _forceUpdate; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONLEAVESCENE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean CGOJINHKPEP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_CGOJINHKPEP_OFFSET))(this);
		}

		::System::Void APGEOKFLNOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_APGEOKFLNOO_OFFSET))(this);
		}

		::System::Void DEPCCLNMDII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICSCENEOBJECTWIDGET_DEPCCLNMDII_OFFSET))(this);
		}
	};
}
