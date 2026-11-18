#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_5.h"

class NOJCCAKHAPM;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB30FF30)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32TYPE_SYSTEM_INT32PARAM_SYSTEM_COLLECTIONS_GENERIC_LIST_SYSTEM_INT32_EXPAND_SYSTEM_STRINGTEXT_SYSTEM_STRINGPARAMDICT___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB310070)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32TYPE_SYSTEM_INT32PARAM_SYSTEM_COLLECTIONS_GENERIC_LIST_SYSTEM_INT32_EXPAND_SYSTEM_STRINGTEXT_SYSTEM_STRINGPARAMDICT___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB30FFB0)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB3100F0)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB310020)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB30FFD0)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB30FF20)
#define ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM__CTOR_OFFSET UNITYSDK_OFFSET(0xB30FF00)

inline static constexpr unsigned int ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_TypeDefinitionIndex = 44380;

class ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM : public ::System::Object
{
public:
	::System::ValueTuple_5<::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::String*> IDBEJJEKGDI; // 0x10
	::System::Byte _padding0[0x18];
	::NOJCCAKHAPM* DFMKILICPFB; // 0x30
	::NOJCCAKHAPM* KGKEDDCHBNC; // 0x38
	::System::Int32 PIFNMNHMEMG; // 0x40
	::System::Int32 FPDDAGHMOJB; // 0x44
	::System::Int32 MDPILDGFNHN; // 0x48

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_5<::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::String*> System_Collections_Generic_IEnumerator__System_Int32type_System_Int32param_System_Collections_Generic_List_System_Int32_expand_System_Stringtext_System_StringparamDict___get_Current()
	{
		return ((::System::ValueTuple_5<::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::String*>(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_INT32TYPE_SYSTEM_INT32PARAM_SYSTEM_COLLECTIONS_GENERIC_LIST_SYSTEM_INT32_EXPAND_SYSTEM_STRINGTEXT_SYSTEM_STRINGPARAMDICT___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_5<::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::String*>>* System_Collections_Generic_IEnumerable__System_Int32type_System_Int32param_System_Collections_Generic_List_System_Int32_expand_System_Stringtext_System_StringparamDict___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_5<::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*, ::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_INT32TYPE_SYSTEM_INT32PARAM_SYSTEM_COLLECTIONS_GENERIC_LIST_SYSTEM_INT32_EXPAND_SYSTEM_STRINGTEXT_SYSTEM_STRINGPARAMDICT___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODLBEJANMEG_OMIMONFFELP_FHPKPOOKPLM_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
