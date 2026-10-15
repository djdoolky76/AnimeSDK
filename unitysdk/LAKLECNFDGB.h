#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LAKLECNFDGB;

#define LAKLECNFDGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D3560)
#define LAKLECNFDGB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D3570)
#define LAKLECNFDGB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D34A0)

inline static constexpr unsigned int LAKLECNFDGB_TypeDefinitionIndex = 10216;

	class LAKLECNFDGB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAKLECNFDGB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LAKLECNFDGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAKLECNFDGB*))((::PBYTE)hIl2Cpp + LAKLECNFDGB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LAKLECNFDGB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LAKLECNFDGB*))((::PBYTE)hIl2Cpp + LAKLECNFDGB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
