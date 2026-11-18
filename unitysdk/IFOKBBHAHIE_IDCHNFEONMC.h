#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define IFOKBBHAHIE_IDCHNFEONMC_BPAIGIMEMIB_OFFSET UNITYSDK_OFFSET(0xEBCC2D0)
#define IFOKBBHAHIE_IDCHNFEONMC_OGKFDDLLCCO_OFFSET UNITYSDK_OFFSET(0xEBCC280)
#define IFOKBBHAHIE_IDCHNFEONMC__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCC270)

inline static constexpr unsigned int IFOKBBHAHIE_IDCHNFEONMC_TypeDefinitionIndex = 67431;

class IFOKBBHAHIE_IDCHNFEONMC : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_IDCHNFEONMC__CTOR_OFFSET))(this);
	}

	::System::Void OGKFDDLLCCO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_IDCHNFEONMC_OGKFDDLLCCO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void BPAIGIMEMIB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IFOKBBHAHIE_IDCHNFEONMC_BPAIGIMEMIB_OFFSET))(this, PIIPCLCCOIG);
	}
};
