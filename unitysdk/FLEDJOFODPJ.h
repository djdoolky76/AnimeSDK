#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class FLEDJOFODPJ;

#define FLEDJOFODPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFDC860)
#define FLEDJOFODPJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DFDC870)
#define FLEDJOFODPJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DFDC7A0)

inline static constexpr unsigned int FLEDJOFODPJ_TypeDefinitionIndex = 21868;

	class FLEDJOFODPJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEDJOFODPJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FLEDJOFODPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FLEDJOFODPJ*))((::PBYTE)hIl2Cpp + FLEDJOFODPJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FLEDJOFODPJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FLEDJOFODPJ*))((::PBYTE)hIl2Cpp + FLEDJOFODPJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
