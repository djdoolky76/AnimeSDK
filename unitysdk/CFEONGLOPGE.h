#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CFEONGLOPGE;
class FCOEMCEDLNL;

#define CFEONGLOPGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBDC9F0)
#define CFEONGLOPGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBDCA00)
#define CFEONGLOPGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBDC9C0)

inline static constexpr unsigned int CFEONGLOPGE_TypeDefinitionIndex = 21145;

	class CFEONGLOPGE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 DOBKKDIECDO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEONGLOPGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CFEONGLOPGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFEONGLOPGE*))((::PBYTE)hIl2Cpp + CFEONGLOPGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CFEONGLOPGE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CFEONGLOPGE*))((::PBYTE)hIl2Cpp + CFEONGLOPGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
