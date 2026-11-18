#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class DMENGHNGJLA;
class JDNBKAPKIKA;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }

#define DLLJCBLEEJN_AOMAMMOFHDG_OFFSET UNITYSDK_OFFSET(0x16BA8680)
#define DLLJCBLEEJN_HKGELGJCAAB_OFFSET UNITYSDK_OFFSET(0x16BA8390)
#define DLLJCBLEEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA8380)

inline static constexpr unsigned int DLLJCBLEEJN_TypeDefinitionIndex = 84164;

class DLLJCBLEEJN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLLJCBLEEJN__CTOR_OFFSET))(this);
	}

	static ::System::Void HKGELGJCAAB(::JDNBKAPKIKA* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::JDNBKAPKIKA*))((::PBYTE)hIl2Cpp + DLLJCBLEEJN_HKGELGJCAAB_OFFSET))(AOKHOHCJNFJ);
	}

	static ::DMENGHNGJLA* AOMAMMOFHDG(::CJIEIHEDMME* LADPIPOMBJM, ::MoleMole::UIBaseController* FPPPIIFJOBO, ::UnityEngine::Transform* JGGGKDDOMCP)
	{
		return ((::DMENGHNGJLA*(*)(::CJIEIHEDMME*, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DLLJCBLEEJN_AOMAMMOFHDG_OFFSET))(LADPIPOMBJM, FPPPIIFJOBO, JGGGKDDOMCP);
	}
};
