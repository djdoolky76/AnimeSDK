#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MOMODPMFIKE;

#define OJIEDKBPIGG_AHNDFMPEMPM_OFFSET UNITYSDK_OFFSET(0xBEB2C90)
#define OJIEDKBPIGG_HKDOBJEOIJD_OFFSET UNITYSDK_OFFSET(0xBEB2EA0)
#define OJIEDKBPIGG_JEAFEADEIBL_OFFSET UNITYSDK_OFFSET(0xBEB2D90)

inline static constexpr unsigned int OJIEDKBPIGG_TypeDefinitionIndex = 54026;

	class OJIEDKBPIGG : public ::System::Object
	{
	public:
		static ::MOMODPMFIKE* AHNDFMPEMPM(::MOMODPMFIKE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::System::Boolean a4)
		{
			return ((::MOMODPMFIKE*(*)(::MOMODPMFIKE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + OJIEDKBPIGG_AHNDFMPEMPM_OFFSET))(a1, a2, a3, a4);
		}

		static ::MOMODPMFIKE* JEAFEADEIBL(::MOMODPMFIKE* a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::MOMODPMFIKE*(*)(::MOMODPMFIKE*, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + OJIEDKBPIGG_JEAFEADEIBL_OFFSET))(a1, a2, a3);
		}

		static ::MOMODPMFIKE* HKDOBJEOIJD(::MOMODPMFIKE* a1, ::RPG::GameCore::FixPoint a2, ::System::Boolean a3)
		{
			return ((::MOMODPMFIKE*(*)(::MOMODPMFIKE*, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + OJIEDKBPIGG_HKDOBJEOIJD_OFFSET))(a1, a2, a3);
		}

	};
