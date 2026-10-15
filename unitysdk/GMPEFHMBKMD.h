#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOLJJHMLHBH;
namespace RPG::Client { class RogueTournBuildRefShareCodeDataItem; }

#define GMPEFHMBKMD_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADCA30)
#define GMPEFHMBKMD_FNCNMCEOALF_OFFSET UNITYSDK_OFFSET(0x15ADC850)

inline static constexpr unsigned int GMPEFHMBKMD_TypeDefinitionIndex = 67559;

	class GMPEFHMBKMD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPEFHMBKMD_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournBuildRefShareCodeDataItem* FNCNMCEOALF(::OOLJJHMLHBH* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefShareCodeDataItem*(*)(::PVOID, ::OOLJJHMLHBH*))((::PBYTE)hIl2Cpp + GMPEFHMBKMD_FNCNMCEOALF_OFFSET))(this, a1);
		}

	};
