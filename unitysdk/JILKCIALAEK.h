#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageVoiceType.h"

namespace System { class Action; }
namespace System { class String; }

#define JILKCIALAEK_AGHHDFOAKDB_OFFSET UNITYSDK_OFFSET(0x13CC1BC0)
#define JILKCIALAEK_ALKPOFMGMJO_OFFSET UNITYSDK_OFFSET(0x13CC2860)
#define JILKCIALAEK_BCOPDEKPBKN_OFFSET UNITYSDK_OFFSET(0x13CC20E0)
#define JILKCIALAEK_BLANMDGJJIM_OFFSET UNITYSDK_OFFSET(0x13CC2680)
#define JILKCIALAEK_BMHFHLAELII_OFFSET UNITYSDK_OFFSET(0x13CC24A0)
#define JILKCIALAEK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13CC1B60)
#define JILKCIALAEK_DMDADLEMFGP_OFFSET UNITYSDK_OFFSET(0x13CC2820)
#define JILKCIALAEK_FKAJELEPDNF_OFFSET UNITYSDK_OFFSET(0x13CC1F70)
#define JILKCIALAEK_GLJGAKDMDAB_OFFSET UNITYSDK_OFFSET(0x13CC1D70)
#define JILKCIALAEK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x13CC1B20)
#define JILKCIALAEK_PJHDMDOPIAM_OFFSET UNITYSDK_OFFSET(0x13CC1C40)
#define JILKCIALAEK__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC1BA0)

inline static constexpr unsigned int JILKCIALAEK_TypeDefinitionIndex = 59067;

class JILKCIALAEK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKCIALAEK__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKCIALAEK_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JILKCIALAEK_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean AGHHDFOAKDB(::System::String* OPIOMECPGFA)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + JILKCIALAEK_AGHHDFOAKDB_OFFSET))(OPIOMECPGFA);
	}

	static ::System::String* PJHDMDOPIAM(::MoleMole::LanguageVoiceType MAOPMELKMCP)
	{
		return ((::System::String*(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + JILKCIALAEK_PJHDMDOPIAM_OFFSET))(MAOPMELKMCP);
	}

	static ::System::Boolean GLJGAKDMDAB(::MoleMole::LanguageVoiceType MAOPMELKMCP)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + JILKCIALAEK_GLJGAKDMDAB_OFFSET))(MAOPMELKMCP);
	}

	static ::System::Boolean FKAJELEPDNF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JILKCIALAEK_FKAJELEPDNF_OFFSET))();
	}

	static ::System::Void BCOPDEKPBKN(::MoleMole::LanguageVoiceType LGHICHIJKDC, ::System::String* NFCIDOCAKMN, ::System::Action* GODDDLDNLMN, ::System::Action* JFAFHDDJKOD)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JILKCIALAEK_BCOPDEKPBKN_OFFSET))(LGHICHIJKDC, NFCIDOCAKMN, GODDDLDNLMN, JFAFHDDJKOD);
	}

	static ::System::Void BMHFHLAELII(::MoleMole::LanguageVoiceType LGHICHIJKDC, ::System::String* EPLFAPHKGFJ, ::System::Action* POCANNAFFOA)
	{
		return ((::System::Void(*)(::MoleMole::LanguageVoiceType, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + JILKCIALAEK_BMHFHLAELII_OFFSET))(LGHICHIJKDC, EPLFAPHKGFJ, POCANNAFFOA);
	}

	static ::System::Boolean BLANMDGJJIM(::MoleMole::LanguageVoiceType OBNIAHNMHPF, ::System::Int64& GNDOJFJHIIC)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType, ::System::Int64&))((::PBYTE)hIl2Cpp + JILKCIALAEK_BLANMDGJJIM_OFFSET))(OBNIAHNMHPF, GNDOJFJHIIC);
	}

	static ::System::Boolean DMDADLEMFGP(::MoleMole::LanguageVoiceType MAOPMELKMCP)
	{
		return ((::System::Boolean(*)(::MoleMole::LanguageVoiceType))((::PBYTE)hIl2Cpp + JILKCIALAEK_DMDADLEMFGP_OFFSET))(MAOPMELKMCP);
	}

	static ::System::Void ALKPOFMGMJO(::System::String* IGJEFLANLFK, ::System::Action* GODDDLDNLMN)
	{
		return ((::System::Void(*)(::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + JILKCIALAEK_ALKPOFMGMJO_OFFSET))(IGJEFLANLFK, GODDDLDNLMN);
	}
};
