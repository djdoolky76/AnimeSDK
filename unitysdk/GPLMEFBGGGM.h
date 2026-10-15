#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBDBABJLIIB;
class DJOHHNPBKBG;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class PerformanceManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace RPG::GameCore { class StoryCharacterRow; }
namespace System { class Action; }
namespace System { class Object; }

#define GPLMEFBGGGM_AJHILNHFIJH_OFFSET UNITYSDK_OFFSET(0x15B5E950)
#define GPLMEFBGGGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15B5DE80)
#define GPLMEFBGGGM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B5DF40)
#define GPLMEFBGGGM_EHCFKFNKBJB_OFFSET UNITYSDK_OFFSET(0x15B5DFE0)
#define GPLMEFBGGGM_GMGDMLINAPP_1_OFFSET UNITYSDK_OFFSET(0x15B5E2F0)
#define GPLMEFBGGGM_GMGDMLINAPP_OFFSET UNITYSDK_OFFSET(0x15B5FDA0)
#define GPLMEFBGGGM_GPJFFEHMDMM_OFFSET UNITYSDK_OFFSET(0x15B5E3F0)
#define GPLMEFBGGGM_IFJOLEECKBJ_OFFSET UNITYSDK_OFFSET(0x15B5F340)
#define GPLMEFBGGGM_JGHHONHKAIH_OFFSET UNITYSDK_OFFSET(0x15B5E5B0)
#define GPLMEFBGGGM_JNENPFFLFHF_OFFSET UNITYSDK_OFFSET(0x15B5F220)
#define GPLMEFBGGGM_KOLPBHFBJKJ_OFFSET UNITYSDK_OFFSET(0x15B5FED0)
#define GPLMEFBGGGM_LDHOLJECCFP_OFFSET UNITYSDK_OFFSET(0x15B5F510)
#define GPLMEFBGGGM_ODNOFEEJHLF_OFFSET UNITYSDK_OFFSET(0x15B5F9A0)
#define GPLMEFBGGGM_PKLAGKDNDPD_OFFSET UNITYSDK_OFFSET(0x15B5F830)

inline static constexpr unsigned int GPLMEFBGGGM_TypeDefinitionIndex = 60760;

	class GPLMEFBGGGM : public ::System::Object
	{
	public:
		::DJOHHNPBKBG* DDCOIGGNMHE; // 0x10
		::RPG::Client::AdventurePhase* BLAFNEBDBCH; // 0x18
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x20
		::RPG::Client::PerformanceManager* CFHLPMAFJLH; // 0x28
		::System::Void _ctor(::RPG::Client::AdventurePhase* a1, ::RPG::Client::PerformanceManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*, ::RPG::Client::PerformanceManager*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EHCFKFNKBJB(::BBDBABJLIIB* a1, ::System::Action* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::BBDBABJLIIB*, ::System::Action*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_EHCFKFNKBJB_OFFSET))(this, a1, a2);
		}

		::System::Void GPJFFEHMDMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_GPJFFEHMDMM_OFFSET))(this, a1);
		}

		::System::Void JGHHONHKAIH(::RPG::GameCore::StoryCharacterRow* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StoryCharacterRow*, ::System::Action*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_JGHHONHKAIH_OFFSET))(this, a1, a2);
		}

		::System::Void PKLAGKDNDPD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StoryCharacterRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_PKLAGKDNDPD_OFFSET))(this, a1, a2);
		}

		::System::Void AJHILNHFIJH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_AJHILNHFIJH_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMGDMLINAPP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_GMGDMLINAPP_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMGDMLINAPP_1(::DJOHHNPBKBG* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJOHHNPBKBG*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_GMGDMLINAPP_1_OFFSET))(this, a1, a2);
		}

		::System::Void ODNOFEEJHLF(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::StoryCharacterRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::StoryCharacterRow*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_ODNOFEEJHLF_OFFSET))(this, a1, a2);
		}

		::System::Void JNENPFFLFHF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_JNENPFFLFHF_OFFSET))(this, a1, a2);
		}

		::System::Void IFJOLEECKBJ(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_IFJOLEECKBJ_OFFSET))(this, a1, a2);
		}

		::System::Void KOLPBHFBJKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_KOLPBHFBJKJ_OFFSET))(this, a1);
		}

		::System::Void LDHOLJECCFP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GPLMEFBGGGM_LDHOLJECCFP_OFFSET))(this, a1, a2);
		}

	};
