#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PJECNBJKBEB;

#define PJECNBJKBEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7328B0)
#define PJECNBJKBEB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E7328C0)
#define PJECNBJKBEB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E732880)

inline static constexpr unsigned int PJECNBJKBEB_TypeDefinitionIndex = 23666;

	class PJECNBJKBEB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJECNBJKBEB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PJECNBJKBEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJECNBJKBEB*))((::PBYTE)hIl2Cpp + PJECNBJKBEB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PJECNBJKBEB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PJECNBJKBEB*))((::PBYTE)hIl2Cpp + PJECNBJKBEB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
