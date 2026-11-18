#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class NewConfigUICommon; }

#define BDPPNOENHOJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1854DD90)
#define BDPPNOENHOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1854DD00)

inline static constexpr unsigned int BDPPNOENHOJ_TypeDefinitionIndex = 87015;

class BDPPNOENHOJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPPNOENHOJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::NewConfigUICommon*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::NewConfigUICommon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPPNOENHOJ_CREATEOP_OFFSET))(this);
	}
};
