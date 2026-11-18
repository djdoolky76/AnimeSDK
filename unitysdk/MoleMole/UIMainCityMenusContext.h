#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPEFHBKEOGL.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14C91FC0)
#define MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x14C92020)
#define MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14C91F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMenusContext_TypeDefinitionIndex = 67598;

	class UIMainCityMenusContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* teleportList; // 0x28
		::FPEFHBKEOGL type; // 0x30
		::System::Int32 curSelectId; // 0x34

		::System::Void _ctor(::FPEFHBKEOGL type)
		{
			return ((::System::Void(*)(::PVOID, ::FPEFHBKEOGL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_OFFSET))(this, type);
		}

		::System::Void _ctor_1(::FPEFHBKEOGL type, ::System::Int32 selectId)
		{
			return ((::System::Void(*)(::PVOID, ::FPEFHBKEOGL, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_1_OFFSET))(this, type, selectId);
		}

		::System::Void _ctor_2(::System::Collections::Generic::List_1<::System::Int32>* teleportList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMENUSCONTEXT__CTOR_2_OFFSET))(this, teleportList);
		}
	};
}
