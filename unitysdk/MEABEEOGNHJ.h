#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class DynamicBoneConfigMap;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }

#define MEABEEOGNHJ_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x17D1BAE0)
#define MEABEEOGNHJ_CREATEOP_OFFSET UNITYSDK_OFFSET(0x17D1B6E0)
#define MEABEEOGNHJ_JDAPNFOIPFK_OFFSET UNITYSDK_OFFSET(0x17D1BCD0)
#define MEABEEOGNHJ_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17D1BA10)
#define MEABEEOGNHJ_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x17D1B640)
#define MEABEEOGNHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1B5B0)

inline static constexpr unsigned int MEABEEOGNHJ_TypeDefinitionIndex = 86873;

class MEABEEOGNHJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MEABEEOGNHJ_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::DynamicBoneConfigMap*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::DynamicBoneConfigMap*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + MEABEEOGNHJ_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ_BJHHNNGACFN_OFFSET))(this);
	}

	::DynamicBoneConfigMap* JDAPNFOIPFK()
	{
		return ((::DynamicBoneConfigMap*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEABEEOGNHJ_JDAPNFOIPFK_OFFSET))(this);
	}
};
