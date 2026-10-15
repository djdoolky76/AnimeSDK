#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EDOAKFMPPAP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtCharacterFlagVisual; }
namespace RPG::GameCore { class RtCharacterVisual; }

#define EDOAKFMPPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD42EF0)
#define EDOAKFMPPAP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD42F00)
#define EDOAKFMPPAP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD42EC0)

inline static constexpr unsigned int EDOAKFMPPAP_TypeDefinitionIndex = 24090;

	class EDOAKFMPPAP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtCharacterFlagVisual*>* CKEEENLAOGF; // 0x18
		::RPG::GameCore::RtCharacterVisual* FAHLGFCIDMN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDOAKFMPPAP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EDOAKFMPPAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDOAKFMPPAP*))((::PBYTE)hIl2Cpp + EDOAKFMPPAP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EDOAKFMPPAP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EDOAKFMPPAP*))((::PBYTE)hIl2Cpp + EDOAKFMPPAP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
