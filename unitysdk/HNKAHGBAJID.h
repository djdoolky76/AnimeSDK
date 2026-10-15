#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HNKAHGBAJID;

#define HNKAHGBAJID_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE9EF20)
#define HNKAHGBAJID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE9EF30)
#define HNKAHGBAJID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE9EEF0)

inline static constexpr unsigned int HNKAHGBAJID_TypeDefinitionIndex = 21146;

	class HNKAHGBAJID : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DOBKKDIECDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKAHGBAJID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HNKAHGBAJID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNKAHGBAJID*))((::PBYTE)hIl2Cpp + HNKAHGBAJID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HNKAHGBAJID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HNKAHGBAJID*))((::PBYTE)hIl2Cpp + HNKAHGBAJID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
