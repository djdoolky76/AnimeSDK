#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLCBJJPPLIE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x15DC1E70)
#define HLCBJJPPLIE_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x15DC1DE0)
#define HLCBJJPPLIE_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x15DC1D50)
#define HLCBJJPPLIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC1CD0)
#define HLCBJJPPLIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC1D40)

inline static constexpr unsigned int HLCBJJPPLIE_TypeDefinitionIndex = 56824;

class HLCBJJPPLIE : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x36; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* LBNPICICOFA; // 0x20
	::ENGKPGFGGLM* NAILOJBGCLD; // 0x28
	::System::Int32 KOLAGBEKCMC; // 0x30
	::System::UInt32 BHOOOOLIDCC; // 0x34

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLCBJJPPLIE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCBJJPPLIE__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCBJJPPLIE_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLCBJJPPLIE_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 BBGMEDOCFNI, ::System::Int32 OPLGLMGNCEM, ::System::Collections::Generic::List_1<::System::Int32>* DBMPMLCJGBK, ::ENGKPGFGGLM* LIPFIBMPMKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + HLCBJJPPLIE_CNHBDOMKKDE_OFFSET))(this, BBGMEDOCFNI, OPLGLMGNCEM, DBMPMLCJGBK, LIPFIBMPMKK);
	}
};
