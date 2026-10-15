#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2EEFE0)
#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F2F2880)
#define TMPRO_TMP_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F2F2890)

namespace TMPro
{
	inline static constexpr unsigned int TMP_Dropdown_OptionDataList_TypeDefinitionIndex = 44563;

	class TMP_Dropdown_OptionDataList : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* m_Options; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_options()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_options(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DROPDOWN_OPTIONDATALIST_SET_OPTIONS_OFFSET))(this, a1);
		}

	};
}
