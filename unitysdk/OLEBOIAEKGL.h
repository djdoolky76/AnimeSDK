#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OLEBOIAEKGL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0xFD8E920)
#define OLEBOIAEKGL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0xFD8E890)
#define OLEBOIAEKGL__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD8E810)
#define OLEBOIAEKGL__CTOR_OFFSET UNITYSDK_OFFSET(0xFD8E880)

inline static constexpr unsigned int OLEBOIAEKGL_TypeDefinitionIndex = 64599;

class OLEBOIAEKGL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x15A; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLEBOIAEKGL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEBOIAEKGL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEBOIAEKGL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEBOIAEKGL_FIGPAOKNJLN_OFFSET))(this);
	}
};
