#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class ConfigEntityTimeSlowBase; }
namespace MoleMole::Config { class ConfigEntityTimeSlows; }
namespace System { class String; }

#define BBLEOGDCHNN_CAPNIPLHOLN_OFFSET UNITYSDK_OFFSET(0x1267C240)
#define BBLEOGDCHNN_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x1267BF20)
#define BBLEOGDCHNN_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x1267C080)
#define BBLEOGDCHNN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1267C170)
#define BBLEOGDCHNN_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x1267C390)
#define BBLEOGDCHNN_PHOHBGIKHGF_OFFSET UNITYSDK_OFFSET(0x1267C300)
#define BBLEOGDCHNN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1267BE80)
#define BBLEOGDCHNN__CTOR_OFFSET UNITYSDK_OFFSET(0x1267BE40)

inline static constexpr unsigned int BBLEOGDCHNN_TypeDefinitionIndex = 87194;

class BBLEOGDCHNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEOGDCHNN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigEntityTimeSlowBase* CAPNIPLHOLN(::System::String* DNOHAOIAFOP)
	{
		return ((::MoleMole::Config::ConfigEntityTimeSlowBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_CAPNIPLHOLN_OFFSET))(this, DNOHAOIAFOP);
	}

	::System::Boolean PHOHBGIKHGF(::System::String* DNOHAOIAFOP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_PHOHBGIKHGF_OFFSET))(this, DNOHAOIAFOP);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::ConfigEntityTimeSlows* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigEntityTimeSlows*))((::PBYTE)hIl2Cpp + BBLEOGDCHNN_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, DFMKILICPFB);
	}
};
