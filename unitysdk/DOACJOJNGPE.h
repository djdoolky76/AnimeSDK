#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DOACJOJNGPE;
class FCOEMCEDLNL;

#define DOACJOJNGPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E998CD0)
#define DOACJOJNGPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E998CE0)
#define DOACJOJNGPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E998CA0)

inline static constexpr unsigned int DOACJOJNGPE_TypeDefinitionIndex = 20838;

	class DOACJOJNGPE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 OBOMNIHKHMM; // 0x18
		::System::UInt32 LLDCHLHNADA; // 0x1C
		::System::Boolean LMLOBMIPHNB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOACJOJNGPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOACJOJNGPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOACJOJNGPE*))((::PBYTE)hIl2Cpp + DOACJOJNGPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DOACJOJNGPE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOACJOJNGPE*))((::PBYTE)hIl2Cpp + DOACJOJNGPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
