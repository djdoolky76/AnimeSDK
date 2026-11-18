#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKGMJNOADGM;
class DPNNGJALJHP;

#define DPNNGJALJHP_NNDAELJDIKD_EPBKFCENHEA_OFFSET UNITYSDK_OFFSET(0x10F19490)
#define DPNNGJALJHP_NNDAELJDIKD_HCBFPELNJEB_OFFSET UNITYSDK_OFFSET(0x10F192E0)
#define DPNNGJALJHP_NNDAELJDIKD__CTOR_OFFSET UNITYSDK_OFFSET(0x10F192D0)

inline static constexpr unsigned int DPNNGJALJHP_NNDAELJDIKD_TypeDefinitionIndex = 55459;

class DPNNGJALJHP_NNDAELJDIKD : public ::System::Object
{
public:
	::DPNNGJALJHP* KLHPEBKNIFB; // 0x10
	::DKGMJNOADGM* MBEEKMNLPNL; // 0x18
	::System::Boolean DKHBCAPCHNB; // 0x20
	::System::Byte _padding0[0x3];
	::System::Int32 FKAOLLMPLKI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_NNDAELJDIKD__CTOR_OFFSET))(this);
	}

	::System::Void HCBFPELNJEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_NNDAELJDIKD_HCBFPELNJEB_OFFSET))(this);
	}

	::System::Void EPBKFCENHEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_NNDAELJDIKD_EPBKFCENHEA_OFFSET))(this);
	}
};
