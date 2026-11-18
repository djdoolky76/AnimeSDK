#pragma once
#include "unitysdk/unitysdk.h"

#define ADDNLMFGPFP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17DC4080)
#define ADDNLMFGPFP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17DC4060)
#define ADDNLMFGPFP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x17DC4070)
#define ADDNLMFGPFP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17DC3EB0)
#define ADDNLMFGPFP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17DC3D40)
#define ADDNLMFGPFP_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17DC3FD0)
#define ADDNLMFGPFP__CTOR_OFFSET UNITYSDK_OFFSET(0x17DC4020)

inline static constexpr unsigned int ADDNLMFGPFP_TypeDefinitionIndex = 87101;

class ADDNLMFGPFP
{
public:
	::System::UInt32 IFHINEGGOOO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_ONRECYCLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADDNLMFGPFP_ANEOCOIFDDJ_OFFSET))(this);
	}
};
