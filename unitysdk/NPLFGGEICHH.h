#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class MHJDIPINMMF;
namespace System { class String; }

#define NPLFGGEICHH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x106C9320)
#define NPLFGGEICHH_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x106C9400)
#define NPLFGGEICHH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x106C9370)
#define NPLFGGEICHH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x106C9290)
#define NPLFGGEICHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x106C9190)
#define NPLFGGEICHH__CCTOR_OFFSET UNITYSDK_OFFSET(0x106C9210)
#define NPLFGGEICHH__CTOR_OFFSET UNITYSDK_OFFSET(0x106C9280)

inline static constexpr unsigned int NPLFGGEICHH_TypeDefinitionIndex = 44092;

class NPLFGGEICHH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x80; // 0x0
	::MHJDIPINMMF* PINDKMDGEDJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPLFGGEICHH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFGGEICHH__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFGGEICHH_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFGGEICHH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MHJDIPINMMF* AJCNABIAEDI)
	{
		return ((::System::Void(*)(::PVOID, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + NPLFGGEICHH_CNHBDOMKKDE_OFFSET))(this, AJCNABIAEDI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFGGEICHH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPLFGGEICHH_DPIHOJBBGLA_OFFSET))(this);
	}
};
