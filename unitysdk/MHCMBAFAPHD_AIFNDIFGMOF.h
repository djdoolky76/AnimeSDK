#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffect; }
namespace MoleMole::Config { class ConfigEntityShadowsMidtonesHighlightsEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHCMBAFAPHD_AIFNDIFGMOF_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1853CC50)
#define MHCMBAFAPHD_AIFNDIFGMOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1853CC40)

inline static constexpr unsigned int MHCMBAFAPHD_AIFNDIFGMOF_TypeDefinitionIndex = 44332;

class MHCMBAFAPHD_AIFNDIFGMOF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCMBAFAPHD_AIFNDIFGMOF__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityShadowsMidtonesHighlightsEffects*>*))((::PBYTE)hIl2Cpp + MHCMBAFAPHD_AIFNDIFGMOF_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
