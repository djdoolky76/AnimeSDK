#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define DGGCBCFJCAJ_ELHJGNAMKHJ_OFFSET UNITYSDK_OFFSET(0x1A1DF720)
#define DGGCBCFJCAJ_MMFJBFKAPJK_OFFSET UNITYSDK_OFFSET(0x1A1DF790)
#define DGGCBCFJCAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DF780)

inline static constexpr unsigned int DGGCBCFJCAJ_TypeDefinitionIndex = 55227;

class DGGCBCFJCAJ : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGCBCFJCAJ__CTOR_OFFSET))(this);
	}

	::System::Void ELHJGNAMKHJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGCBCFJCAJ_ELHJGNAMKHJ_OFFSET))(this);
	}

	::System::Void MMFJBFKAPJK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGCBCFJCAJ_MMFJBFKAPJK_OFFSET))(this);
	}
};
