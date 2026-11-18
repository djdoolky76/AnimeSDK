#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class GIEDOGIBIMC;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define MFNLCFCCPNN_CREATEOP_OFFSET UNITYSDK_OFFSET(0x185367B0)
#define MFNLCFCCPNN_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x18536D70)
#define MFNLCFCCPNN_JHGGINBEFPK_OFFSET UNITYSDK_OFFSET(0x18536E40)
#define MFNLCFCCPNN_NBJFMOLDOHK_OFFSET UNITYSDK_OFFSET(0x185368D0)
#define MFNLCFCCPNN_OJKJJMKJFCP_OFFSET UNITYSDK_OFFSET(0x18536A80)
#define MFNLCFCCPNN_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x18536710)
#define MFNLCFCCPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x18536680)

inline static constexpr unsigned int MFNLCFCCPNN_TypeDefinitionIndex = 92487;

class MFNLCFCCPNN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNLCFCCPNN__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_CREATEOP_OFFSET))(this);
	}

	::System::Boolean NBJFMOLDOHK(::System::Int32 AEIAFDJOACK, ::GIEDOGIBIMC*& DFMKILICPFB)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GIEDOGIBIMC*&))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_NBJFMOLDOHK_OFFSET))(this, AEIAFDJOACK, DFMKILICPFB);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>* OJKJJMKJFCP(::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO, ::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_OJKJJMKJFCP_OFFSET))(JPOGGACGEPO, FLOOJIHFBLF, ECACIAGIEKA);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::GIEDOGIBIMC* JHGGINBEFPK(::System::Int32 AEIAFDJOACK)
	{
		return ((::GIEDOGIBIMC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MFNLCFCCPNN_JHGGINBEFPK_OFFSET))(this, AEIAFDJOACK);
	}
};
