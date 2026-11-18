#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

class KPNIFGIKELE;
class MHJDIPINMMF;
namespace System { class String; }

#define PLNAPMDCOED_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x13723B40)
#define PLNAPMDCOED_DHHOKBFFLFG_OFFSET UNITYSDK_OFFSET(0x13723940)
#define PLNAPMDCOED_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x13723C20)
#define PLNAPMDCOED_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x13723B90)
#define PLNAPMDCOED_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x13723AB0)
#define PLNAPMDCOED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x137239B0)
#define PLNAPMDCOED__CCTOR_OFFSET UNITYSDK_OFFSET(0x13723A30)
#define PLNAPMDCOED__CTOR_OFFSET UNITYSDK_OFFSET(0x13723AA0)

inline static constexpr unsigned int PLNAPMDCOED_TypeDefinitionIndex = 50632;

class PLNAPMDCOED : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x7E; // 0x0
	::MHJDIPINMMF* PINDKMDGEDJ; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLNAPMDCOED__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED__CTOR_OFFSET))(this);
	}

	::KPNIFGIKELE* DHHOKBFFLFG()
	{
		return ((::KPNIFGIKELE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED_DHHOKBFFLFG_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED_TOSTRING_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MHJDIPINMMF* AJCNABIAEDI)
	{
		return ((::System::Void(*)(::PVOID, ::MHJDIPINMMF*))((::PBYTE)hIl2Cpp + PLNAPMDCOED_CNHBDOMKKDE_OFFSET))(this, AJCNABIAEDI);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLNAPMDCOED_DPIHOJBBGLA_OFFSET))(this);
	}
};
