#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET UNITYSDK_OFFSET(0x43D1680)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionDataList_TypeDefinitionIndex = 18644;

	class Dropdown_OptionDataList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Options; // 0x10

		::System::Collections::Generic::List_1<::System::Object*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::System::Object*>* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST__CTOR_OFFSET))(this);
		}
	};
}
