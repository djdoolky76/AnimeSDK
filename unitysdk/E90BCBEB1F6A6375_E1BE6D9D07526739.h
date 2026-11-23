#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class CustomTransitionFadeOut; }
namespace System { class String; }

#define E90BCBEB1F6A6375_E1BE6D9D07526739_B3F8C8143D6A74E1_OFFSET UNITYSDK_OFFSET(0x1EDB6D0)
#define E90BCBEB1F6A6375_E1BE6D9D07526739__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E90BCBEB1F6A6375_E1BE6D9D07526739_TypeDefinitionIndex = 7585;

class E90BCBEB1F6A6375_E1BE6D9D07526739 : public ::System::Object
{
public:
	::System::String* AE267F9E3418FBCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_E1BE6D9D07526739__CTOR_OFFSET))(this);
	}

	::System::Boolean B3F8C8143D6A74E1(::ABC::UI::CustomTransitionFadeOut* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::UI::CustomTransitionFadeOut*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_E1BE6D9D07526739_B3F8C8143D6A74E1_OFFSET))(this, BB8C609F76620E45);
	}
};
