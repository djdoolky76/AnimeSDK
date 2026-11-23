#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

class AAC4A4B1AB7CE7A7;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCE51B47FAA0FE61_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EC0850)
#define FCE51B47FAA0FE61__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FCE51B47FAA0FE61_TypeDefinitionIndex = 6768;

class FCE51B47FAA0FE61 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::AAC4A4B1AB7CE7A7*>* B9D7EED315188370; // 0x10

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::FCE51B47FAA0FE61* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::FCE51B47FAA0FE61*))((::PBYTE)hIl2Cpp + FCE51B47FAA0FE61_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCE51B47FAA0FE61__CTOR_OFFSET))(this);
	}
};
