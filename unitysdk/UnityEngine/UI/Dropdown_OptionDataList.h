#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4F04B0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F4F43B0)
#define UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F4F43C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int Dropdown_OptionDataList_TypeDefinitionIndex = 6710;

	class Dropdown_OptionDataList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Options; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET))(this, a1);
		}

	};
}
