#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigAvatarDateTeleport; }

#define JCCLDBLABJL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x160D6980)
#define JCCLDBLABJL__CTOR_OFFSET UNITYSDK_OFFSET(0x160D68F0)

inline static constexpr unsigned int JCCLDBLABJL_TypeDefinitionIndex = 61095;

class JCCLDBLABJL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCLDBLABJL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigAvatarDateTeleport*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigAvatarDateTeleport*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCCLDBLABJL_CREATEOP_OFFSET))(this);
	}
};
