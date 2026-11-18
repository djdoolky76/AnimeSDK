#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigEntityFilmGrain; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FHFDNMINDGP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14ACC4F0)
#define FHFDNMINDGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACC460)

inline static constexpr unsigned int FHFDNMINDGP_TypeDefinitionIndex = 66932;

class FHFDNMINDGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDNMINDGP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityFilmGrain*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFDNMINDGP_CREATEOP_OFFSET))(this);
	}
};
