#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesItemRemoveType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GACAILJLLEH;

#define GACAILJLLEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEFCC0)
#define GACAILJLLEH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDEFCD0)
#define GACAILJLLEH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDEFC90)

inline static constexpr unsigned int GACAILJLLEH_TypeDefinitionIndex = 21503;

	class GACAILJLLEH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesItemRemoveType LPHIOBMKFDL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GACAILJLLEH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GACAILJLLEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GACAILJLLEH*))((::PBYTE)hIl2Cpp + GACAILJLLEH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GACAILJLLEH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GACAILJLLEH*))((::PBYTE)hIl2Cpp + GACAILJLLEH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
