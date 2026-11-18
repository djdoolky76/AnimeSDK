#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KPAKKGFDMCJ;
namespace MoleMole::Config { class ConfigLockTargets; }

#define KPAKKGFDMCJ_IGGIBPMKJFN_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x1A2E03E0)
#define KPAKKGFDMCJ_IGGIBPMKJFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E03D0)

inline static constexpr unsigned int KPAKKGFDMCJ_IGGIBPMKJFN_TypeDefinitionIndex = 79270;

class KPAKKGFDMCJ_IGGIBPMKJFN : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::KPAKKGFDMCJ* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ_IGGIBPMKJFN__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigLockTargets* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLockTargets*))((::PBYTE)hIl2Cpp + KPAKKGFDMCJ_IGGIBPMKJFN_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
