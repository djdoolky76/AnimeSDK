#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHKOJPPCKIJ.h"
#include "unitysdk/NKCNKNCLOLO.h"

class ACHEIDGFEID;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAMIFHKJLFE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1EB6E630)
#define GAMIFHKJLFE_BLOAMMJMICL_OFFSET UNITYSDK_OFFSET(0x1EB6E940)
#define GAMIFHKJLFE_BPIMCKIACPA_OFFSET UNITYSDK_OFFSET(0x1EB6E9E0)
#define GAMIFHKJLFE_HFJKKGKPANC_OFFSET UNITYSDK_OFFSET(0x1EB6EA70)
#define GAMIFHKJLFE_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EB6E890)
#define GAMIFHKJLFE_PNHPDOBPKKE_OFFSET UNITYSDK_OFFSET(0x1EB6E9D0)
#define GAMIFHKJLFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E590)

inline static constexpr unsigned int GAMIFHKJLFE_TypeDefinitionIndex = 96448;

class GAMIFHKJLFE : public ::NKCNKNCLOLO
{
public:
	::System::Collections::Generic::Dictionary_2<::LHKOJPPCKIJ, ::System::Int32>* CCPBNMDHJNI; // 0x60
	::ACHEIDGFEID* DFMKILICPFB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMIFHKJLFE__CTOR_OFFSET))(this);
	}

	::NKCNKNCLOLO* BBOMJDBNHIC(::System::Boolean HLDIMICADKL)
	{
		return ((::NKCNKNCLOLO*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_BBOMJDBNHIC_OFFSET))(this, HLDIMICADKL);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Int32 BLOAMMJMICL(::System::Int32 BKOLCDPOJAL)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_BLOAMMJMICL_OFFSET))(this, BKOLCDPOJAL);
	}

	::NKCNKNCLOLO* PNHPDOBPKKE(::System::Boolean MIALFKCCCPI)
	{
		return ((::NKCNKNCLOLO*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_PNHPDOBPKKE_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 BPIMCKIACPA(::System::Int32 MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_BPIMCKIACPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void HFJKKGKPANC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMIFHKJLFE_HFJKKGKPANC_OFFSET))(this);
	}
};
