#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEDJLOFACHD;
namespace MoleMole { class MonoGamepadBaseList; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define AEDJLOFACHD_DBKLBAIMANL_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x14396EF0)
#define AEDJLOFACHD_DBKLBAIMANL_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14396FD0)
#define AEDJLOFACHD_DBKLBAIMANL_NIEADFOCLEC_OFFSET UNITYSDK_OFFSET(0x14396EE0)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_MONOGAMEPADBASELIST__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x143974E0)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_MONOGAMEPADBASELIST__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14397470)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x14397560)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x143974D0)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14397480)
#define AEDJLOFACHD_DBKLBAIMANL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14396DE0)
#define AEDJLOFACHD_DBKLBAIMANL__CTOR_OFFSET UNITYSDK_OFFSET(0x14396DC0)

inline static constexpr unsigned int AEDJLOFACHD_DBKLBAIMANL_TypeDefinitionIndex = 44170;

class AEDJLOFACHD_DBKLBAIMANL : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerator_1<::AEDJLOFACHD*>* GHANCJDIDBC; // 0x10
	::MoleMole::MonoGamepadBaseList* IDBEJJEKGDI; // 0x18
	::System::Object* CNCDBBAMLPL; // 0x20
	::System::Byte _padding0[0x10];
	::AEDJLOFACHD* KLHPEBKNIFB; // 0x38
	::System::Int32 FPDDAGHMOJB; // 0x40
	::System::Int32 MDPILDGFNHN; // 0x44

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_MOVENEXT_OFFSET))(this);
	}

	::MoleMole::MonoGamepadBaseList* System_Collections_Generic_IEnumerator_MoleMole_MonoGamepadBaseList__get_Current()
	{
		return ((::MoleMole::MonoGamepadBaseList*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_MOLEMOLE_MONOGAMEPADBASELIST__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::MoleMole::MonoGamepadBaseList*>* System_Collections_Generic_IEnumerable_MoleMole_MonoGamepadBaseList__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::MoleMole::MonoGamepadBaseList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_MOLEMOLE_MONOGAMEPADBASELIST__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void NIEADFOCLEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_NIEADFOCLEC_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJLOFACHD_DBKLBAIMANL_JPCPBBAMDGJ_OFFSET))(this);
	}
};
