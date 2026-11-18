#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELEJCHBKNBF.h"

class GONKHDAJLNE;

#define MDJBCDNNPEJ_EBCPDBPFFLC_OFFSET UNITYSDK_OFFSET(0x1A638020)
#define MDJBCDNNPEJ_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x1A637FC0)
#define MDJBCDNNPEJ_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x1A637EC0)
#define MDJBCDNNPEJ_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A638030)
#define MDJBCDNNPEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A637EB0)

inline static constexpr unsigned int MDJBCDNNPEJ_TypeDefinitionIndex = 88412;

class MDJBCDNNPEJ : public ::ELEJCHBKNBF
{
public:
	::System::Int32 EJNCEAJJNGG; // 0x18

	::System::Void _ctor(::GONKHDAJLNE* AEJAMJDBHAM, ::System::Int32 KBPLMDAFOEF)
	{
		return ((::System::Void(*)(::PVOID, ::GONKHDAJLNE*, ::System::Int32))((::PBYTE)hIl2Cpp + MDJBCDNNPEJ__CTOR_OFFSET))(this, AEJAMJDBHAM, KBPLMDAFOEF);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJBCDNNPEJ_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJBCDNNPEJ_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Int32 EBCPDBPFFLC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDJBCDNNPEJ_EBCPDBPFFLC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Int32 LDDJOFHAOHG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDJBCDNNPEJ_OKJCHFGIKBH_OFFSET))(this, LDDJOFHAOHG);
	}
};
