#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light; }

#define B521DE6FE3C0183E_E7AFCACCB374187E_OFFSET UNITYSDK_OFFSET(0x2866010)
#define B521DE6FE3C0183E_F3A49FB0F863CD65_OFFSET UNITYSDK_OFFSET(0x2865EB0)
#define B521DE6FE3C0183E_F9035E81222DD834_OFFSET UNITYSDK_OFFSET(0x2865F60)

inline static constexpr unsigned int B521DE6FE3C0183E_TypeDefinitionIndex = 15998;

class B521DE6FE3C0183E : public ::System::Object
{
public:
	static ::System::Single F9035E81222DD834(::UnityEngine::Light* E3E2F56F92C29464)
	{
		return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + B521DE6FE3C0183E_F9035E81222DD834_OFFSET))(E3E2F56F92C29464);
	}

	static ::System::Single E7AFCACCB374187E(::UnityEngine::Light* E3E2F56F92C29464)
	{
		return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + B521DE6FE3C0183E_E7AFCACCB374187E_OFFSET))(E3E2F56F92C29464);
	}

	static ::System::Single F3A49FB0F863CD65(::UnityEngine::Light* E3E2F56F92C29464)
	{
		return ((::System::Single(*)(::UnityEngine::Light*))((::PBYTE)hIl2Cpp + B521DE6FE3C0183E_F3A49FB0F863CD65_OFFSET))(E3E2F56F92C29464);
	}
};
