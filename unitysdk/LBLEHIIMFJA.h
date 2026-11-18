#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class PreloadOp; }
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class HollowEntityConfig; }

#define LBLEHIIMFJA_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x16357CA0)
#define LBLEHIIMFJA_EJBKICLJKKA_OFFSET UNITYSDK_OFFSET(0x163580A0)
#define LBLEHIIMFJA_IDPALAIIHHM_OFFSET UNITYSDK_OFFSET(0x16358430)
#define LBLEHIIMFJA_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x16357FD0)
#define LBLEHIIMFJA_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x16357E10)
#define LBLEHIIMFJA_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x16357AF0)
#define LBLEHIIMFJA__CTOR_OFFSET UNITYSDK_OFFSET(0x16357AB0)

inline static constexpr unsigned int LBLEHIIMFJA_TypeDefinitionIndex = 57548;

class LBLEHIIMFJA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBLEHIIMFJA__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::System::UInt32 MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::HollowEntityConfig*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::HollowEntityConfig*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean EJBKICLJKKA(::ConfigModuleLib::Runtime::PreloadOp* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigModuleLib::Runtime::PreloadOp*))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_EJBKICLJKKA_OFFSET))(this, EBFCACIEKBC);
	}

	::MoleMole::HollowEntityConfig* IDPALAIIHHM(::System::UInt32 APKIKLPPHEA)
	{
		return ((::MoleMole::HollowEntityConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LBLEHIIMFJA_IDPALAIIHHM_OFFSET))(this, APKIKLPPHEA);
	}
};
