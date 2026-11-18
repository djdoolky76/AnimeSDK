#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

#define CJGDEEFPOHO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19A11470)
#define CJGDEEFPOHO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19A113E0)
#define CJGDEEFPOHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A11360)
#define CJGDEEFPOHO__CTOR_OFFSET UNITYSDK_OFFSET(0x19A113D0)

inline static constexpr unsigned int CJGDEEFPOHO_TypeDefinitionIndex = 88350;

class CJGDEEFPOHO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x122; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJGDEEFPOHO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGDEEFPOHO__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGDEEFPOHO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGDEEFPOHO_FIGPAOKNJLN_OFFSET))(this);
	}
};
