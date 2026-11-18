#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigVoiceToEvent; }

#define GOHLMAECEKP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15D8B9A0)
#define GOHLMAECEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8B910)

inline static constexpr unsigned int GOHLMAECEKP_TypeDefinitionIndex = 60076;

class GOHLMAECEKP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHLMAECEKP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigVoiceToEvent*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigVoiceToEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOHLMAECEKP_CREATEOP_OFFSET))(this);
	}
};
