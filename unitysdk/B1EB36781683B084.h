#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B1EB36781683B084__CTOR_OFFSET UNITYSDK_OFFSET(0x3943DB0)

inline static constexpr unsigned int B1EB36781683B084_TypeDefinitionIndex = 12435;

class B1EB36781683B084 : public ::System::Object
{
public:
	::System::String* EFF983A80A48BB2A; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BEC4D946FA115591; // 0x18

	::System::Void _ctor(::System::String* EFF983A80A48BB2A)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B1EB36781683B084__CTOR_OFFSET))(this, EFF983A80A48BB2A);
	}
};
