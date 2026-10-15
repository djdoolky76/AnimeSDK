#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJKLAEILHPK.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
class GAJEPPFKCIA;
namespace RPG::GameCore { class PetPartyInteractionDefinition; }

#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_BMOBJCFANLK_OFFSET UNITYSDK_OFFSET(0x15A85500)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A84BA0)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_DJNNLPKCFPL_OFFSET UNITYSDK_OFFSET(0x15A851F0)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_GET_DEFINITION_OFFSET UNITYSDK_OFFSET(0x15A85880)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_GPJMMBHFPOD_OFFSET UNITYSDK_OFFSET(0x15A85490)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A85110)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x15A85080)
#define GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15A85790)

inline static constexpr unsigned int GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_TypeDefinitionIndex = 53537;

	class GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI : public ::System::Object
	{
	public:
		::MJKLAEILHPK PBKCOEHAJGN; // 0x10
		::GAJEPPFKCIA* DDDNLILNMKA; // 0x40
		::RPG::GameCore::PetPartyInteractionDefinition* _Definition_k__BackingField; // 0x48
		::System::Boolean GFAMGLFOMGI; // 0x50
		::System::Boolean HKOPHLNFBIO; // 0x51
		::System::Void _ctor(::RPG::GameCore::PetPartyInteractionDefinition* a1, ::GAJEPPFKCIA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetPartyInteractionDefinition*, ::GAJEPPFKCIA*))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PetPartyInteractionDefinition* get_Definition()
		{
			return ((::RPG::GameCore::PetPartyInteractionDefinition*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_GET_DEFINITION_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_LDKMIKEMHFO_OFFSET))(this);
		}

		::RPG::GameCore::TaskState DJNNLPKCFPL()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_DJNNLPKCFPL_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GPJMMBHFPOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_GPJMMBHFPOD_OFFSET))(this);
		}

		::System::Void BMOBJCFANLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_JFNHCEFCJKI_DFBFHGFBMCI_BMOBJCFANLK_OFFSET))(this);
		}

	};
