#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class HAAGMMMCPDB;
class KPAKKGFDMCJ;
namespace MoleMole::Config { class ConfigLockTarget; }
namespace MoleMole::Config { class ConfigLockTargetMiscInfo; }
namespace System { class String; }

#define EIANAEIEADK_BAHLFOCAPBJ_OFFSET UNITYSDK_OFFSET(0x10F34260)
#define EIANAEIEADK_DBBNKNPPMMG_OFFSET UNITYSDK_OFFSET(0x10F34700)
#define EIANAEIEADK_EDPILHFFNPF_OFFSET UNITYSDK_OFFSET(0x10F34650)
#define EIANAEIEADK_HALAIONJAHO_OFFSET UNITYSDK_OFFSET(0x10F34270)
#define EIANAEIEADK_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x10F34190)
#define EIANAEIEADK_LLKDBDPCCON_OFFSET UNITYSDK_OFFSET(0x10F34440)
#define EIANAEIEADK_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x10F33FD0)
#define EIANAEIEADK__CTOR_OFFSET UNITYSDK_OFFSET(0x10F33EE0)

inline static constexpr unsigned int EIANAEIEADK_TypeDefinitionIndex = 54302;

class EIANAEIEADK
{
public:
	::KPAKKGFDMCJ* _HEKJNHKFEPJ_k__BackingField; // 0x28
	::HAAGMMMCPDB* _NOEPLDLMONO_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANAEIEADK__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EIANAEIEADK_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EIANAEIEADK_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::KPAKKGFDMCJ* BAHLFOCAPBJ()
	{
		return ((::KPAKKGFDMCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANAEIEADK_BAHLFOCAPBJ_OFFSET))(this);
	}

	::System::Single HALAIONJAHO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIANAEIEADK_HALAIONJAHO_OFFSET))(this, ABHBKFJKINO);
	}

	::MoleMole::Config::ConfigLockTarget* EDPILHFFNPF(::System::String* CPEGDIGMGBC)
	{
		return ((::MoleMole::Config::ConfigLockTarget*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EIANAEIEADK_EDPILHFFNPF_OFFSET))(this, CPEGDIGMGBC);
	}

	::HAAGMMMCPDB* DBBNKNPPMMG()
	{
		return ((::HAAGMMMCPDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANAEIEADK_DBBNKNPPMMG_OFFSET))(this);
	}

	::MoleMole::Config::ConfigLockTargetMiscInfo* LLKDBDPCCON()
	{
		return ((::MoleMole::Config::ConfigLockTargetMiscInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIANAEIEADK_LLKDBDPCCON_OFFSET))(this);
	}
};
