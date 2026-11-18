#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define NFMJKLJCLIG_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x11F732D0)
#define NFMJKLJCLIG_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x11F73240)
#define NFMJKLJCLIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x11F731C0)
#define NFMJKLJCLIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11F73230)

inline static constexpr unsigned int NFMJKLJCLIG_TypeDefinitionIndex = 54688;

class NFMJKLJCLIG : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x6E; // 0x0
	::System::Boolean GAKHIFGJIAA; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFMJKLJCLIG__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMJKLJCLIG__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMJKLJCLIG_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMJKLJCLIG_FIGPAOKNJLN_OFFSET))(this);
	}
};
