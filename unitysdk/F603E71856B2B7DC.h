#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A8301CA80B3783D6.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F603E71856B2B7DC__CTOR_OFFSET UNITYSDK_OFFSET(0x23D7B00)

inline static constexpr unsigned int F603E71856B2B7DC_TypeDefinitionIndex = 3812;

class F603E71856B2B7DC : public ::System::Object
{
public:
	::System::UInt32 B88EFB22328EAD67; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::A8301CA80B3783D6>* F2417E0DB563982A; // 0x18

	::System::Void _ctor(::System::UInt32 EA377D77E04A98FE, ::System::Collections::Generic::IList_1<::A8301CA80B3783D6>* F1B845AF2815BC2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::A8301CA80B3783D6>*))((::PBYTE)hIl2Cpp + F603E71856B2B7DC__CTOR_OFFSET))(this, EA377D77E04A98FE, F1B845AF2815BC2A);
	}
};
