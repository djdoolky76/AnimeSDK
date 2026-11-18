#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FNAFBEKEFCM_CJHCHPMKEDE_OFFSET UNITYSDK_OFFSET(0x142ABCD0)
#define FNAFBEKEFCM_CREATEOP_OFFSET UNITYSDK_OFFSET(0x142AB060)
#define FNAFBEKEFCM_GBFAGDLBFAB_OFFSET UNITYSDK_OFFSET(0x142AB5A0)
#define FNAFBEKEFCM_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x142ABDE0)
#define FNAFBEKEFCM_KEIGKGMOLKO_OFFSET UNITYSDK_OFFSET(0x142ABCE0)
#define FNAFBEKEFCM_KPMJPBAHOPI_OFFSET UNITYSDK_OFFSET(0x142AB410)
#define FNAFBEKEFCM_LKFNLBIODDN_OFFSET UNITYSDK_OFFSET(0x142ABB30)
#define FNAFBEKEFCM_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x142AAFC0)
#define FNAFBEKEFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x142AAE20)

inline static constexpr unsigned int FNAFBEKEFCM_TypeDefinitionIndex = 77216;

class FNAFBEKEFCM
{
public:
	// static const ::System::Int32 EKCLCPBKPCO = 0x1F; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Int32>* DLOLOCMPPGA; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* GLGAHOFDFPD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFBEKEFCM__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardLight*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigHollowChessboardLight*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_CREATEOP_OFFSET))(this);
	}

	::System::Boolean KPMJPBAHOPI(::MoleMole::Vector2Int MCOHLHMKLIP, ::System::Int32& JBNBMFNNELP)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Vector2Int, ::System::Int32&))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_KPMJPBAHOPI_OFFSET))(this, MCOHLHMKLIP, JBNBMFNNELP);
	}

	::System::Void GBFAGDLBFAB(::MoleMole::Config::ConfigHollowChessboardLight* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_GBFAGDLBFAB_OFFSET))(this, DFMKILICPFB);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* LKFNLBIODDN(::System::Int32 BDEDDEGJFKL)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_LKFNLBIODDN_OFFSET))(this, BDEDDEGJFKL);
	}

	::System::Void CJHCHPMKEDE(::MoleMole::Config::ConfigHollowChessboardLight* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_CJHCHPMKEDE_OFFSET))(this, DFMKILICPFB);
	}

	::MoleMole::Config::ConfigHollowChessboardLight* KEIGKGMOLKO()
	{
		return ((::MoleMole::Config::ConfigHollowChessboardLight*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_KEIGKGMOLKO_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + FNAFBEKEFCM_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
