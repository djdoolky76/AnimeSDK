#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LKJFPIFKPNE;

#define LKJFPIFKPNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D10C4F0)
#define LKJFPIFKPNE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D10C500)
#define LKJFPIFKPNE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D10C430)

	class LKJFPIFKPNE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFPIFKPNE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LKJFPIFKPNE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKJFPIFKPNE*))((::PBYTE)hIl2Cpp + LKJFPIFKPNE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LKJFPIFKPNE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LKJFPIFKPNE*))((::PBYTE)hIl2Cpp + LKJFPIFKPNE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
