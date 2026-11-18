#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NPGBGLGJGCF_CCEMFFGBBMF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xEEB2520)
#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEB2620)
#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xEEB2680)
#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xEEB2630)
#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEB2510)
#define NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB2500)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_TypeDefinitionIndex = 59306;

class NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF : public ::System::Object
{
public:
	::NPGBGLGJGCF_CCEMFFGBBMF* KLHPEBKNIFB; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* LHBKDBNHMNA; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* IDLCDOPMALL; // 0x20
	::System::Single NCCDJLDKFGA; // 0x28
	::System::Single KFHLBFHOBDE; // 0x2C
	::System::Boolean BJJKHJKGBAH; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 MDPILDGFNHN; // 0x34
	::System::Single IDBEJJEKGDI; // 0x38

	::System::Void _ctor(::System::Int32 MDPILDGFNHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF__CTOR_OFFSET))(this, MDPILDGFNHN);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_MOVENEXT_OFFSET))(this);
	}

	::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_FIAGONEGLIF_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}
};
