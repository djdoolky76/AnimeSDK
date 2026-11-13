#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class ONMBDCJIDBJ;

#define ONMBDCJIDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA1DAC0)
#define ONMBDCJIDBJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EA1DAD0)
#define ONMBDCJIDBJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA1DA00)

inline static constexpr unsigned int ONMBDCJIDBJ_TypeDefinitionIndex = 23668;

	class ONMBDCJIDBJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONMBDCJIDBJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ONMBDCJIDBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONMBDCJIDBJ*))((::PBYTE)hIl2Cpp + ONMBDCJIDBJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ONMBDCJIDBJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ONMBDCJIDBJ*))((::PBYTE)hIl2Cpp + ONMBDCJIDBJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
