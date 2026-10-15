#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JHOLLBGPLAE;
namespace RPG::GameCore { class ChenLingFesPosition; }

#define JHOLLBGPLAE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0332D0)
#define JHOLLBGPLAE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0332E0)
#define JHOLLBGPLAE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0332A0)

	class JHOLLBGPLAE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ChenLingFesPosition* PGJJCGGBCKK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHOLLBGPLAE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JHOLLBGPLAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHOLLBGPLAE*))((::PBYTE)hIl2Cpp + JHOLLBGPLAE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JHOLLBGPLAE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JHOLLBGPLAE*))((::PBYTE)hIl2Cpp + JHOLLBGPLAE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
