#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityOldCRTEffect; }
namespace MoleMole::Config { class ConfigEntityOldCRTEffects; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCICHELFDDI_HMGNLNAIIHA_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x178B1B90)
#define PCICHELFDDI_HMGNLNAIIHA__CTOR_OFFSET UNITYSDK_OFFSET(0x178B1B80)

inline static constexpr unsigned int PCICHELFDDI_HMGNLNAIIHA_TypeDefinitionIndex = 49416;

class PCICHELFDDI_HMGNLNAIIHA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>* INBACCBOBDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCICHELFDDI_HMGNLNAIIHA__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>* FLIAEJGDMLI(::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityOldCRTEffects*>* FAICKFPPNKM)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityOldCRTEffect*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityOldCRTEffects*>*))((::PBYTE)hIl2Cpp + PCICHELFDDI_HMGNLNAIIHA_FLIAEJGDMLI_OFFSET))(this, FAICKFPPNKM);
	}
};
