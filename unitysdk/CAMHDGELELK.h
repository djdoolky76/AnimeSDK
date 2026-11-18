#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FACPIGKNMLI.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAMHDGELELK_NFJIDKBNIKP_1_OFFSET UNITYSDK_OFFSET(0x1477C8B0)
#define CAMHDGELELK_NFJIDKBNIKP_2_OFFSET UNITYSDK_OFFSET(0x1477C980)
#define CAMHDGELELK_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x1477C800)
#define CAMHDGELELK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1477C740)
#define CAMHDGELELK__CTOR_OFFSET UNITYSDK_OFFSET(0x1477C6D0)

inline static constexpr unsigned int CAMHDGELELK_TypeDefinitionIndex = 69900;

class CAMHDGELELK : public ::FACPIGKNMLI
{
public:
	::Il2CppArray<::System::Int32>* AKLLPHFMJGN; // 0x10

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAMHDGELELK__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CAMHDGELELK__CTOR_1_OFFSET))(this, AKLLPHFMJGN);
	}

	::System::Boolean NFJIDKBNIKP(::System::Collections::Generic::List_1<::System::Int32>* IENAEDCFKDA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CAMHDGELELK_NFJIDKBNIKP_OFFSET))(this, IENAEDCFKDA);
	}

	::System::Boolean NFJIDKBNIKP_1(::Il2CppArray<::System::Int32>* IENAEDCFKDA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CAMHDGELELK_NFJIDKBNIKP_1_OFFSET))(this, IENAEDCFKDA);
	}

	::System::Boolean NFJIDKBNIKP_2(::System::Int32 CAAFEGLOALC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAMHDGELELK_NFJIDKBNIKP_2_OFFSET))(this, CAAFEGLOALC);
	}
};
