#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigGalGameAvatarShow; }

#define LLLCODIPGNG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15665750)
#define LLLCODIPGNG__CTOR_OFFSET UNITYSDK_OFFSET(0x156656C0)

inline static constexpr unsigned int LLLCODIPGNG_TypeDefinitionIndex = 70119;

class LLLCODIPGNG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCODIPGNG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigGalGameAvatarShow*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigGalGameAvatarShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLLCODIPGNG_CREATEOP_OFFSET))(this);
	}
};
