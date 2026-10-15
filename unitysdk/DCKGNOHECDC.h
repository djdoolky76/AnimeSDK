#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHCNDENHLGO;
class GLLFJFJBIBC;
class ICMJACOKIPI;
class PMMOFOBCINL;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSessionStageResultBase; }
namespace System { class Action; }

#define DCKGNOHECDC_ADD_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0xE24EBE0)
#define DCKGNOHECDC_ADD_ONRESULTCHANGED_OFFSET UNITYSDK_OFFSET(0xE24EA70)
#define DCKGNOHECDC_ALJIOCDBMKO_1_OFFSET UNITYSDK_OFFSET(0xE24EDE0)
#define DCKGNOHECDC_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xE24ECB0)
#define DCKGNOHECDC_BEDJDJIMNPA_OFFSET UNITYSDK_OFFSET(0xE24EA00)
#define DCKGNOHECDC_CTOR_OFFSET UNITYSDK_OFFSET(0xE24ECA0)
#define DCKGNOHECDC_DOFCDFPLOKH_OFFSET UNITYSDK_OFFSET(0xE24EEA0)
#define DCKGNOHECDC_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0xE24EB30)
#define DCKGNOHECDC_GET_RESULT_OFFSET UNITYSDK_OFFSET(0xE24E9C0)
#define DCKGNOHECDC_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0xE24EB70)
#define DCKGNOHECDC_REMOVE_ONLINEUPCHANGED_OFFSET UNITYSDK_OFFSET(0xE24EC40)
#define DCKGNOHECDC_REMOVE_ONRESULTCHANGED_OFFSET UNITYSDK_OFFSET(0xE24EAD0)

inline static constexpr unsigned int DCKGNOHECDC_TypeDefinitionIndex = 81483;

	class DCKGNOHECDC : public ::System::Object
	{
	public:
		::GLLFJFJBIBC* LIGODHDKKJP; // 0x10
		::System::Action* OnLineupChanged; // 0x18
		::System::Action* OnResultChanged; // 0x20
		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* GNOEGILFEMD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKGNOHECDC_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* get_Result()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKGNOHECDC_GET_RESULT_OFFSET))(this);
		}

		::System::Void BEDJDJIMNPA(::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSessionStageResultBase*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_BEDJDJIMNPA_OFFSET))(this, a1);
		}

		::System::Void add_OnResultChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_ADD_ONRESULTCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnResultChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_REMOVE_ONRESULTCHANGED_OFFSET))(this, a1);
		}

		::GLLFJFJBIBC* get_Lineup()
		{
			return ((::GLLFJFJBIBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKGNOHECDC_GET_LINEUP_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::GLLFJFJBIBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLLFJFJBIBC*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Void add_OnLineupChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_ADD_ONLINEUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLineupChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_REMOVE_ONLINEUPCHANGED_OFFSET))(this, a1);
		}

		::System::Void ALJIOCDBMKO(::DHCNDENHLGO* a1, ::PMMOFOBCINL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::PMMOFOBCINL*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_ALJIOCDBMKO_OFFSET))(this, a1, a2);
		}

		::System::Void ALJIOCDBMKO_1(::DHCNDENHLGO* a1, ::ICMJACOKIPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DHCNDENHLGO*, ::ICMJACOKIPI*))((::PBYTE)hIl2Cpp + DCKGNOHECDC_ALJIOCDBMKO_1_OFFSET))(this, a1, a2);
		}

		::System::Void DOFCDFPLOKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCKGNOHECDC_DOFCDFPLOKH_OFFSET))(this);
		}

	};
