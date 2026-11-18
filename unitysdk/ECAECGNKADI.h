#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDOLCJGLMKP.h"

class KNHEKDKJAJN;

#define ECAECGNKADI_CBMBKKLPBIH_OFFSET UNITYSDK_OFFSET(0x1698A060)
#define ECAECGNKADI_DDEFGAJJLKM_OFFSET UNITYSDK_OFFSET(0x16989C10)
#define ECAECGNKADI_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x16989BB0)
#define ECAECGNKADI_EIMDJPJEHCH_OFFSET UNITYSDK_OFFSET(0x169899E0)
#define ECAECGNKADI_INOKFEPEEDJ_OFFSET UNITYSDK_OFFSET(0x16989B60)
#define ECAECGNKADI_JJDNJNOCKMO_OFFSET UNITYSDK_OFFSET(0x16989A20)
#define ECAECGNKADI_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1698A070)
#define ECAECGNKADI__CTOR_OFFSET UNITYSDK_OFFSET(0x169899D0)

inline static constexpr unsigned int ECAECGNKADI_TypeDefinitionIndex = 77554;

class ECAECGNKADI : public ::IDOLCJGLMKP
{
public:
	::KNHEKDKJAJN* BOBPLLBOODN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI__CTOR_OFFSET))(this);
	}

	::System::Void EIMDJPJEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_EIMDJPJEHCH_OFFSET))(this);
	}

	::System::Void JJDNJNOCKMO(::Il2CppArray<::System::Int32>* HFPFDAAGGDB)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ECAECGNKADI_JJDNJNOCKMO_OFFSET))(this, HFPFDAAGGDB);
	}

	::System::Void INOKFEPEEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_INOKFEPEEDJ_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_DFJPMOOOLHM_OFFSET))(this);
	}

	::System::Void DDEFGAJJLKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_DDEFGAJJLKM_OFFSET))(this);
	}

	::System::Void CBMBKKLPBIH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_CBMBKKLPBIH_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAECGNKADI_PBGJKMAEINN_OFFSET))(this);
	}
};
