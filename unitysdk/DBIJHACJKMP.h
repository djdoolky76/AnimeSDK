#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define DBIJHACJKMP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15358860)
#define DBIJHACJKMP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x153587D0)
#define DBIJHACJKMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15358750)
#define DBIJHACJKMP__CTOR_OFFSET UNITYSDK_OFFSET(0x153587C0)

inline static constexpr unsigned int DBIJHACJKMP_TypeDefinitionIndex = 79808;

class DBIJHACJKMP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x2E; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIJHACJKMP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIJHACJKMP__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIJHACJKMP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIJHACJKMP_FIGPAOKNJLN_OFFSET))(this);
	}
};
