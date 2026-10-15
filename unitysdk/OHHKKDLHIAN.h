#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHHKKDLHIAN;

#define OHHKKDLHIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2784D0)
#define OHHKKDLHIAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2784E0)
#define OHHKKDLHIAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D278410)

inline static constexpr unsigned int OHHKKDLHIAN_TypeDefinitionIndex = 23715;

	class OHHKKDLHIAN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHKKDLHIAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHHKKDLHIAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHHKKDLHIAN*))((::PBYTE)hIl2Cpp + OHHKKDLHIAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHHKKDLHIAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHHKKDLHIAN*))((::PBYTE)hIl2Cpp + OHHKKDLHIAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
