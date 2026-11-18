#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BHJNKEPAIOB;
namespace MoleMole { class UIHollowMainPageController; }

#define BHJNKEPAIOB_HBHBCOBBPHC_MKIFLNPIBEN_OFFSET UNITYSDK_OFFSET(0x13967560)
#define BHJNKEPAIOB_HBHBCOBBPHC__CTOR_OFFSET UNITYSDK_OFFSET(0x13967550)

inline static constexpr unsigned int BHJNKEPAIOB_HBHBCOBBPHC_TypeDefinitionIndex = 43125;

class BHJNKEPAIOB_HBHBCOBBPHC : public ::System::Object
{
public:
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x10
	::BHJNKEPAIOB* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJNKEPAIOB_HBHBCOBBPHC__CTOR_OFFSET))(this);
	}

	::System::Void MKIFLNPIBEN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJNKEPAIOB_HBHBCOBBPHC_MKIFLNPIBEN_OFFSET))(this);
	}
};
