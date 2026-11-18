#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALNKCOCJJAG;
namespace MoleMole { class SuibianTempleDailyPaperContext; }

#define FDKFDHOBELG_NHEMGELGIEG_HAGMNGJFHCC_OFFSET UNITYSDK_OFFSET(0x13204660)
#define FDKFDHOBELG_NHEMGELGIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x13204650)

inline static constexpr unsigned int FDKFDHOBELG_NHEMGELGIEG_TypeDefinitionIndex = 90901;

class FDKFDHOBELG_NHEMGELGIEG : public ::System::Object
{
public:
	::MoleMole::SuibianTempleDailyPaperContext* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDKFDHOBELG_NHEMGELGIEG__CTOR_OFFSET))(this);
	}

	::System::Void HAGMNGJFHCC(::ALNKCOCJJAG* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::ALNKCOCJJAG*))((::PBYTE)hIl2Cpp + FDKFDHOBELG_NHEMGELGIEG_HAGMNGJFHCC_OFFSET))(this, PIIPCLCCOIG);
	}
};
