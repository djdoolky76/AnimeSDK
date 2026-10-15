#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MMFMAIKPPDO;

#define MMFMAIKPPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D1A50)
#define MMFMAIKPPDO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1D1A60)
#define MMFMAIKPPDO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1D1990)

inline static constexpr unsigned int MMFMAIKPPDO_TypeDefinitionIndex = 19900;

	class MMFMAIKPPDO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMFMAIKPPDO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MMFMAIKPPDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMFMAIKPPDO*))((::PBYTE)hIl2Cpp + MMFMAIKPPDO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MMFMAIKPPDO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MMFMAIKPPDO*))((::PBYTE)hIl2Cpp + MMFMAIKPPDO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
