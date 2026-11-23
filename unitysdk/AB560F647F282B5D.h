#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BB7311E0B052ED82.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AB560F647F282B5D_AAA67EE098557B85_OFFSET UNITYSDK_OFFSET(0x1EF1C90)
#define AB560F647F282B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AB560F647F282B5D_TypeDefinitionIndex = 7421;

class AB560F647F282B5D : public ::System::Object
{
public:
	::System::String* F20E47619439BFAE; // 0x10
	::System::UInt32 FE4689D370F05FEE; // 0x18
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::System::UInt32>* A4258CB6949567CA; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* A8ECD0F489EB4475; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AB560F647F282B5D__CTOR_OFFSET))(this);
	}

	static ::System::Void AAA67EE098557B85(::BB7311E0B052ED82& F99B0FE319DB74D1, ::AB560F647F282B5D* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BB7311E0B052ED82&, ::AB560F647F282B5D*))((::PBYTE)hIl2Cpp + AB560F647F282B5D_AAA67EE098557B85_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
