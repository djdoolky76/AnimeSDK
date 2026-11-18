#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace MoleMole::Config { class ConfigShaderCustomFogMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDFJFILBDHI_AJHAMNHPLLC_OFFSET UNITYSDK_OFFSET(0x17641D70)
#define KDFJFILBDHI_BKPGPMHOPBH_OFFSET UNITYSDK_OFFSET(0x17641FC0)
#define KDFJFILBDHI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17641440)
#define KDFJFILBDHI_GKALNAOAGDP_OFFSET UNITYSDK_OFFSET(0x17641690)
#define KDFJFILBDHI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17641EF0)
#define KDFJFILBDHI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x176413A0)
#define KDFJFILBDHI__CTOR_OFFSET UNITYSDK_OFFSET(0x17641310)

inline static constexpr unsigned int KDFJFILBDHI_TypeDefinitionIndex = 85078;

class KDFJFILBDHI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KDFJFILBDHI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFJFILBDHI_CREATEOP_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>* GKALNAOAGDP(::Il2CppArray<::Foundation::AssetPath>* DGFHJGHBGOE, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigShaderCustomFogMap*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ShaderCustomType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigShaderCustomFogMap*>*))((::PBYTE)hIl2Cpp + KDFJFILBDHI_GKALNAOAGDP_OFFSET))(DGFHJGHBGOE, KEJJKECGLOP);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>* AJHAMNHPLLC(::MoleMole::Config::ShaderCustomType ABIEPJBODMH)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigShaderCustomBase*>*(*)(::PVOID, ::MoleMole::Config::ShaderCustomType))((::PBYTE)hIl2Cpp + KDFJFILBDHI_AJHAMNHPLLC_OFFSET))(this, ABIEPJBODMH);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + KDFJFILBDHI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigShaderCustomBase* BKPGPMHOPBH(::MoleMole::Config::ShaderCustomType ABIEPJBODMH, ::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID, ::MoleMole::Config::ShaderCustomType, ::System::String*))((::PBYTE)hIl2Cpp + KDFJFILBDHI_BKPGPMHOPBH_OFFSET))(this, ABIEPJBODMH, MCOHLHMKLIP);
	}
};
