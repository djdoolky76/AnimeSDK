#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define JILKCIALAEK_EHJMDNJKHJG_IJLOECOPBBB_OFFSET UNITYSDK_OFFSET(0x198CB760)
#define JILKCIALAEK_EHJMDNJKHJG__CTOR_OFFSET UNITYSDK_OFFSET(0x198CB750)

inline static constexpr unsigned int JILKCIALAEK_EHJMDNJKHJG_TypeDefinitionIndex = 59068;

class JILKCIALAEK_EHJMDNJKHJG : public ::System::Object
{
public:
	::System::Action* GODDDLDNLMN; // 0x10
	::System::String* NFCIDOCAKMN; // 0x18
	::MoleMole::LanguageVoiceType LGHICHIJKDC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKCIALAEK_EHJMDNJKHJG__CTOR_OFFSET))(this);
	}

	::System::Void IJLOECOPBBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKCIALAEK_EHJMDNJKHJG_IJLOECOPBBB_OFFSET))(this);
	}
};
