#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigTargetValue; }
namespace MoleMole::Config { class ConfigTargetValues; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELPODNHLCJN_CKLBDAKKLED_OFFSET UNITYSDK_OFFSET(0x1354FE70)
#define ELPODNHLCJN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1354FD00)
#define ELPODNHLCJN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x135506A0)
#define ELPODNHLCJN_JMAIKOLFDAA_OFFSET UNITYSDK_OFFSET(0x135503F0)
#define ELPODNHLCJN_NAIFGMCKLPP_OFFSET UNITYSDK_OFFSET(0x1354FE30)
#define ELPODNHLCJN_ODEHOHKJOIJ_OFFSET UNITYSDK_OFFSET(0x1354FF30)
#define ELPODNHLCJN_OODKIBHOBND_OFFSET UNITYSDK_OFFSET(0x13550770)
#define ELPODNHLCJN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1354FC60)
#define ELPODNHLCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1354FBD0)

inline static constexpr unsigned int ELPODNHLCJN_TypeDefinitionIndex = 43140;

class ELPODNHLCJN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ELPODNHLCJN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTargetValues*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigTargetValues*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN_CREATEOP_OFFSET))(this);
	}

	::System::Int32 NAIFGMCKLPP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN_NAIFGMCKLPP_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTargetValues* CKLBDAKKLED()
	{
		return ((::MoleMole::Config::ConfigTargetValues*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN_CKLBDAKKLED_OFFSET))(this);
	}

	::MoleMole::Config::ConfigTargetValue* ODEHOHKJOIJ(::System::String* AELLPLBJELA)
	{
		return ((::MoleMole::Config::ConfigTargetValue*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ELPODNHLCJN_ODEHOHKJOIJ_OFFSET))(this, AELLPLBJELA);
	}

	::System::Collections::Generic::List_1<::System::String*>* JMAIKOLFDAA()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN_JMAIKOLFDAA_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + ELPODNHLCJN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Single OODKIBHOBND()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELPODNHLCJN_OODKIBHOBND_OFFSET))(this);
	}
};
