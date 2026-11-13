#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class KHPOKIKCOFO;
class OAFCCICMILM;
namespace RPG::Client::LittleGame { class ActionConfig; }

#define OPIBHCMBAOB_CHPAKMGNBEK_OFFSET UNITYSDK_OFFSET(0x17676990)
#define OPIBHCMBAOB_CTOR_OFFSET UNITYSDK_OFFSET(0x176746A0)
#define OPIBHCMBAOB_DCIFCFLJKJL_OFFSET UNITYSDK_OFFSET(0x176764B0)
#define OPIBHCMBAOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x17674930)
#define OPIBHCMBAOB_FLKFNADLKEC_OFFSET UNITYSDK_OFFSET(0x17677700)
#define OPIBHCMBAOB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x176746B0)
#define OPIBHCMBAOB_JFEDHINONJK_OFFSET UNITYSDK_OFFSET(0x17677790)
#define OPIBHCMBAOB_KOFIIPKIIMJ_OFFSET UNITYSDK_OFFSET(0x17676030)
#define OPIBHCMBAOB_PEIHJAEIGHK_OFFSET UNITYSDK_OFFSET(0x17676A20)
#define OPIBHCMBAOB_PMDMDMHJMCM_OFFSET UNITYSDK_OFFSET(0x17675420)

inline static constexpr unsigned int OPIBHCMBAOB_TypeDefinitionIndex = 43367;

	class OPIBHCMBAOB : public ::System::Object
	{
	public:
		::KHPOKIKCOFO* OGJJMLPDGEL; // 0x10
		::KHPOKIKCOFO* AIBIAEBCLDE; // 0x18
		::FDPALAEIHPB* MBKIEFPKECG; // 0x20
		::OAFCCICMILM* CKJLAAOFGCC; // 0x28
		::System::Single BDIOLJKMOFH; // 0x30
		::System::Single HIJKEBBLLOM; // 0x34
		::System::Void _ctor(::FDPALAEIHPB* a1, ::OAFCCICMILM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::OAFCCICMILM*))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_EXECUTE_OFFSET))(this);
		}

		::System::Void DCIFCFLJKJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_DCIFCFLJKJL_OFFSET))(this);
		}

		::System::Void KOFIIPKIIMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_KOFIIPKIIMJ_OFFSET))(this);
		}

		::System::Void JFEDHINONJK(::KHPOKIKCOFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_JFEDHINONJK_OFFSET))(this, a1);
		}

		::System::Void PMDMDMHJMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_PMDMDMHJMCM_OFFSET))(this);
		}

		::System::Boolean PEIHJAEIGHK(::RPG::Client::LittleGame::ActionConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ActionConfig*))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_PEIHJAEIGHK_OFFSET))(this, a1);
		}

		::KHPOKIKCOFO* CHPAKMGNBEK()
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_CHPAKMGNBEK_OFFSET))(this);
		}

		::KHPOKIKCOFO* FLKFNADLKEC()
		{
			return ((::KHPOKIKCOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPIBHCMBAOB_FLKFNADLKEC_OFFSET))(this);
		}

	};
