#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJDCBNMLDMD.h"
#include "unitysdk/RootMotion/Axis.h"
#include "unitysdk/System/Object.h"

#define HKDBIILGECG_ABFKJPJHABJ_OFFSET UNITYSDK_OFFSET(0x149535B0)

inline static constexpr unsigned int HKDBIILGECG_TypeDefinitionIndex = 87621;

class HKDBIILGECG : public ::System::Object
{
public:
	static ::RootMotion::Axis ABFKJPJHABJ(::LJDCBNMLDMD BHFAGMPDIGJ)
	{
		return ((::RootMotion::Axis(*)(::LJDCBNMLDMD))((::PBYTE)hIl2Cpp + HKDBIILGECG_ABFKJPJHABJ_OFFSET))(BHFAGMPDIGJ);
	}
};
