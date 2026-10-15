#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OnlineRoomDIYType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JAFAJMDFAKK;

#define JAFAJMDFAKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF33E10)
#define JAFAJMDFAKK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF33E20)
#define JAFAJMDFAKK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF33DE0)

inline static constexpr unsigned int JAFAJMDFAKK_TypeDefinitionIndex = 10211;

	class JAFAJMDFAKK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::OnlineRoomDIYType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFAJMDFAKK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JAFAJMDFAKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JAFAJMDFAKK*))((::PBYTE)hIl2Cpp + JAFAJMDFAKK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JAFAJMDFAKK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JAFAJMDFAKK*))((::PBYTE)hIl2Cpp + JAFAJMDFAKK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
