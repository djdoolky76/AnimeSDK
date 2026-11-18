#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class PreloadObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CALJMJMHHPJ_DIAKFPIPGEF_JPCPBBAMDGJ_OFFSET UNITYSDK_OFFSET(0x1477C380)
#define CALJMJMHHPJ_DIAKFPIPGEF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1477C390)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRING_SYSTEM_TYPE___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1477C5D0)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRING_SYSTEM_TYPE___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1477C520)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1477C650)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1477C580)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1477C530)
#define CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1477C360)
#define CALJMJMHHPJ_DIAKFPIPGEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1477C340)

inline static constexpr unsigned int CALJMJMHHPJ_DIAKFPIPGEF_TypeDefinitionIndex = 59591;

class CALJMJMHHPJ_DIAKFPIPGEF : public ::System::Object
{
public:
	::System::Object* GHANCJDIDBC; // 0x10
	::System::Byte _padding0[0x10];
	::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* PNIJMAKFFPE; // 0x28
	::System::ValueTuple_2<::System::String*, ::System::Type*> IDBEJJEKGDI; // 0x30
	::System::Byte _padding1[0x8];
	::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* HJCEOHOJJCA; // 0x40
	::System::Int32 FPDDAGHMOJB; // 0x48
	::System::Int32 MDPILDGFNHN; // 0x4C

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_MOVENEXT_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::String*, ::System::Type*> System_Collections_Generic_IEnumerator__System_String_System_Type___get_Current()
	{
		return ((::System::ValueTuple_2<::System::String*, ::System::Type*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR__SYSTEM_STRING_SYSTEM_TYPE___GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* System_Collections_Generic_IEnumerable__System_String_System_Type___GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE__SYSTEM_STRING_SYSTEM_TYPE___GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}

	::System::Void JPCPBBAMDGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CALJMJMHHPJ_DIAKFPIPGEF_JPCPBBAMDGJ_OFFSET))(this);
	}
};
