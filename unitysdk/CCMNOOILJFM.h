#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CCMNOOILJFM;
class FCOEMCEDLNL;

#define CCMNOOILJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E09D0)
#define CCMNOOILJFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E09E0)
#define CCMNOOILJFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E09A0)

inline static constexpr unsigned int CCMNOOILJFM_TypeDefinitionIndex = 10219;

	class CCMNOOILJFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FEEPJOMGLIP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCMNOOILJFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CCMNOOILJFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCMNOOILJFM*))((::PBYTE)hIl2Cpp + CCMNOOILJFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CCMNOOILJFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCMNOOILJFM*))((::PBYTE)hIl2Cpp + CCMNOOILJFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
