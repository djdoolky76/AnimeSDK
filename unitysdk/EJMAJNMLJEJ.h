#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define EJMAJNMLJEJ_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x14AA0D60)
#define EJMAJNMLJEJ_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x14AA0CD0)
#define EJMAJNMLJEJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x14AA0C50)
#define EJMAJNMLJEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA0CC0)

inline static constexpr unsigned int EJMAJNMLJEJ_TypeDefinitionIndex = 53543;

class EJMAJNMLJEJ : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x153; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJMAJNMLJEJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMAJNMLJEJ__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMAJNMLJEJ_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJMAJNMLJEJ_FIGPAOKNJLN_OFFSET))(this);
	}
};
