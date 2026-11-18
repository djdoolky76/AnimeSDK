#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class MHJDIPINMMF;
namespace System { class String; }

#define ALDPKAPFGBP_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x134E11F0)
#define ALDPKAPFGBP_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x134E12D0)
#define ALDPKAPFGBP_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x134E1240)
#define ALDPKAPFGBP_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x134E1160)
#define ALDPKAPFGBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x134E1060)
#define ALDPKAPFGBP__CCTOR_OFFSET UNITYSDK_OFFSET(0x134E10E0)
#define ALDPKAPFGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x134E1150)

inline static constexpr unsigned int ALDPKAPFGBP_TypeDefinitionIndex = 45530;

class ALDPKAPFGBP : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x7F; // 0x0
	::MHJDIPINMMF* PINDKMDGEDJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALDPKAPFGBP__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPKAPFGBP__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPKAPFGBP_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPKAPFGBP_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MHJDIPINMMF* AJCNABIAEDI)
	{
		return ((::System::Void(*)(::PVOID, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + ALDPKAPFGBP_CNHBDOMKKDE_OFFSET))(this, AJCNABIAEDI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPKAPFGBP_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDPKAPFGBP_DPIHOJBBGLA_OFFSET))(this);
	}
};
