#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JCCPACPPFNF;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JCCPACPPFNF_LNDDNPPBJNJ_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1989E270)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SINGLE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1989E5A0)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1989E4F0)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1989E640)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1989E550)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1989E500)
#define JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1989E260)
#define JCCPACPPFNF_LNDDNPPBJNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1989E240)

inline static constexpr unsigned int JCCPACPPFNF_LNDDNPPBJNJ_TypeDefinitionIndex = 48224;

class JCCPACPPFNF_LNDDNPPBJNJ : public ::System::Object
{
public:
	::JCCPACPPFNF* KLHPEBKNIFB; // 0x10
	::System::Single MJFKAGIOKMA; // 0x18
	::System::Single ADADLIDBJOG; // 0x1C
	::System::Int32 FHLKPEOFKGL; // 0x20
	::System::Int32 DOJAPIANMGA; // 0x24
	::System::Int32 FJJCJGCAOML; // 0x28
	::System::Single MDPPNMIPDMP; // 0x2C
	::System::Int32 HODAIDNDKHD; // 0x30
	::System::Single IDBEJJEKGDI; // 0x34
	::System::Int32 MDPILDGFNHN; // 0x38
	::System::Single DAHBFMNPJJK; // 0x3C
	::System::Single LDNHEAPBEFP; // 0x40
	::System::Int32 OAKOOCLICKE; // 0x44
	::System::Int32 EAPHLFJCPLO; // 0x48
	::System::Int32 FPDDAGHMOJB; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* System_Collections_Generic_IEnumerable_System_Single__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_SINGLE__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCPACPPFNF_LNDDNPPBJNJ_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
