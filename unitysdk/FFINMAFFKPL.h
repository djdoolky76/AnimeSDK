#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigAudioTrack; }

#define FFINMAFFKPL_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14AC6640)
#define FFINMAFFKPL__CTOR_OFFSET UNITYSDK_OFFSET(0x14AC65B0)

inline static constexpr unsigned int FFINMAFFKPL_TypeDefinitionIndex = 74890;

class FFINMAFFKPL
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINMAFFKPL__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigAudioTrack*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigAudioTrack*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFINMAFFKPL_CREATEOP_OFFSET))(this);
	}
};
