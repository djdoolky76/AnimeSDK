#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class CustomTransitionFadeIn; }
namespace System { class String; }

#define E90BCBEB1F6A6375_FDDA7AF220799E03_EC57E55674B0452F_OFFSET UNITYSDK_OFFSET(0x1EDB6D0)
#define E90BCBEB1F6A6375_FDDA7AF220799E03__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E90BCBEB1F6A6375_FDDA7AF220799E03_TypeDefinitionIndex = 7584;

class E90BCBEB1F6A6375_FDDA7AF220799E03 : public ::System::Object
{
public:
	::System::String* F51A1A86C6E82E11; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_FDDA7AF220799E03__CTOR_OFFSET))(this);
	}

	::System::Boolean EC57E55674B0452F(::ABC::UI::CustomTransitionFadeIn* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::UI::CustomTransitionFadeIn*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_FDDA7AF220799E03_EC57E55674B0452F_OFFSET))(this, BB8C609F76620E45);
	}
};
