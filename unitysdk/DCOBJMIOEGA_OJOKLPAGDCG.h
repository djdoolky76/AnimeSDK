#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCOBJMIOEGA_OJOKLPAGDCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1832B680)

inline static constexpr unsigned int DCOBJMIOEGA_OJOKLPAGDCG_TypeDefinitionIndex = 60856;

class DCOBJMIOEGA_OJOKLPAGDCG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* AOCENFKKBGK; // 0x10
	::System::Int32 OJFAKMLOBOB; // 0x18
	::System::Int32 LFEDBFBLGOM; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCOBJMIOEGA_OJOKLPAGDCG__CTOR_OFFSET))(this);
	}
};
