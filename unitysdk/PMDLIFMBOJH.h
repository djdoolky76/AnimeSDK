#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define PMDLIFMBOJH_CBHFJHICPLC_OFFSET UNITYSDK_OFFSET(0x1CEB27A0)
#define PMDLIFMBOJH_NIEKHMCJGIP_1_OFFSET UNITYSDK_OFFSET(0x1CEB4530)

inline static constexpr unsigned int PMDLIFMBOJH_TypeDefinitionIndex = 34715;

class PMDLIFMBOJH : public ::System::Object
{
public:
	static ::System::Void CBHFJHICPLC(::System::Action* AOKHOHCJNFJ)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + PMDLIFMBOJH_CBHFJHICPLC_OFFSET))(AOKHOHCJNFJ);
	}

	static ::System::Void NIEKHMCJGIP_1(::System::Action* AOKHOHCJNFJ, ::System::String* FHCKJMMOFJG)
	{
		return ((::System::Void(*)(::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + PMDLIFMBOJH_NIEKHMCJGIP_1_OFFSET))(AOKHOHCJNFJ, FHCKJMMOFJG);
	}
};
