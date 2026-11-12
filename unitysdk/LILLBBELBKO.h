#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LILLBBELBKO;

#define LILLBBELBKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6570)
#define LILLBBELBKO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2F6580)
#define LILLBBELBKO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2F6540)

inline static constexpr unsigned int LILLBBELBKO_TypeDefinitionIndex = 21807;

	class LILLBBELBKO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ACCJKGEKHKP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LILLBBELBKO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LILLBBELBKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LILLBBELBKO*))((::PBYTE)hIl2Cpp + LILLBBELBKO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LILLBBELBKO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LILLBBELBKO*))((::PBYTE)hIl2Cpp + LILLBBELBKO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
