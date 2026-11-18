#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PBGINNDMHAB;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13B26540)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController_Data_TypeDefinitionIndex = 83382;

	class UIVHSStoreTagWidgetController_Data : public ::System::Object
	{
	public:
		::System::Func_1<::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*>* currentSelectedCollections; // 0x10
		::PBGINNDMHAB* Template; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}
	};
}
