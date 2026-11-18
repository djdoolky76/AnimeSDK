#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HEMJCFNNLDD_BAIGCMAIHMI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17E41F90)
#define HEMJCFNNLDD_BAIGCMAIHMI__CTOR_OFFSET UNITYSDK_OFFSET(0x17E41EE0)

inline static constexpr unsigned int HEMJCFNNLDD_BAIGCMAIHMI_TypeDefinitionIndex = 42455;

class HEMJCFNNLDD_BAIGCMAIHMI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* PKKDBMNCBKL; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CLGEMFIJLOP; // 0x18
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* KCIENCHHHHD; // 0x20
	::System::Int32 GBLDCEJIECA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_BAIGCMAIHMI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEMJCFNNLDD_BAIGCMAIHMI_PHOADBJGFBE_OFFSET))(this);
	}
};
