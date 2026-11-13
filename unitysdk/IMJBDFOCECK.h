#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IMJBDFOCECK;

#define IMJBDFOCECK_CTOR_OFFSET UNITYSDK_OFFSET(0xC99A180)
#define IMJBDFOCECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC99A190)
#define IMJBDFOCECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC99A0C0)

inline static constexpr unsigned int IMJBDFOCECK_TypeDefinitionIndex = 10263;

	class IMJBDFOCECK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMJBDFOCECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IMJBDFOCECK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMJBDFOCECK*))((::PBYTE)hIl2Cpp + IMJBDFOCECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IMJBDFOCECK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IMJBDFOCECK*))((::PBYTE)hIl2Cpp + IMJBDFOCECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
