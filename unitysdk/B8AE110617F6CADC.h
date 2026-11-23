#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define B8AE110617F6CADC_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1F2D8F0)
#define B8AE110617F6CADC__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B8AE110617F6CADC_TypeDefinitionIndex = 7607;

class B8AE110617F6CADC : public ::System::Object
{
public:
	::System::Boolean BEAD1912A7DA0ECE; // 0x10
	::System::Byte _padding0[0x7];
	::System::Collections::Generic::List_1<::System::String*>* A7C1D4F652F816CC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8AE110617F6CADC__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::B8AE110617F6CADC* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::B8AE110617F6CADC*))((::PBYTE)hIl2Cpp + B8AE110617F6CADC_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
