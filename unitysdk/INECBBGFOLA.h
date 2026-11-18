#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IEEPAHOCENL.h"

#define INECBBGFOLA_BAHOEDOEAEF_OFFSET UNITYSDK_OFFSET(0x19436AF0)
#define INECBBGFOLA_DGJMPILGBCM_OFFSET UNITYSDK_OFFSET(0x19436CB0)
#define INECBBGFOLA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19436A80)
#define INECBBGFOLA_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x19436A40)
#define INECBBGFOLA_JLLDGOLLMBA_OFFSET UNITYSDK_OFFSET(0x19436CC0)
#define INECBBGFOLA_LAJEIEBEAOF_OFFSET UNITYSDK_OFFSET(0x19436B80)
#define INECBBGFOLA_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x19436C20)
#define INECBBGFOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x19436B70)

inline static constexpr unsigned int INECBBGFOLA_TypeDefinitionIndex = 78212;

class INECBBGFOLA : public ::IEEPAHOCENL
{
public:
	::System::Boolean _ALJMDMCEDMN_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA__CTOR_OFFSET))(this);
	}

	::System::Boolean FCFOEJGPDNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_FCFOEJGPDNO_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void BAHOEDOEAEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_BAHOEDOEAEF_OFFSET))(this);
	}

	::System::Void LAJEIEBEAOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_LAJEIEBEAOF_OFFSET))(this);
	}

	::System::Void MOAIMMNOFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_MOAIMMNOFJF_OFFSET))(this);
	}

	::System::Boolean DGJMPILGBCM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INECBBGFOLA_DGJMPILGBCM_OFFSET))(this);
	}

	::System::Void JLLDGOLLMBA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INECBBGFOLA_JLLDGOLLMBA_OFFSET))(this, EGEGIMGMJHN);
	}
};
