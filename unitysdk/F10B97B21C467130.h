#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F10B97B21C467130_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x20394E0)
#define F10B97B21C467130__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F10B97B21C467130_TypeDefinitionIndex = 8302;

class F10B97B21C467130 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* A7C1D4F652F816CC; // 0x10
	::System::Boolean BEAD1912A7DA0ECE; // 0x18

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::F10B97B21C467130* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::F10B97B21C467130*))((::PBYTE)hIl2Cpp + F10B97B21C467130_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F10B97B21C467130__CTOR_OFFSET))(this);
	}
};
