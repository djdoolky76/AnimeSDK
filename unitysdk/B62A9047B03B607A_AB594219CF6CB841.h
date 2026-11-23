#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ACCD4AE635058D88;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B62A9047B03B607A_AB594219CF6CB841_E7DB06194E341853_OFFSET UNITYSDK_OFFSET(0x3B0B2F0)
#define B62A9047B03B607A_AB594219CF6CB841_F387D42F303B7C3B_OFFSET UNITYSDK_OFFSET(0x3B0B3D0)
#define B62A9047B03B607A_AB594219CF6CB841__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B62A9047B03B607A_AB594219CF6CB841_TypeDefinitionIndex = 12258;

class B62A9047B03B607A_AB594219CF6CB841 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* E04D2BE64FCE9814; // 0x10
	::System::Action* BDCB87964C751DB1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_AB594219CF6CB841__CTOR_OFFSET))(this);
	}

	::System::Void E7DB06194E341853(::ACCD4AE635058D88* F70AC30395956F92)
	{
		return ((::System::Void(*)(::PVOID, ::ACCD4AE635058D88*))((::PBYTE)hIl2Cpp + B62A9047B03B607A_AB594219CF6CB841_E7DB06194E341853_OFFSET))(this, F70AC30395956F92);
	}

	::System::Void F387D42F303B7C3B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B62A9047B03B607A_AB594219CF6CB841_F387D42F303B7C3B_OFFSET))(this);
	}
};
