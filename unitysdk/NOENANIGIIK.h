#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NOENANIGIIK;

#define NOENANIGIIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2407E0)
#define NOENANIGIIK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2407F0)
#define NOENANIGIIK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2407B0)

	class NOENANIGIIK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOENANIGIIK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NOENANIGIIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOENANIGIIK*))((::PBYTE)hIl2Cpp + NOENANIGIIK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NOENANIGIIK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NOENANIGIIK*))((::PBYTE)hIl2Cpp + NOENANIGIIK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
