#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJHOJLILAOK;

#define IJHOJLILAOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF18A30)
#define IJHOJLILAOK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF18A40)
#define IJHOJLILAOK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF18970)

	class IJHOJLILAOK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJHOJLILAOK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJHOJLILAOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJHOJLILAOK*))((::PBYTE)hIl2Cpp + IJHOJLILAOK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJHOJLILAOK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJHOJLILAOK*))((::PBYTE)hIl2Cpp + IJHOJLILAOK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
