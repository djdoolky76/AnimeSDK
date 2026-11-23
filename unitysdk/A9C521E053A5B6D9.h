#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA6B0E1284595953.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"

class FBE1E84058268223;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class FCECB52A00C1344E;

#define A9C521E053A5B6D9_A714F8459BEA4342_OFFSET UNITYSDK_OFFSET(0x2297B90)
#define A9C521E053A5B6D9__CTOR_OFFSET UNITYSDK_OFFSET(0x22980A0)

inline static constexpr unsigned int A9C521E053A5B6D9_TypeDefinitionIndex = 7078;

class A9C521E053A5B6D9 : public ::AA6B0E1284595953
{
public:
	::FCECB52A00C1344E<::System::String*>* AA9760A78410A1D4; // 0x28

	::System::Void _ctor(::E68AA4EB51923C98::B92BBABCE5ECD236 A78FAC14B9713BA9, ::E68AA4EB51923C98::B92BBABCE5ECD236 BB9E121A8D06F84D, ::System::UInt32 A67F3983754497F4)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32))((::PBYTE)hIl2Cpp + A9C521E053A5B6D9__CTOR_OFFSET))(this, A78FAC14B9713BA9, BB9E121A8D06F84D, A67F3983754497F4);
	}

	::System::Collections::Generic::IEnumerable_1<::FBE1E84058268223*>* A714F8459BEA4342()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FBE1E84058268223*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A9C521E053A5B6D9_A714F8459BEA4342_OFFSET))(this);
	}
};
