#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define JJANCNMCEHH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13848100)
#define JJANCNMCEHH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13848070)
#define JJANCNMCEHH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13847FF0)
#define JJANCNMCEHH__CTOR_OFFSET UNITYSDK_OFFSET(0x13848060)

inline static constexpr unsigned int JJANCNMCEHH_TypeDefinitionIndex = 54400;

class JJANCNMCEHH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x108; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJANCNMCEHH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJANCNMCEHH__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJANCNMCEHH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJANCNMCEHH_FIGPAOKNJLN_OFFSET))(this);
	}
};
