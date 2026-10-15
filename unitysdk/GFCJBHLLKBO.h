#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCJBHLLKBO_GAPLDKGHPPP;
namespace RPG::Client { class TarotBookInteraction; }
namespace System { template <typename T> class Action_1; }

#define GFCJBHLLKBO_CLLANDGCOPJ_OFFSET UNITYSDK_OFFSET(0x159DE590)
#define GFCJBHLLKBO_CTOR_OFFSET UNITYSDK_OFFSET(0x159DED00)
#define GFCJBHLLKBO_DHBJHMFMLCI_OFFSET UNITYSDK_OFFSET(0x159DEB40)
#define GFCJBHLLKBO_EAKIHFBEJJD_OFFSET UNITYSDK_OFFSET(0x159DE4C0)
#define GFCJBHLLKBO_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x159DE510)
#define GFCJBHLLKBO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x159DE8A0)
#define GFCJBHLLKBO_MMDCJOAPDCD_OFFSET UNITYSDK_OFFSET(0x159DE530)
#define GFCJBHLLKBO_SET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x159DE520)

inline static constexpr unsigned int GFCJBHLLKBO_TypeDefinitionIndex = 68064;

	class GFCJBHLLKBO : public ::System::Object
	{
	public:
		::GFCJBHLLKBO_GAPLDKGHPPP* EEFMDEHLLFI; // 0x10
		::RPG::Client::TarotBookInteraction* _LastInteraction_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_CTOR_OFFSET))(this);
		}

		::System::Boolean EAKIHFBEJJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_EAKIHFBEJJD_OFFSET))(this);
		}

		::RPG::Client::TarotBookInteraction* get_LastInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_GET_LASTINTERACTION_OFFSET))(this);
		}

		::System::Void set_LastInteraction(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_SET_LASTINTERACTION_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookInteraction* MMDCJOAPDCD()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_MMDCJOAPDCD_OFFSET))(this);
		}

		::System::Boolean CLLANDGCOPJ(::RPG::Client::TarotBookInteraction* a1, ::System::Action_1<::RPG::Client::TarotBookInteraction*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*, ::System::Action_1<::RPG::Client::TarotBookInteraction*>*))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_CLLANDGCOPJ_OFFSET))(this, a1, a2);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void DHBJHMFMLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCJBHLLKBO_DHBJHMFMLCI_OFFSET))(this);
		}

	};
