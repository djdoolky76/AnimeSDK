#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EKOMAFPIPMA_DKCFBCFGADG;
class ODCBCMEIOGG;
class OHIGNOFDDAJ;
namespace MoleMole { class UIBaseController; }

#define MOLEMOLE_UICONTROLLERCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x17059E80)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_FROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17059D00)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_HIDEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x17059CC0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET__REFFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17059CE0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_ISVALIDARGS_OFFSET UNITYSDK_OFFSET(0x17059F10)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x17059EC0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SETFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17059DD0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SETOPERATIONPARAM_OFFSET UNITYSDK_OFFSET(0x17059E30)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SET_HIDEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x17059CD0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SET__REFFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x17059CF0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17059F80)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17033390)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerContextBase_TypeDefinitionIndex = 63022;

	class UIControllerContextBase : public ::System::Object
	{
	public:
		static ::MoleMole::UIControllerContextBase** StaticGet_Empty()
		{
			return (::MoleMole::UIControllerContextBase**)Il2CppClass::FromTypeDefinitionIndex(UIControllerContextBase_TypeDefinitionIndex)->GetStaticField(0x3BD00);
		}
		::EKOMAFPIPMA_DKCFBCFGADG* jumpParas; // 0x10
		::OHIGNOFDDAJ* __RefFromController_k__BackingField; // 0x18
		::System::Int32 SystemOperationParam; // 0x20
		::System::Boolean _HideFadeInAnimation_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HideFadeInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_HIDEFADEINANIMATION_OFFSET))(this);
		}

		::System::Void set_HideFadeInAnimation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SET_HIDEFADEINANIMATION_OFFSET))(this, value);
		}

		::OHIGNOFDDAJ* get__RefFromController()
		{
			return ((::OHIGNOFDDAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET__REFFROMCONTROLLER_OFFSET))(this);
		}

		::System::Void set__RefFromController(::OHIGNOFDDAJ* value)
		{
			return ((::System::Void(*)(::PVOID, ::OHIGNOFDDAJ*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SET__REFFROMCONTROLLER_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_FromController()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_FROMCONTROLLER_OFFSET))(this);
		}

		::System::Void SetFromController(::MoleMole::UIBaseController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SETFROMCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void SetOperationParam(::System::Int32 operationParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SETOPERATIONPARAM_OFFSET))(this, operationParam);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::ODCBCMEIOGG* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::ODCBCMEIOGG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Boolean IsValidArgs(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_ISVALIDARGS_OFFSET))(this, index);
		}
	};
}
