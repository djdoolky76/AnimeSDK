#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class DFJCMGKEOMG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POMHJMDMMNC_IELLEMEFCKJ_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x1D0E06C0)
#define POMHJMDMMNC_IELLEMEFCKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0E0620)

inline static constexpr unsigned int POMHJMDMMNC_IELLEMEFCKJ_TypeDefinitionIndex = 15552;

class POMHJMDMMNC_IELLEMEFCKJ : public ::System::Object
{
public:
	::Il2CppArray<::System::Collections::Generic::List_1<::DFJCMGKEOMG*>*>* ACJOAOGFKBF; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>* JLOFIFBJIPJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POMHJMDMMNC_IELLEMEFCKJ__CTOR_OFFSET))(this);
	}

	::System::Void ANPBCLAFCJB(::DFJCMGKEOMG* FLNKKFOFIMI)
	{
		return ((::System::Void(*)(::PVOID, ::DFJCMGKEOMG*))((::PBYTE)hIl2Cpp + POMHJMDMMNC_IELLEMEFCKJ_ANPBCLAFCJB_OFFSET))(this, FLNKKFOFIMI);
	}
};
