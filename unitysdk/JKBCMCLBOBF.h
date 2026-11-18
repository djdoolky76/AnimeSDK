#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigWindFieldProperty; }
namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKBCMCLBOBF_BMOPJJOJMID_OFFSET UNITYSDK_OFFSET(0x18740F10)
#define JKBCMCLBOBF_CREATEOP_OFFSET UNITYSDK_OFFSET(0x187407D0)
#define JKBCMCLBOBF_FKNNMIPMBGH_OFFSET UNITYSDK_OFFSET(0x187410B0)
#define JKBCMCLBOBF_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x187409C0)
#define JKBCMCLBOBF_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x187408F0)
#define JKBCMCLBOBF_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18740730)
#define JKBCMCLBOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x187406A0)

inline static constexpr unsigned int JKBCMCLBOBF_TypeDefinitionIndex = 88663;

class JKBCMCLBOBF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBCMCLBOBF__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>* HOEPJPJODKF(::Il2CppArray<::Foundation::AssetPath>* OPCMGALKGKJ, ::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigWindFieldProperty*>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::MoleMole::Config::WindFieldConfig*>*))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_HOEPJPJODKF_OFFSET))(OPCMGALKGKJ, KEJJKECGLOP);
	}

	::MoleMole::Config::ConfigWindFieldProperty* BMOPJJOJMID(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigWindFieldProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_BMOPJJOJMID_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Boolean FKNNMIPMBGH(::System::String* OLJDIMJJJAK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JKBCMCLBOBF_FKNNMIPMBGH_OFFSET))(this, OLJDIMJJJAK);
	}
};
