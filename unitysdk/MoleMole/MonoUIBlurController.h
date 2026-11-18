#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class EventArgs; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOUIBLURCONTROLLER_AHGJDCHDOIA_OFFSET UNITYSDK_OFFSET(0x139F9C40)
#define MOLEMOLE_MONOUIBLURCONTROLLER_DCPAECIJBEG_OFFSET UNITYSDK_OFFSET(0x139F9CD0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_FNJICDLHJFM_OFFSET UNITYSDK_OFFSET(0x139F9600)
#define MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET UNITYSDK_OFFSET(0x139F97B0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_IOMINAHAAED_OFFSET UNITYSDK_OFFSET(0x139F9DB0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_LOPIHDCEMPO_OFFSET UNITYSDK_OFFSET(0x139F9D20)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x139F9370)
#define MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x139F8FB0)
#define MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x139F8DC0)
#define MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x139F9BF0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIBlurController_TypeDefinitionIndex = 82440;

	class MonoUIBlurController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean needGraphicRaycast; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::UnityEngine::GameObject*>* affectTrans; // 0x20
		::System::Int32 HCOPCAOCJEP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void HandleEvents(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_HANDLEEVENTS_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void AHGJDCHDOIA(::System::Int32 BEIJNPOCJGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_AHGJDCHDOIA_OFFSET))(this, BEIJNPOCJGB);
		}

		::System::Void DCPAECIJBEG(::System::Int32 BEIJNPOCJGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_DCPAECIJBEG_OFFSET))(this, BEIJNPOCJGB);
		}

		::System::Void LOPIHDCEMPO(::System::Int32 BEIJNPOCJGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_LOPIHDCEMPO_OFFSET))(this, BEIJNPOCJGB);
		}

		::System::Void FNJICDLHJFM(::System::Int32 KMOHKCADPNA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_FNJICDLHJFM_OFFSET))(this, KMOHKCADPNA);
		}

		::System::Void IOMINAHAAED(::System::Int32 BEIJNPOCJGB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIBLURCONTROLLER_IOMINAHAAED_OFFSET))(this, BEIJNPOCJGB);
		}
	};
}
