#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigRichtapSound; }

#define NDMPPPPIHFI_CREATEOP_OFFSET UNITYSDK_OFFSET(0xE18FA70)
#define NDMPPPPIHFI__CTOR_OFFSET UNITYSDK_OFFSET(0xE18F9E0)

inline static constexpr unsigned int NDMPPPPIHFI_TypeDefinitionIndex = 74184;

class NDMPPPPIHFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPPPPIHFI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigRichtapSound*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigRichtapSound*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMPPPPIHFI_CREATEOP_OFFSET))(this);
	}
};
