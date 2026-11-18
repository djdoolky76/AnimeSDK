#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class CanvasGroup; }

#define MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1C0BF2A0)
#define MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C0BF530)
#define MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C0BF2B0)
#define MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET UNITYSDK_OFFSET(0x1C0BF460)
#define MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0BFA90)
#define MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0BFA80)
#define MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C0BFAD0)

namespace MoleMole
{
	inline static constexpr unsigned int SummerSurfBar_TypeDefinitionIndex = 88207;

	class SummerSurfBar : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_LAPCLNOGIML()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SummerSurfBar_TypeDefinitionIndex)->GetStaticField(0xDCB0);
		}
		::UnityEngine::Vector2 KIJEOOMELGM; // 0x320
		::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x328
		::System::UInt32 LEOKEOFNDLH; // 0x330
		::System::Single HHGILNNMNAK; // 0x334

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR__CCTOR_OFFSET))();
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* baseContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_ONUIOPEN_OFFSET))(this, baseContext);
		}

		::System::Void SetPercent(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_SETPERCENT_OFFSET))(this, value);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMERSURFBAR___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
