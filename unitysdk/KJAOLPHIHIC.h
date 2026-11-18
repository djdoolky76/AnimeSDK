#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class JODJCPEIIHG;
namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigTriggerCaches; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJAOLPHIHIC_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x157F0040)
#define KJAOLPHIHIC_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x157F01A0)
#define KJAOLPHIHIC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x157F0A90)
#define KJAOLPHIHIC_NADOIJGEBDE_OFFSET UNITYSDK_OFFSET(0x157F0290)
#define KJAOLPHIHIC_NJFAAFDICHG_OFFSET UNITYSDK_OFFSET(0x157F04C0)
#define KJAOLPHIHIC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x157EFFA0)
#define KJAOLPHIHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x157EFF60)

inline static constexpr unsigned int KJAOLPHIHIC_TypeDefinitionIndex = 88543;

class KJAOLPHIHIC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOLPHIHIC__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void NADOIJGEBDE(::MoleMole::Config::ConfigTriggerCaches* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_NADOIJGEBDE_OFFSET))(this, DFMKILICPFB);
	}

	::System::Void NJFAAFDICHG(::System::Collections::Generic::List_1<::System::String*>* JHILIEPBPOG, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*& IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::JODJCPEIIHG*>*>*&))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_NJFAAFDICHG_OFFSET))(this, JHILIEPBPOG, IGAAKDOIPNN);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
