#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class LLCFODKNNLB;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define GOLODPJPFJE_AJFJMCNBJFM_OFFSET UNITYSDK_OFFSET(0x15D8D170)
#define GOLODPJPFJE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15D8CCB0)
#define GOLODPJPFJE_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x15D8CEA0)
#define GOLODPJPFJE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15D8CDD0)
#define GOLODPJPFJE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15D8CC10)
#define GOLODPJPFJE__CTOR_OFFSET UNITYSDK_OFFSET(0x15D8CB80)

inline static constexpr unsigned int GOLODPJPFJE_TypeDefinitionIndex = 59567;

class GOLODPJPFJE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLODPJPFJE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GOLODPJPFJE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOLODPJPFJE_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GOLODPJPFJE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>* HOEPJPJODKF(::Il2CppArray<::Foundation::AssetPath>* NCOLHHBDNOM, ::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* JICBDECIBGK)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + GOLODPJPFJE_HOEPJPJODKF_OFFSET))(NCOLHHBDNOM, FLOOJIHFBLF, JICBDECIBGK);
	}

	::LLCFODKNNLB* AJFJMCNBJFM(::System::String* HHBKGNAMDJN)
	{
		return ((::LLCFODKNNLB*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOLODPJPFJE_AJFJMCNBJFM_OFFSET))(this, HHBKGNAMDJN);
	}
};
