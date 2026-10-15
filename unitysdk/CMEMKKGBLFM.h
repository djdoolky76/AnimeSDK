#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CMEMKKGBLFM;
class FCOEMCEDLNL;

#define CMEMKKGBLFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC82230)
#define CMEMKKGBLFM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC82240)
#define CMEMKKGBLFM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC82170)

inline static constexpr unsigned int CMEMKKGBLFM_TypeDefinitionIndex = 10200;

	class CMEMKKGBLFM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMEMKKGBLFM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CMEMKKGBLFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMEMKKGBLFM*))((::PBYTE)hIl2Cpp + CMEMKKGBLFM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CMEMKKGBLFM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CMEMKKGBLFM*))((::PBYTE)hIl2Cpp + CMEMKKGBLFM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
