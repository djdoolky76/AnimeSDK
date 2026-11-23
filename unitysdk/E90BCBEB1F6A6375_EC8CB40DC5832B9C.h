#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::UI { class CustomTransitionFadeOut; }
namespace System { class String; }

#define E90BCBEB1F6A6375_EC8CB40DC5832B9C_B7B7FD49C71BEBD3_OFFSET UNITYSDK_OFFSET(0x1EDB6D0)
#define E90BCBEB1F6A6375_EC8CB40DC5832B9C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E90BCBEB1F6A6375_EC8CB40DC5832B9C_TypeDefinitionIndex = 7586;

class E90BCBEB1F6A6375_EC8CB40DC5832B9C : public ::System::Object
{
public:
	::System::String* AE267F9E3418FBCE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_EC8CB40DC5832B9C__CTOR_OFFSET))(this);
	}

	::System::Boolean B7B7FD49C71BEBD3(::ABC::UI::CustomTransitionFadeOut* BB8C609F76620E45)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::UI::CustomTransitionFadeOut*))((::PBYTE)hIl2Cpp + E90BCBEB1F6A6375_EC8CB40DC5832B9C_B7B7FD49C71BEBD3_OFFSET))(this, BB8C609F76620E45);
	}
};
