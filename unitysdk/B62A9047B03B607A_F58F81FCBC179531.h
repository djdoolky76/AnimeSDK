#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_F58F81FCBC179531_B63CD516986CFCBE_OFFSET UNITYSDK_OFFSET(0x3B0B4A0)
#define B62A9047B03B607A_F58F81FCBC179531__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_F58F81FCBC179531_TypeDefinitionIndex = 12259;

class B62A9047B03B607A_F58F81FCBC179531 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F58F81FCBC179531__CTOR_OFFSET))(this);
	}

	::System::Void B63CD516986CFCBE(::System::String* A6CAE7339066B0FB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_F58F81FCBC179531_B63CD516986CFCBE_OFFSET))(this, A6CAE7339066B0FB);
	}
};
