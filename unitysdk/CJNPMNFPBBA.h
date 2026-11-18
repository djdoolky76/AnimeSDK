#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigLanguageVideo; }
namespace MoleMole { class LanguageVideo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CJNPMNFPBBA_CREATEOP_OFFSET UNITYSDK_OFFSET(0x18DDA7F0)
#define CJNPMNFPBBA_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x18DDA9E0)
#define CJNPMNFPBBA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18DDA910)
#define CJNPMNFPBBA_OJMFFCPOLEN_OFFSET UNITYSDK_OFFSET(0x18DDADF0)
#define CJNPMNFPBBA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18DDA750)
#define CJNPMNFPBBA__CTOR_OFFSET UNITYSDK_OFFSET(0x18DDA6C0)

inline static constexpr unsigned int CJNPMNFPBBA_TypeDefinitionIndex = 68539;

class CJNPMNFPBBA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNPMNFPBBA__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CJNPMNFPBBA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNPMNFPBBA_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CJNPMNFPBBA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>* HOEPJPJODKF(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>* MHDAJGPGLOD)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*(*)(::System::Collections::Generic::List_1<::MoleMole::ConfigLanguageVideo*>*))((::PBYTE)hIl2Cpp + CJNPMNFPBBA_HOEPJPJODKF_OFFSET))(MHDAJGPGLOD);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>* OJMFFCPOLEN()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::LanguageVideo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJNPMNFPBBA_OJMFFCPOLEN_OFFSET))(this);
	}
};
