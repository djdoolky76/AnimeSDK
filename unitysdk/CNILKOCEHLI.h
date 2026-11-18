#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigUIAvatarShow; }

#define CNILKOCEHLI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12043C00)
#define CNILKOCEHLI__CTOR_OFFSET UNITYSDK_OFFSET(0x12043B70)

inline static constexpr unsigned int CNILKOCEHLI_TypeDefinitionIndex = 92737;

class CNILKOCEHLI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNILKOCEHLI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShow*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigUIAvatarShow*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNILKOCEHLI_CREATEOP_OFFSET))(this);
	}
};
