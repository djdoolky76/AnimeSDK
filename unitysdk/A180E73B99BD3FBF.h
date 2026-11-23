#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AD61077CFCBEFAEA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A180E73B99BD3FBF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2489000)
#define A180E73B99BD3FBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A180E73B99BD3FBF_TypeDefinitionIndex = 4576;

class A180E73B99BD3FBF : public ::System::Object
{
public:
	::System::UInt32 BBDA55B8B235A7F7; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* EAFCB1765CDD2A67; // 0x18
	::System::String* B58124EFE92E2B4C; // 0x20
	::System::Collections::Generic::List_1<::AD61077CFCBEFAEA>* E6C2DC6C7B8FB1DE; // 0x28

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A180E73B99BD3FBF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A180E73B99BD3FBF*&))((::PBYTE)hIl2Cpp + A180E73B99BD3FBF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A180E73B99BD3FBF__CTOR_OFFSET))(this);
	}
};
