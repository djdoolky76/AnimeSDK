#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PetMarble { class PetMarblePVEMatchContext; }

#define DMJLELAHHDP___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD410)
#define DMJLELAHHDP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xFEBD490)

inline static constexpr unsigned int DMJLELAHHDP___c__DisplayClass1_0_TypeDefinitionIndex = 52303;

	class DMJLELAHHDP___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::PetMarble::PetMarblePVEMatchContext* context; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJLELAHHDP___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMJLELAHHDP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this);
		}

	};
