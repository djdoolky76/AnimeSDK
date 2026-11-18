#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMaterialKeywordCondition; }
namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define HLBOKPNANDP_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15B663F0)
#define HLBOKPNANDP_JDADOOODGKM_OFFSET UNITYSDK_OFFSET(0x15B66620)
#define HLBOKPNANDP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15B66970)
#define HLBOKPNANDP_JKCLKNOOCAF_OFFSET UNITYSDK_OFFSET(0x15B66A40)
#define HLBOKPNANDP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15B66350)
#define HLBOKPNANDP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B662C0)

inline static constexpr unsigned int HLBOKPNANDP_TypeDefinitionIndex = 48411;

class HLBOKPNANDP
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigMaterialKeywordCondition*>*>* JBPBINFKANH; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* CBJFDEKKNOD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOKPNANDP__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HLBOKPNANDP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialKeywordConditions*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialKeywordConditions*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLBOKPNANDP_CREATEOP_OFFSET))(this);
	}

	::System::Void JDADOOODGKM(::UnityEngine::Material* KNNDDLMOKCG, ::System::String* KEKLFCCONCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*))((::PBYTE)hIl2Cpp + HLBOKPNANDP_JDADOOODGKM_OFFSET))(this, KNNDDLMOKCG, KEKLFCCONCL);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + HLBOKPNANDP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void JKCLKNOOCAF(::MoleMole::Config::ConfigMaterialKeywordConditions* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialKeywordConditions*))((::PBYTE)hIl2Cpp + HLBOKPNANDP_JKCLKNOOCAF_OFFSET))(this, DFMKILICPFB);
	}
};
