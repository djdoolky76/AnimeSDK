#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F3D2F185626D0E4E.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define F63F2E602F035C29_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x2087A70)
#define F63F2E602F035C29__CTOR_OFFSET UNITYSDK_OFFSET(0x16572C0)

inline static constexpr unsigned int F63F2E602F035C29_TypeDefinitionIndex = 8578;

class F63F2E602F035C29 : public ::F3D2F185626D0E4E
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F63F2E602F035C29__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 E14961743E675799, ::System::UInt32 F5731F9BF1DBF9FB, ::System::Action_2<::System::UInt32, ::System::Boolean>* B27ED08B9DFA3EE1, ::System::Boolean F1AACB3553F67303)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + F63F2E602F035C29_EC3033C0485522FB_OFFSET))(this, E14961743E675799, F5731F9BF1DBF9FB, B27ED08B9DFA3EE1, F1AACB3553F67303);
	}
};
