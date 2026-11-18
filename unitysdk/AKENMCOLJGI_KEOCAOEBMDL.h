#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AKENMCOLJGI;
namespace MoleMole { class UIGachaOptItemRowWidgetController_Context; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AKENMCOLJGI_KEOCAOEBMDL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x144E4EE0)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x144E55D0)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x144E5560)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x144E5650)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x144E55C0)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x144E5570)
#define AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x144E4ED0)
#define AKENMCOLJGI_KEOCAOEBMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4EB0)

inline static constexpr unsigned int AKENMCOLJGI_KEOCAOEBMDL_TypeDefinitionIndex = 44278;

class AKENMCOLJGI_KEOCAOEBMDL : public ::System::Object
{
public:
	::AKENMCOLJGI* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* GJEPPOOOGLI; // 0x18
	::MoleMole::UIGachaOptItemRowWidgetController_Context* IDBEJJEKGDI; // 0x20
	::System::Int32 ABJBKJNADOD; // 0x28
	::System::Int32 FPDDAGHMOJB; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Int32 EMAIAAIAGPP; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::UIGachaOptItemRowWidgetController_Context* System_Collections_Generic_IEnumerator_MoleMole_UIGachaOptItemRowWidgetController_Context__get_Current()
	{
		return ((::MoleMole::UIGachaOptItemRowWidgetController_Context*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_MoleMole_UIGachaOptItemRowWidgetController_Context__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIGACHAOPTITEMROWWIDGETCONTROLLER_CONTEXT__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKENMCOLJGI_KEOCAOEBMDL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
