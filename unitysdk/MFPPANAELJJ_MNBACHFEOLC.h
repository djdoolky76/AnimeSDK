#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MFPPANAELJJ_LFDANFCGCFF;
class MJPLADANIGH;

#define MFPPANAELJJ_MNBACHFEOLC_FPNIPCLHMJJ_OFFSET UNITYSDK_OFFSET(0x14054FB0)
#define MFPPANAELJJ_MNBACHFEOLC__CTOR_OFFSET UNITYSDK_OFFSET(0x14054B80)

inline static constexpr unsigned int MFPPANAELJJ_MNBACHFEOLC_TypeDefinitionIndex = 77767;

class MFPPANAELJJ_MNBACHFEOLC : public ::System::Object
{
public:
	::MFPPANAELJJ_LFDANFCGCFF* FGBNBFHOKAA; // 0x10
	::MJPLADANIGH* PPIDFLBLIBN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ_MNBACHFEOLC__CTOR_OFFSET))(this);
	}

	::System::Void FPNIPCLHMJJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ_MNBACHFEOLC_FPNIPCLHMJJ_OFFSET))(this);
	}
};
