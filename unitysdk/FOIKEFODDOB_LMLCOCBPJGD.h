#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigUIScriptableAnimationV2Index; }

#define FOIKEFODDOB_LMLCOCBPJGD_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1750F130)
#define FOIKEFODDOB_LMLCOCBPJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1750F0A0)

inline static constexpr unsigned int FOIKEFODDOB_LMLCOCBPJGD_TypeDefinitionIndex = 66543;

class FOIKEFODDOB_LMLCOCBPJGD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_LMLCOCBPJGD__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimationV2Index*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigUIScriptableAnimationV2Index*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOIKEFODDOB_LMLCOCBPJGD_CREATEOP_OFFSET))(this);
	}
};
