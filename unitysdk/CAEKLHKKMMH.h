#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CAEKLHKKMMH_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x10E26AF0)
#define CAEKLHKKMMH_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x10E26DA0)
#define CAEKLHKKMMH_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x10E26A60)
#define CAEKLHKKMMH_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x10E26E30)
#define CAEKLHKKMMH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x10E268F0)
#define CAEKLHKKMMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E269E0)
#define CAEKLHKKMMH__CTOR_OFFSET UNITYSDK_OFFSET(0x10E26A50)

inline static constexpr unsigned int CAEKLHKKMMH_TypeDefinitionIndex = 44434;

class CAEKLHKKMMH : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xD5; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* PNEGKPNJDLL; // 0x20
	::MoleMole::Config::RelayAttackType NLILPIHNFDG; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAEKLHKKMMH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEKLHKKMMH__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEKLHKKMMH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEKLHKKMMH_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::RelayAttackType KBHFJLLJOFO, ::System::Collections::Generic::HashSet_1<::System::String*>* ADLFPOIHKDO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RelayAttackType, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CAEKLHKKMMH_CNHBDOMKKDE_OFFSET))(this, KBHFJLLJOFO, ADLFPOIHKDO);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEKLHKKMMH_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAEKLHKKMMH_OHFHFOHMBJH_OFFSET))(this);
	}
};
