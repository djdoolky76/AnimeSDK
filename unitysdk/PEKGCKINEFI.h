#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class String; }
namespace UnityEngine { class Shader; }

#define PEKGCKINEFI_CDJCFOAOADL_OFFSET UNITYSDK_OFFSET(0x15535580)
#define PEKGCKINEFI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15535090)
#define PEKGCKINEFI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15535910)
#define PEKGCKINEFI_MBEPBIILJKO_1_OFFSET UNITYSDK_OFFSET(0x15535640)
#define PEKGCKINEFI_MBEPBIILJKO_OFFSET UNITYSDK_OFFSET(0x155351C0)
#define PEKGCKINEFI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15534FF0)
#define PEKGCKINEFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15534F60)

inline static constexpr unsigned int PEKGCKINEFI_TypeDefinitionIndex = 45915;

class PEKGCKINEFI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKGCKINEFI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PEKGCKINEFI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialPropertySettings*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigMaterialPropertySettings*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKGCKINEFI_CREATEOP_OFFSET))(this);
	}

	::System::Boolean MBEPBIILJKO(::MoleMole::Config::MaterialPropertyType CBKIEGMDEIE, ::UnityEngine::Shader*& JJIILBHFPEI)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::UnityEngine::Shader*&))((::PBYTE)hIl2Cpp + PEKGCKINEFI_MBEPBIILJKO_OFFSET))(this, CBKIEGMDEIE, JJIILBHFPEI);
	}

	::System::Boolean MBEPBIILJKO_1(::MoleMole::Config::MaterialPropertyType CBKIEGMDEIE, ::System::String*& MAIFBMEJPAB)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::String*&))((::PBYTE)hIl2Cpp + PEKGCKINEFI_MBEPBIILJKO_1_OFFSET))(this, CBKIEGMDEIE, MAIFBMEJPAB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PEKGCKINEFI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ConfigMaterialPropertySettings* CDJCFOAOADL()
	{
		return ((::MoleMole::Config::ConfigMaterialPropertySettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKGCKINEFI_CDJCFOAOADL_OFFSET))(this);
	}
};
