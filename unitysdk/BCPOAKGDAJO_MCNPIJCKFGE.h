#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHandBookManualWidgetController_ItemType.h"
#include "unitysdk/System/Object.h"

class ALLHKDOEKBK;
class BCPOAKGDAJO;
class JHACLFNMIKO;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define BCPOAKGDAJO_MCNPIJCKFGE_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0xF78FD20)
#define BCPOAKGDAJO_MCNPIJCKFGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF78FE00)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ITEMTYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF790380)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ITEMTYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF7902D0)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xF790400)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xF790330)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xF7902E0)
#define BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF78FC30)
#define BCPOAKGDAJO_MCNPIJCKFGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF78FC10)

inline static constexpr unsigned int BCPOAKGDAJO_MCNPIJCKFGE_TypeDefinitionIndex = 57524;

class BCPOAKGDAJO_MCNPIJCKFGE : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::ALLHKDOEKBK*>* CNCDBBAMLPL; // 0x10
	::JHACLFNMIKO* GHKNPIDMFMD; // 0x18
	::BCPOAKGDAJO* KLHPEBKNIFB; // 0x20
	::MoleMole::UIHandBookManualWidgetController_ItemType IDBEJJEKGDI; // 0x28
	::System::Int32 FPDDAGHMOJB; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::UIHandBookManualWidgetController_ItemType System_Collections_Generic_IEnumerator_MoleMole_UIHandBookManualWidgetController_ItemType__get_Current()
	{
		return ((::MoleMole::UIHandBookManualWidgetController_ItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ITEMTYPE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_MoleMole_UIHandBookManualWidgetController_ItemType__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_UIHANDBOOKMANUALWIDGETCONTROLLER_ITEMTYPE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCPOAKGDAJO_MCNPIJCKFGE_JPCPBBAMDGJ_OFFSET))(this);
	}
};
