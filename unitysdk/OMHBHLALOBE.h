#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define OMHBHLALOBE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15F7D3E0)
#define OMHBHLALOBE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15F7D350)
#define OMHBHLALOBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15F7D2D0)
#define OMHBHLALOBE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7D340)

inline static constexpr unsigned int OMHBHLALOBE_TypeDefinitionIndex = 86100;

class OMHBHLALOBE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x132; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMHBHLALOBE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHBHLALOBE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHBHLALOBE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHBHLALOBE_FIGPAOKNJLN_OFFSET))(this);
	}
};
