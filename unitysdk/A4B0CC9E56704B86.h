#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

class A04FB906869DCF3A;
namespace ABC::UI { class MonoButton; }
namespace ABC::UI { class MonoLocalizedTmp; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define A4B0CC9E56704B86_E53B397C8EF8FCAE_OFFSET UNITYSDK_OFFSET(0x1AB6BB0)
#define A4B0CC9E56704B86_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x1AB6820)
#define A4B0CC9E56704B86_F14BEFCB596EE4D7_OFFSET UNITYSDK_OFFSET(0x1AB6420)
#define A4B0CC9E56704B86_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1AB6530)
#define A4B0CC9E56704B86__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int A4B0CC9E56704B86_TypeDefinitionIndex = 1930;

class A4B0CC9E56704B86 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::UI::Image* B0FA85DB2112E07D; // 0x80
	::UnityEngine::UI::Image* FFEEA48167895025; // 0x88
	::UnityEngine::UI::Image* EF449110490D7337; // 0x90
	::UnityEngine::UI::Image* FEB1A71B2C6C72AE; // 0x98
	::ABC::UI::MonoLocalizedTmp* BB8B6FF23ADC79FD; // 0xA0
	::ABC::UI::MonoButton* A534F54BBE4358D8; // 0xA8
	::UnityEngine::GameObject* F850DCD34E49164A; // 0xB0
	::System::UInt32 E971E24AD73D201C; // 0xB8

	::System::Void F14BEFCB596EE4D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0CC9E56704B86_F14BEFCB596EE4D7_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0CC9E56704B86__CTOR_OFFSET))(this);
	}

	::System::Void E53B397C8EF8FCAE(::A04FB906869DCF3A* EFC4AA7B99320D01)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + A4B0CC9E56704B86_E53B397C8EF8FCAE_OFFSET))(this, EFC4AA7B99320D01);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4B0CC9E56704B86_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::UInt32 BC8A36DD3606E794)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + A4B0CC9E56704B86_EC3033C0485522FB_OFFSET))(this, BC8A36DD3606E794);
	}
};
