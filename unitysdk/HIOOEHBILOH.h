#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FACPIGKNMLI.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIOOEHBILOH_NFJIDKBNIKP_1_OFFSET UNITYSDK_OFFSET(0x14D30420)
#define HIOOEHBILOH_NFJIDKBNIKP_2_OFFSET UNITYSDK_OFFSET(0x14D304D0)
#define HIOOEHBILOH_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x14D30370)
#define HIOOEHBILOH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x14D302B0)
#define HIOOEHBILOH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D30240)

inline static constexpr unsigned int HIOOEHBILOH_TypeDefinitionIndex = 78291;

class HIOOEHBILOH : public ::FACPIGKNMLI
{
public:
	::Il2CppArray<::System::Int32>* AKLLPHFMJGN; // 0x10

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOEHBILOH__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::System::Int32>* AKLLPHFMJGN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HIOOEHBILOH__CTOR_1_OFFSET))(this, AKLLPHFMJGN);
	}

	::System::Boolean NFJIDKBNIKP(::System::Collections::Generic::List_1<::System::Int32>* IENAEDCFKDA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HIOOEHBILOH_NFJIDKBNIKP_OFFSET))(this, IENAEDCFKDA);
	}

	::System::Boolean NFJIDKBNIKP_1(::Il2CppArray<::System::Int32>* IENAEDCFKDA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + HIOOEHBILOH_NFJIDKBNIKP_1_OFFSET))(this, IENAEDCFKDA);
	}

	::System::Boolean NFJIDKBNIKP_2(::System::Int32 CAAFEGLOALC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIOOEHBILOH_NFJIDKBNIKP_2_OFFSET))(this, CAAFEGLOALC);
	}
};
