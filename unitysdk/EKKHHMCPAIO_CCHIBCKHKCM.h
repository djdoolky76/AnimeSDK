#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define EKKHHMCPAIO_CCHIBCKHKCM_FOAGGBGIIKJ_OFFSET UNITYSDK_OFFSET(0x14AA5E70)
#define EKKHHMCPAIO_CCHIBCKHKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AA4940)

inline static constexpr unsigned int EKKHHMCPAIO_CCHIBCKHKCM_TypeDefinitionIndex = 45039;

class EKKHHMCPAIO_CCHIBCKHKCM : public ::System::Object
{
public:
	::System::Action_1<::BMBMBLDFBID>* JEHNKDMODAL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_CCHIBCKHKCM__CTOR_OFFSET))(this);
	}

	::System::Void FOAGGBGIIKJ(::BMBMBLDFBID DMIAICJPPDL)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + EKKHHMCPAIO_CCHIBCKHKCM_FOAGGBGIIKJ_OFFSET))(this, DMIAICJPPDL);
	}
};
