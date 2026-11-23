#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AAF95C9CE8DF069C_BA32B6F11A010D1B_E274DAF2F94FEBAA_OFFSET UNITYSDK_OFFSET(0x2A41DC0)
#define AAF95C9CE8DF069C_BA32B6F11A010D1B_E40AFD5D374F6ED4_OFFSET UNITYSDK_OFFSET(0x2A41EB0)

inline static constexpr unsigned int AAF95C9CE8DF069C_BA32B6F11A010D1B_TypeDefinitionIndex = 18339;

struct alignas(8) AAF95C9CE8DF069C_BA32B6F11A010D1B
{
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>* F6067B012B6F1B3B; // 0x10
	::System::Single A533A06CFC783AC9; // 0x18

	::System::Boolean E274DAF2F94FEBAA(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*& ABBFFB9B2EAD6696)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Object*>*>*&))((::PBYTE)hIl2Cpp + AAF95C9CE8DF069C_BA32B6F11A010D1B_E274DAF2F94FEBAA_OFFSET))(this, ABBFFB9B2EAD6696);
	}

	::System::Boolean E40AFD5D374F6ED4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AAF95C9CE8DF069C_BA32B6F11A010D1B_E40AFD5D374F6ED4_OFFSET))(this);
	}
};
