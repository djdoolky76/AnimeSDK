#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DPMCAEFILMB;
class FCOEMCEDLNL;

#define DPMCAEFILMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF28B50)
#define DPMCAEFILMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF28B60)
#define DPMCAEFILMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF28A90)

inline static constexpr unsigned int DPMCAEFILMB_TypeDefinitionIndex = 21839;

	class DPMCAEFILMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPMCAEFILMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DPMCAEFILMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPMCAEFILMB*))((::PBYTE)hIl2Cpp + DPMCAEFILMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DPMCAEFILMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DPMCAEFILMB*))((::PBYTE)hIl2Cpp + DPMCAEFILMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
