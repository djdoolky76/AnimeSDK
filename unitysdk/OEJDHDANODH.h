#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamTowersBossSkillGroupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OEJDHDANODH;

#define OEJDHDANODH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E467030)
#define OEJDHDANODH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E466ED0)

inline static constexpr unsigned int OEJDHDANODH_TypeDefinitionIndex = 12565;

	class OEJDHDANODH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* KPHIIIDGLEB; // 0x10
		::RPG::GameCore::TeamTowersBossSkillGroupType GMPGDEINODK; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJDHDANODH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OEJDHDANODH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OEJDHDANODH*))((::PBYTE)hIl2Cpp + OEJDHDANODH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
