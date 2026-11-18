#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigEffectSound; }

#define KBFLEHPKFIN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x13C508F0)
#define KBFLEHPKFIN__CTOR_OFFSET UNITYSDK_OFFSET(0x13C50860)

inline static constexpr unsigned int KBFLEHPKFIN_TypeDefinitionIndex = 75934;

class KBFLEHPKFIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFLEHPKFIN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigEffectSound*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigEffectSound*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBFLEHPKFIN_CREATEOP_OFFSET))(this);
	}
};
