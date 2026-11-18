#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BCABDJMIGEA;
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }

#define BCABDJMIGEA_DCMPEMEHPMK_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x113D3460)
#define BCABDJMIGEA_DCMPEMEHPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x113D3450)

inline static constexpr unsigned int BCABDJMIGEA_DCMPEMEHPMK_TypeDefinitionIndex = 85424;

class BCABDJMIGEA_DCMPEMEHPMK : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::BCABDJMIGEA* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCABDJMIGEA_DCMPEMEHPMK__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCommonEntityAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + BCABDJMIGEA_DCMPEMEHPMK_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
