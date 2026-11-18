#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLAMBOECBOB;

#define GAMNBDOIIHF_AKHIFDGGMJB_DPACFNKPACI_OFFSET UNITYSDK_OFFSET(0x15F0E350)
#define GAMNBDOIIHF_AKHIFDGGMJB_EDOHBHFOHEH_OFFSET UNITYSDK_OFFSET(0x15F0E480)
#define GAMNBDOIIHF_AKHIFDGGMJB_OCIBMGGPMLG_OFFSET UNITYSDK_OFFSET(0x15F0E220)
#define GAMNBDOIIHF_AKHIFDGGMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0E210)

inline static constexpr unsigned int GAMNBDOIIHF_AKHIFDGGMJB_TypeDefinitionIndex = 87425;

class GAMNBDOIIHF_AKHIFDGGMJB : public ::System::Object
{
public:
	::NLAMBOECBOB* CFDELPEILBN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AKHIFDGGMJB__CTOR_OFFSET))(this);
	}

	::System::Void OCIBMGGPMLG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AKHIFDGGMJB_OCIBMGGPMLG_OFFSET))(this);
	}

	::System::Void DPACFNKPACI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AKHIFDGGMJB_DPACFNKPACI_OFFSET))(this);
	}

	::System::Void EDOHBHFOHEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AKHIFDGGMJB_EDOHBHFOHEH_OFFSET))(this);
	}
};
