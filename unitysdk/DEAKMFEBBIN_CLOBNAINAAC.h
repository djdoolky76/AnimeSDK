#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class MLJGMELKNCC_ONKAPFOMFDK;
namespace System { class Action; }

#define DEAKMFEBBIN_CLOBNAINAAC_MDGJJNDODLC_OFFSET UNITYSDK_OFFSET(0x7F6DED0)
#define DEAKMFEBBIN_CLOBNAINAAC_NOAPOKJCFNP_OFFSET UNITYSDK_OFFSET(0x7F6DEE0)
#define DEAKMFEBBIN_CLOBNAINAAC_PIPBFEEFKEK_OFFSET UNITYSDK_OFFSET(0x7F6DC80)
#define DEAKMFEBBIN_CLOBNAINAAC__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6DC70)

inline static constexpr unsigned int DEAKMFEBBIN_CLOBNAINAAC_TypeDefinitionIndex = 67718;

class DEAKMFEBBIN_CLOBNAINAAC : public ::System::Object
{
public:
	::MLJGMELKNCC_ONKAPFOMFDK* AHJDBCPGMBM; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_CLOBNAINAAC__CTOR_OFFSET))(this);
	}

	::System::Void PIPBFEEFKEK(::CFMGIKJLMBJ* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::CFMGIKJLMBJ*))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_CLOBNAINAAC_PIPBFEEFKEK_OFFSET))(this, JBLGEGMELPE);
	}

	::System::Void MDGJJNDODLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_CLOBNAINAAC_MDGJJNDODLC_OFFSET))(this);
	}

	::System::Void NOAPOKJCFNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAKMFEBBIN_CLOBNAINAAC_NOAPOKJCFNP_OFFSET))(this);
	}
};
