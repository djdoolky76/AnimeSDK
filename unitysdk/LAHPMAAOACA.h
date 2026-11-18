#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigVideoAudioMapping; }

#define LAHPMAAOACA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15DDC3A0)
#define LAHPMAAOACA__CTOR_OFFSET UNITYSDK_OFFSET(0x15DDC310)

inline static constexpr unsigned int LAHPMAAOACA_TypeDefinitionIndex = 68686;

class LAHPMAAOACA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHPMAAOACA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigVideoAudioMapping*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::ConfigVideoAudioMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHPMAAOACA_CREATEOP_OFFSET))(this);
	}
};
