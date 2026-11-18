#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }

#define MFDLPOGAEHM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x156A59E0)
#define MFDLPOGAEHM__CTOR_OFFSET UNITYSDK_OFFSET(0x156A5950)

inline static constexpr unsigned int MFDLPOGAEHM_TypeDefinitionIndex = 66841;

class MFDLPOGAEHM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDLPOGAEHM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAvatarLayoutCameraMisc*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigAvatarLayoutCameraMisc*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDLPOGAEHM_CREATEOP_OFFSET))(this);
	}
};
