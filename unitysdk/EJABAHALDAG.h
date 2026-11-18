#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/MoleMole/DynamicCheckTreeDataEntry.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigDynamicCheckTree; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EJABAHALDAG_CREATEOP_OFFSET UNITYSDK_OFFSET(0x14A9DB80)
#define EJABAHALDAG_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x14A9DD70)
#define EJABAHALDAG_IBFJAHGGLPM_OFFSET UNITYSDK_OFFSET(0x14A9E1F0)
#define EJABAHALDAG_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x14A9DCA0)
#define EJABAHALDAG_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x14A9DAE0)
#define EJABAHALDAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9DA50)

inline static constexpr unsigned int EJABAHALDAG_TypeDefinitionIndex = 57906;

class EJABAHALDAG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJABAHALDAG__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EJABAHALDAG_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJABAHALDAG_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EJABAHALDAG_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>* HOEPJPJODKF(::System::Int32 GIBDHABECBD, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicCheckTree*>*))((::PBYTE)hIl2Cpp + EJABAHALDAG_HOEPJPJODKF_OFFSET))(GIBDHABECBD, KEJJKECGLOP);
	}

	::System::Boolean IBFJAHGGLPM(::System::Int32 CLACNEMIOBA, ::MoleMole::DynamicCheckTreeDataEntry& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::DynamicCheckTreeDataEntry&))((::PBYTE)hIl2Cpp + EJABAHALDAG_IBFJAHGGLPM_OFFSET))(this, CLACNEMIOBA, EGEGIMGMJHN);
	}
};
