#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define IJICPELCGNL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15EC8390)
#define IJICPELCGNL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15EC83E0)
#define IJICPELCGNL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15EC8300)
#define IJICPELCGNL__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EC8280)
#define IJICPELCGNL__CTOR_OFFSET UNITYSDK_OFFSET(0x15EC82F0)

inline static constexpr unsigned int IJICPELCGNL_TypeDefinitionIndex = 48171;

class IJICPELCGNL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x8D; // 0x0
	::System::Boolean JDMGMLBOHNH; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJICPELCGNL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJICPELCGNL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJICPELCGNL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::Boolean MDKOPOMDPBJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJICPELCGNL_CNHBDOMKKDE_OFFSET))(this, MDKOPOMDPBJ);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJICPELCGNL_FIGPAOKNJLN_OFFSET))(this);
	}
};
