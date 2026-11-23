#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAB8086139CB27E0.h"
#include "unitysdk/System/Object.h"

#define ED8DE5B2A2FB99EE_AA41588074A88E20_OFFSET UNITYSDK_OFFSET(0x1E932E0)
#define ED8DE5B2A2FB99EE_E109375EFB10FD3C_OFFSET UNITYSDK_OFFSET(0x1E93290)
#define ED8DE5B2A2FB99EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E93370)

inline static constexpr unsigned int ED8DE5B2A2FB99EE_TypeDefinitionIndex = 19612;

class ED8DE5B2A2FB99EE : public ::System::Object
{
public:
	::AAB8086139CB27E0 BF3505311B31A888; // 0x10

	::System::Object* E109375EFB10FD3C()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ED8DE5B2A2FB99EE_E109375EFB10FD3C_OFFSET))(this);
	}

	::System::Void AA41588074A88E20(::System::Object* B4E0133B031AEB13)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ED8DE5B2A2FB99EE_AA41588074A88E20_OFFSET))(this, B4E0133B031AEB13);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ED8DE5B2A2FB99EE__CTOR_OFFSET))(this);
	}
};
