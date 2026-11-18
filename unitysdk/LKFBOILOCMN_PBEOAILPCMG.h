#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LKFBOILOCMN_PBEOAILPCMG_MOGFOOPHDIA_OFFSET UNITYSDK_OFFSET(0x184FCF70)
#define LKFBOILOCMN_PBEOAILPCMG__CTOR_OFFSET UNITYSDK_OFFSET(0x184FCF60)

inline static constexpr unsigned int LKFBOILOCMN_PBEOAILPCMG_TypeDefinitionIndex = 82630;

class LKFBOILOCMN_PBEOAILPCMG : public ::System::Object
{
public:
	::System::Boolean HJNEKMOJAEI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PBEOAILPCMG__CTOR_OFFSET))(this);
	}

	::System::Void MOGFOOPHDIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_PBEOAILPCMG_MOGFOOPHDIA_OFFSET))(this);
	}
};
