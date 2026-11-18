#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BCABDJMIGEA_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0xF78A950)
#define BCABDJMIGEA_MPGNCBGBGNJ_OFFSET UNITYSDK_OFFSET(0xF78AC90)
#define BCABDJMIGEA_ONKIIKDDICO_OFFSET UNITYSDK_OFFSET(0xF78AA40)
#define BCABDJMIGEA_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0xF78A8E0)
#define BCABDJMIGEA__CTOR_OFFSET UNITYSDK_OFFSET(0xF78A840)

inline static constexpr unsigned int BCABDJMIGEA_TypeDefinitionIndex = 85423;

class BCABDJMIGEA
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>* PPEFKLBPKOC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCABDJMIGEA__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::Foundation::AssetPath MCOHLHMKLIP)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BCABDJMIGEA_RESOLVEASSETPATH_OFFSET))(this, MCOHLHMKLIP);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCommonEntityAnimEvents*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::Config::ConfigCommonEntityAnimEvents*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + BCABDJMIGEA_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void ONKIIKDDICO(::Foundation::AssetPath CJBJONJDOLI, ::MoleMole::Config::ConfigCommonEntityAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::ConfigCommonEntityAnimEvents*))((::PBYTE)hIl2Cpp + BCABDJMIGEA_ONKIIKDDICO_OFFSET))(this, CJBJONJDOLI, DFMKILICPFB);
	}

	::System::Boolean MPGNCBGBGNJ(::System::String* PKGDBDFHOMO, ::MoleMole::Config::ConfigEntityAnimEvent*& LMCPMAKFIIG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*&))((::PBYTE)hIl2Cpp + BCABDJMIGEA_MPGNCBGBGNJ_OFFSET))(this, PKGDBDFHOMO, LMCPMAKFIIG);
	}
};
