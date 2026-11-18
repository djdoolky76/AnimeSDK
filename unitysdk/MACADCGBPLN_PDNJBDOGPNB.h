#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class HNLPBPGMJMF;
class MACADCGBPLN;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define MACADCGBPLN_PDNJBDOGPNB_ABABKIICKCO_OFFSET UNITYSDK_OFFSET(0x11F2AED0)
#define MACADCGBPLN_PDNJBDOGPNB_FOFHPLOENAC_OFFSET UNITYSDK_OFFSET(0x11F2AE30)
#define MACADCGBPLN_PDNJBDOGPNB_NPDNJOGHGAF_OFFSET UNITYSDK_OFFSET(0x11F2AF00)
#define MACADCGBPLN_PDNJBDOGPNB__CTOR_OFFSET UNITYSDK_OFFSET(0x11F2AE20)

inline static constexpr unsigned int MACADCGBPLN_PDNJBDOGPNB_TypeDefinitionIndex = 69120;

class MACADCGBPLN_PDNJBDOGPNB : public ::System::Object
{
public:
	::System::Action* FFMGICPLKFB; // 0x10
	::MACADCGBPLN* KLHPEBKNIFB; // 0x18
	::System::Action* DMPEOJCCCLO; // 0x20
	::HNLPBPGMJMF* JNLBPMKIFNK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACADCGBPLN_PDNJBDOGPNB__CTOR_OFFSET))(this);
	}

	::System::Void FOFHPLOENAC(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MACADCGBPLN_PDNJBDOGPNB_FOFHPLOENAC_OFFSET))(this, OIIHCACKLHD, NJOAJLDJCCJ);
	}

	::System::Void ABABKIICKCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACADCGBPLN_PDNJBDOGPNB_ABABKIICKCO_OFFSET))(this);
	}

	::System::Void NPDNJOGHGAF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MACADCGBPLN_PDNJBDOGPNB_NPDNJOGHGAF_OFFSET))(this);
	}
};
