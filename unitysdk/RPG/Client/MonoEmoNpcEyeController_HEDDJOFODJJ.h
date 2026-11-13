#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFD230)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1ADFD660)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_HNEOLEIEAMI_OFFSET UNITYSDK_OFFSET(0x1ADFD9C0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1ADFD4F0)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_LPPIHKNHFGF_OFFSET UNITYSDK_OFFSET(0x1ADFD740)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0x1ADFD870)
#define RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_PFCKLEMPAAD_OFFSET UNITYSDK_OFFSET(0x1ADFDD50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoNpcEyeController_HEDDJOFODJJ_TypeDefinitionIndex = 73135;

	class MonoEmoNpcEyeController_HEDDJOFODJJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* FBIBDFCNFAM; // 0x10
		::System::Single EMIGJFKIAEF; // 0x18
		::System::Boolean MHEAIOMEGCA; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MOKNCFJICIC(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_MOKNCFJICIC_OFFSET))(this, a1, a2);
		}

		::System::Void LPPIHKNHFGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_LPPIHKNHFGF_OFFSET))(this);
		}

		::System::Void HNEOLEIEAMI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_HNEOLEIEAMI_OFFSET))(this, a1);
		}

		::System::Boolean PFCKLEMPAAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMONPCEYECONTROLLER_HEDDJOFODJJ_PFCKLEMPAAD_OFFSET))(this);
		}

	};
}
