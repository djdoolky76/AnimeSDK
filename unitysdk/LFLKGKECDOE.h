#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ItemDropEffectScriptConfig; }
namespace MoleMole::Config { class ItemDropEffectSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFLKGKECDOE_BADKHIJEHLE_OFFSET UNITYSDK_OFFSET(0x12A3DB30)
#define LFLKGKECDOE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12A3D610)
#define LFLKGKECDOE_GLEOOFICHPD_OFFSET UNITYSDK_OFFSET(0x12A3DA10)
#define LFLKGKECDOE_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12A3D740)
#define LFLKGKECDOE_MAKCHDGDFKJ_OFFSET UNITYSDK_OFFSET(0x12A3D810)
#define LFLKGKECDOE_NJEIACNMJHL_OFFSET UNITYSDK_OFFSET(0x12A3DD30)
#define LFLKGKECDOE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12A3D570)
#define LFLKGKECDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1998BF70)

inline static constexpr unsigned int LFLKGKECDOE_TypeDefinitionIndex = 92942;

class LFLKGKECDOE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LFLKGKECDOE_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ItemDropEffectScriptConfig*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ItemDropEffectScriptConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + LFLKGKECDOE_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::MoleMole::Config::ItemDropEffectSetting* MAKCHDGDFKJ()
	{
		return ((::MoleMole::Config::ItemDropEffectSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE_MAKCHDGDFKJ_OFFSET))(this);
	}

	::MoleMole::Config::ItemDropEffectSetting* GLEOOFICHPD(::System::String* HIAIKHDFCLN)
	{
		return ((::MoleMole::Config::ItemDropEffectSetting*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFLKGKECDOE_GLEOOFICHPD_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NJEIACNMJHL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE_NJEIACNMJHL_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>* BADKHIJEHLE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ItemDropEffectSetting*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLKGKECDOE_BADKHIJEHLE_OFFSET))(this);
	}
};
