#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MHLHEHALOFL;

#define MHLHEHALOFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D17F5D0)
#define MHLHEHALOFL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D17F5E0)
#define MHLHEHALOFL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D17F510)

inline static constexpr unsigned int MHLHEHALOFL_TypeDefinitionIndex = 20810;

	class MHLHEHALOFL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLHEHALOFL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MHLHEHALOFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHLHEHALOFL*))((::PBYTE)hIl2Cpp + MHLHEHALOFL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MHLHEHALOFL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MHLHEHALOFL*))((::PBYTE)hIl2Cpp + MHLHEHALOFL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
