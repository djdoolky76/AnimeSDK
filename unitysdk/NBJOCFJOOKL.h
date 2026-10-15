#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingDisplayCarType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NBJOCFJOOKL;

#define NBJOCFJOOKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C1D30)
#define NBJOCFJOOKL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1C1D40)
#define NBJOCFJOOKL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1C1D00)

inline static constexpr unsigned int NBJOCFJOOKL_TypeDefinitionIndex = 21743;

	class NBJOCFJOOKL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::B51RacingDisplayCarType JLMOJLLKPDI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBJOCFJOOKL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NBJOCFJOOKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBJOCFJOOKL*))((::PBYTE)hIl2Cpp + NBJOCFJOOKL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NBJOCFJOOKL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NBJOCFJOOKL*))((::PBYTE)hIl2Cpp + NBJOCFJOOKL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
