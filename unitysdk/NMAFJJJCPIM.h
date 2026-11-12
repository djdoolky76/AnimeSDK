#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NMAFJJJCPIM;

#define NMAFJJJCPIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E439F70)
#define NMAFJJJCPIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E439F80)
#define NMAFJJJCPIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E439F40)

inline static constexpr unsigned int NMAFJJJCPIM_TypeDefinitionIndex = 22797;

	class NMAFJJJCPIM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean BHEPDKPEPNO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAFJJJCPIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NMAFJJJCPIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMAFJJJCPIM*))((::PBYTE)hIl2Cpp + NMAFJJJCPIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NMAFJJJCPIM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NMAFJJJCPIM*))((::PBYTE)hIl2Cpp + NMAFJJJCPIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
