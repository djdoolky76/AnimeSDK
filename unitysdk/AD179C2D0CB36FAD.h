#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define AD179C2D0CB36FAD_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x20F2230)
#define AD179C2D0CB36FAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD179C2D0CB36FAD_TypeDefinitionIndex = 8703;

class AD179C2D0CB36FAD : public ::System::Object
{
public:
	::System::UInt32 FE2FB0D55556BFD9; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* E55309AB802A5D27; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD179C2D0CB36FAD__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AD179C2D0CB36FAD* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AD179C2D0CB36FAD*))((::PBYTE)hIl2Cpp + AD179C2D0CB36FAD_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
