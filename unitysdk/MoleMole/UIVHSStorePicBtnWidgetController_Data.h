#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBMLGNBFJCD;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKISCDFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2510)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKISSELECTEDFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2550)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKMULTISELECTFULLFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2530)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKISCDFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2520)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKISSELECTEDFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2560)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKMULTISELECTFULLFUNC_OFFSET UNITYSDK_OFFSET(0x13BD2540)
#define MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD2570)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStorePicBtnWidgetController_Data_TypeDefinitionIndex = 75283;

	class UIVHSStorePicBtnWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_1<::System::Boolean>* _CheckMultiSelectFullFunc_k__BackingField; // 0x10
		::DBMLGNBFJCD* Template; // 0x18
		::System::Func_2<::System::Int32, ::System::Boolean>* _CheckIsSelectedFunc_k__BackingField; // 0x20
		::System::Func_2<::System::Int32, ::System::Boolean>* _CheckIsCDFunc_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::System::Func_2<::System::Int32, ::System::Boolean>* get_CheckIsCDFunc()
		{
			return ((::System::Func_2<::System::Int32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKISCDFUNC_OFFSET))(this);
		}

		::System::Void set_CheckIsCDFunc(::System::Func_2<::System::Int32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKISCDFUNC_OFFSET))(this, value);
		}

		::System::Func_1<::System::Boolean>* get_CheckMultiSelectFullFunc()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKMULTISELECTFULLFUNC_OFFSET))(this);
		}

		::System::Void set_CheckMultiSelectFullFunc(::System::Func_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKMULTISELECTFULLFUNC_OFFSET))(this, value);
		}

		::System::Func_2<::System::Int32, ::System::Boolean>* get_CheckIsSelectedFunc()
		{
			return ((::System::Func_2<::System::Int32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_GET_CHECKISSELECTEDFUNC_OFFSET))(this);
		}

		::System::Void set_CheckIsSelectedFunc(::System::Func_2<::System::Int32, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREPICBTNWIDGETCONTROLLER_DATA_SET_CHECKISSELECTEDFUNC_OFFSET))(this, value);
		}
	};
}
