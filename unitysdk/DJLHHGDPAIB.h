#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJLHHGDPAIB_CHDBBFIKDEG.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define DJLHHGDPAIB_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x12088BE0)
#define DJLHHGDPAIB_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x12088960)
#define DJLHHGDPAIB_IODDBJDEDDD_OFFSET UNITYSDK_OFFSET(0x12088B40)
#define DJLHHGDPAIB_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x12088C80)
#define DJLHHGDPAIB_LDEFOFFAKHB_OFFSET UNITYSDK_OFFSET(0x12088A40)
#define DJLHHGDPAIB_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x12088D00)
#define DJLHHGDPAIB_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x12088910)
#define DJLHHGDPAIB_PPNGIJELGBE_OFFSET UNITYSDK_OFFSET(0x12088A90)
#define DJLHHGDPAIB__CCTOR_OFFSET UNITYSDK_OFFSET(0x120889B0)
#define DJLHHGDPAIB__CTOR_OFFSET UNITYSDK_OFFSET(0x12088A30)

inline static constexpr unsigned int DJLHHGDPAIB_TypeDefinitionIndex = 70127;

class DJLHHGDPAIB : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x82; // 0x0
	::DJLHHGDPAIB_CHDBBFIKDEG OCOJFKMOKMK; // 0x48
	::System::Single AFJENIHANKB; // 0x4C
	::System::Single GHFOLCILCLG; // 0x50
	::System::UInt32 LDKGHPECOAH; // 0x54
	::System::UInt32 CLAANBMGIKN; // 0x58
	::System::Single GAKLPKIDFJK; // 0x5C
	::System::Single FKOPEPBIDHK; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJLHHGDPAIB__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLHHGDPAIB__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_GETCLASSID_OFFSET))(this);
	}

	::System::Void LDEFOFFAKHB(::DJLHHGDPAIB_CHDBBFIKDEG JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::DJLHHGDPAIB_CHDBBFIKDEG))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_LDEFOFFAKHB_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void PPNGIJELGBE(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_PPNGIJELGBE_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void IODDBJDEDDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_IODDBJDEDDD_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK(::System::UInt32 BFAEFMECPLD, ::System::UInt32 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_EDEFLFIKNFK_OFFSET))(this, BFAEFMECPLD, HBEKKMCBGBK);
	}

	static ::DJLHHGDPAIB* JFDOOELFAOA()
	{
		return ((::DJLHHGDPAIB*(*)())((::PBYTE)hIl2Cpp + DJLHHGDPAIB_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJLHHGDPAIB_MEFBHFEOKGH_OFFSET))(this);
	}
};
