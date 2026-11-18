#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHardCoreBossBattletPrepPageController_Context; }
namespace MoleMole { class UIWindowController; }
namespace System { template <typename T> class Action_1; }

#define EIBHHJENHJK_BEICKEJLFCN_NNDEEIBFMMC_OFFSET UNITYSDK_OFFSET(0x16145390)
#define EIBHHJENHJK_BEICKEJLFCN__CTOR_OFFSET UNITYSDK_OFFSET(0x16145380)

inline static constexpr unsigned int EIBHHJENHJK_BEICKEJLFCN_TypeDefinitionIndex = 71908;

class EIBHHJENHJK_BEICKEJLFCN : public ::System::Object
{
public:
	::MoleMole::UIHardCoreBossBattletPrepPageController_Context* OCKJOFPLMAC; // 0x10
	::System::Action_1<::MoleMole::UIWindowController*>* GENFJNEPKEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_BEICKEJLFCN__CTOR_OFFSET))(this);
	}

	::System::Void NNDEEIBFMMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIBHHJENHJK_BEICKEJLFCN_NNDEEIBFMMC_OFFSET))(this);
	}
};
