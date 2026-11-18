#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMLGGJAPPPF;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;

#define FMLGGJAPPPF_CBLGHADDMOK_MHNPOKAJLDG_OFFSET UNITYSDK_OFFSET(0x13229E80)
#define FMLGGJAPPPF_CBLGHADDMOK__CTOR_OFFSET UNITYSDK_OFFSET(0x13229E70)

inline static constexpr unsigned int FMLGGJAPPPF_CBLGHADDMOK_TypeDefinitionIndex = 64621;

class FMLGGJAPPPF_CBLGHADDMOK : public ::System::Object
{
public:
	::FMLGGJAPPPF* KLHPEBKNIFB; // 0x10
	::IANDOOLAALI_NGKHGAPPFDA* NKGCDDCMBCF; // 0x18
	::IANDOOLAALI_DLAAJNDJPLO* FPNLKPJNCGK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_CBLGHADDMOK__CTOR_OFFSET))(this);
	}

	::System::Void MHNPOKAJLDG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMLGGJAPPPF_CBLGHADDMOK_MHNPOKAJLDG_OFFSET))(this);
	}
};
