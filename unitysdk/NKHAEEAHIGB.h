#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NKHAEEAHIGB;

#define NKHAEEAHIGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2019D0)
#define NKHAEEAHIGB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2019E0)
#define NKHAEEAHIGB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2019A0)

inline static constexpr unsigned int NKHAEEAHIGB_TypeDefinitionIndex = 10213;

	class NKHAEEAHIGB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean CEEDOIPEPFN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKHAEEAHIGB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKHAEEAHIGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKHAEEAHIGB*))((::PBYTE)hIl2Cpp + NKHAEEAHIGB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NKHAEEAHIGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKHAEEAHIGB*))((::PBYTE)hIl2Cpp + NKHAEEAHIGB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
