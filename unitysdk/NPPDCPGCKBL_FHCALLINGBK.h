#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CAIONLJDKGH;
class JFBNBOHNJBF;
class MLEGHKPPBBH;
namespace MoleMole::Battle { class Entity; }

#define NPPDCPGCKBL_FHCALLINGBK_GJALHKCGOLM_OFFSET UNITYSDK_OFFSET(0xE0DCA10)
#define NPPDCPGCKBL_FHCALLINGBK_NLGLCGIDDBI_OFFSET UNITYSDK_OFFSET(0xE0DD210)
#define NPPDCPGCKBL_FHCALLINGBK__CTOR_OFFSET UNITYSDK_OFFSET(0xE0DCA00)

inline static constexpr unsigned int NPPDCPGCKBL_FHCALLINGBK_TypeDefinitionIndex = 86848;

class NPPDCPGCKBL_FHCALLINGBK : public ::System::Object
{
public:
	::MLEGHKPPBBH* DAECHEJMNFP; // 0x10
	::JFBNBOHNJBF* IHAMOGFIMAD; // 0x18
	::CAIONLJDKGH* DDFCHEJMHHB; // 0x20
	::MoleMole::Battle::Entity* BDHOILPIGKB; // 0x28
	::UnityEngine::Vector3 AMDPLEJDOPK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPDCPGCKBL_FHCALLINGBK__CTOR_OFFSET))(this);
	}

	::System::Void GJALHKCGOLM(::MLEGHKPPBBH* HDFLDBOOHCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLEGHKPPBBH*))((::PBYTE)hIl2Cpp + NPPDCPGCKBL_FHCALLINGBK_GJALHKCGOLM_OFFSET))(this, HDFLDBOOHCK);
	}

	::System::Void NLGLCGIDDBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPDCPGCKBL_FHCALLINGBK_NLGLCGIDDBI_OFFSET))(this);
	}
};
