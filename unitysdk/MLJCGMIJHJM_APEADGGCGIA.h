#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MLJCGMIJHJM;
namespace System { template <typename T> class Action_1; }

#define MLJCGMIJHJM_APEADGGCGIA_BPGOPKKLIJC_OFFSET UNITYSDK_OFFSET(0x151EAE40)
#define MLJCGMIJHJM_APEADGGCGIA_FEAAFDNOKPA_OFFSET UNITYSDK_OFFSET(0x151EADE0)
#define MLJCGMIJHJM_APEADGGCGIA_NNNDFHJKCBH_OFFSET UNITYSDK_OFFSET(0x151EAD50)
#define MLJCGMIJHJM_APEADGGCGIA__CTOR_OFFSET UNITYSDK_OFFSET(0x151EAD40)

inline static constexpr unsigned int MLJCGMIJHJM_APEADGGCGIA_TypeDefinitionIndex = 90150;

class MLJCGMIJHJM_APEADGGCGIA : public ::System::Object
{
public:
	::MLJCGMIJHJM* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Boolean>* FFMGICPLKFB; // 0x18
	::System::Int32 BALCDFGKJFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM_APEADGGCGIA__CTOR_OFFSET))(this);
	}

	::System::Void NNNDFHJKCBH(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLJCGMIJHJM_APEADGGCGIA_NNNDFHJKCBH_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void FEAAFDNOKPA(::System::Boolean EMIKCAHJLGB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLJCGMIJHJM_APEADGGCGIA_FEAAFDNOKPA_OFFSET))(this, EMIKCAHJLGB);
	}

	::System::Void BPGOPKKLIJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLJCGMIJHJM_APEADGGCGIA_BPGOPKKLIJC_OFFSET))(this);
	}
};
