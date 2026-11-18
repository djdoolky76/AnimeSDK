#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityScreenEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EJNKIOCFBEO_CREATEOP_OFFSET UNITYSDK_OFFSET(0x11CAC510)
#define EJNKIOCFBEO__CTOR_OFFSET UNITYSDK_OFFSET(0x11CAC480)

inline static constexpr unsigned int EJNKIOCFBEO_TypeDefinitionIndex = 59176;

class EJNKIOCFBEO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNKIOCFBEO__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityScreenEffect*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJNKIOCFBEO_CREATEOP_OFFSET))(this);
	}
};
