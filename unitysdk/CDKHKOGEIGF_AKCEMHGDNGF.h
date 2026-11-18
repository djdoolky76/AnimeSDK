#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class FAIKBPENCON;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FLFEIMNOHGB_1;

#define CDKHKOGEIGF_AKCEMHGDNGF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x159BCAF0)
#define CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159BCC40)
#define CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159BCCA0)
#define CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x159BCC50)
#define CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159BCAE0)
#define CDKHKOGEIGF_AKCEMHGDNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x159BCAD0)

inline static constexpr unsigned int CDKHKOGEIGF_AKCEMHGDNGF_TypeDefinitionIndex = 56727;

class CDKHKOGEIGF_AKCEMHGDNGF : public ::System::Object
{
public:
	::FLFEIMNOHGB_1<::FAIKBPENCON*>* DJAHILLOCIJ; // 0x10
	::System::Object* IDBEJJEKGDI; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* ADNFAKNPOCG; // 0x20
	::System::Single BPJDAPKOKLC; // 0x28
	::System::Single MDPPNMIPDMP; // 0x2C
	::System::Int32 MDPILDGFNHN; // 0x30
	::System::Int32 AKMAPINGBLO; // 0x34

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF_MOVENEXT_OFFSET))(this);
	}

	::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKHKOGEIGF_AKCEMHGDNGF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
