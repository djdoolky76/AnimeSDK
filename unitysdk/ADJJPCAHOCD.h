#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ADJJPCAHOCD;
class FCOEMCEDLNL;

#define ADJJPCAHOCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E01DB20)
#define ADJJPCAHOCD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E01DB30)
#define ADJJPCAHOCD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E01DA60)

inline static constexpr unsigned int ADJJPCAHOCD_TypeDefinitionIndex = 21891;

	class ADJJPCAHOCD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADJJPCAHOCD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ADJJPCAHOCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADJJPCAHOCD*))((::PBYTE)hIl2Cpp + ADJJPCAHOCD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ADJJPCAHOCD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ADJJPCAHOCD*))((::PBYTE)hIl2Cpp + ADJJPCAHOCD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
