#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class NewConfigUICommon; }

#define MLOIOKJDBIN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x10778930)
#define MLOIOKJDBIN__CTOR_OFFSET UNITYSDK_OFFSET(0x107788A0)

inline static constexpr unsigned int MLOIOKJDBIN_TypeDefinitionIndex = 81987;

class MLOIOKJDBIN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOIOKJDBIN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::NewConfigUICommon*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::NewConfigUICommon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOIOKJDBIN_CREATEOP_OFFSET))(this);
	}
};
