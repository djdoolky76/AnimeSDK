#pragma once
#include "unitysdk/unitysdk.h"

class ANOKJGCCGAO;
class CLAHNHKLGJP;

#define OFNEDIJDABP_AAMJIIKPMHO_OFFSET UNITYSDK_OFFSET(0xF1852F0)
#define OFNEDIJDABP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF185330)
#define OFNEDIJDABP_EHKCCNALJAL_OFFSET UNITYSDK_OFFSET(0xF1851E0)
#define OFNEDIJDABP_GPEMPMALEGO_OFFSET UNITYSDK_OFFSET(0xF184D20)
#define OFNEDIJDABP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0xF185310)
#define OFNEDIJDABP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0xF185320)
#define OFNEDIJDABP_MNFLFEDBOKB_OFFSET UNITYSDK_OFFSET(0xF185020)
#define OFNEDIJDABP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF184F30)
#define OFNEDIJDABP_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF184C80)
#define OFNEDIJDABP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xF184C30)
#define OFNEDIJDABP_PBLCHNODHFN_OFFSET UNITYSDK_OFFSET(0xF185120)
#define OFNEDIJDABP__CTOR_OFFSET UNITYSDK_OFFSET(0xF1850E0)

inline static constexpr unsigned int OFNEDIJDABP_TypeDefinitionIndex = 77753;

class OFNEDIJDABP
{
public:
	::CLAHNHKLGJP* JIEDKAOCJPC; // 0x28
	::System::Boolean JGHBKHJOHGB; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 MGNMJMACKLO; // 0x34
	::System::Int32 KMLPFPOCOEO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_ONDISABLE_OFFSET))(this);
	}

	::System::Void PBLCHNODHFN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_PBLCHNODHFN_OFFSET))(this);
	}

	::System::Boolean AAMJIIKPMHO(::ANOKJGCCGAO* HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::ANOKJGCCGAO*))((::PBYTE)hIl2Cpp + OFNEDIJDABP_AAMJIIKPMHO_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Void EHKCCNALJAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_EHKCCNALJAL_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void MNFLFEDBOKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_MNFLFEDBOKB_OFFSET))(this);
	}

	::System::Void GPEMPMALEGO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_GPEMPMALEGO_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNEDIJDABP_ANEOCOIFDDJ_OFFSET))(this);
	}
};
