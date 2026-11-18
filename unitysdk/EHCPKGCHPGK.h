#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHCPKGCHPGK__CTOR_OFFSET UNITYSDK_OFFSET(0x148DF5F0)

inline static constexpr unsigned int EHCPKGCHPGK_TypeDefinitionIndex = 70796;

class EHCPKGCHPGK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* HHPFEPOOFBI; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CDLBOAOFFDD; // 0x18
	::System::Int32 MHCFKIAGLAE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHCPKGCHPGK__CTOR_OFFSET))(this);
	}
};
