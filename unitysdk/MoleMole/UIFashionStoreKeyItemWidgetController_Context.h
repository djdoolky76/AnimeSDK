#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PONBOHIGCJP_ALIFGCPJLFH;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x180868D0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET UNITYSDK_OFFSET(0x180868E0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180868F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_Context_TypeDefinitionIndex = 69063;

	class UIFashionStoreKeyItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PONBOHIGCJP_ALIFGCPJLFH* _FashionStoreKeyData_k__BackingField; // 0x28
		::System::Action_1<::System::Int32>* OnClick; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::PONBOHIGCJP_ALIFGCPJLFH* get_FashionStoreKeyData()
		{
			return ((::PONBOHIGCJP_ALIFGCPJLFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_GET_FASHIONSTOREKEYDATA_OFFSET))(this);
		}

		::System::Void set_FashionStoreKeyData(::PONBOHIGCJP_ALIFGCPJLFH* value)
		{
			return ((::System::Void(*)(::PVOID, ::PONBOHIGCJP_ALIFGCPJLFH*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_CONTEXT_SET_FASHIONSTOREKEYDATA_OFFSET))(this, value);
		}
	};
}
