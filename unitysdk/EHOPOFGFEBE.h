#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EHOPOFGFEBE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1354BC80)
#define EHOPOFGFEBE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1354BBF0)
#define EHOPOFGFEBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1354BB70)
#define EHOPOFGFEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1354BBE0)

inline static constexpr unsigned int EHOPOFGFEBE_TypeDefinitionIndex = 71561;

class EHOPOFGFEBE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x14E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHOPOFGFEBE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOPOFGFEBE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOPOFGFEBE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHOPOFGFEBE_FIGPAOKNJLN_OFFSET))(this);
	}
};
