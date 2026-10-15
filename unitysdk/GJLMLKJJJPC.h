#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GJLMLKJJJPC;
namespace RPG::GameCore { class DynamicFloat; }

#define GJLMLKJJJPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE288D0)
#define GJLMLKJJJPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE288E0)
#define GJLMLKJJJPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE288A0)

inline static constexpr unsigned int GJLMLKJJJPC_TypeDefinitionIndex = 23371;

	class GJLMLKJJJPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* EGEBAPINIOG; // 0x18
		::System::Boolean MOKNCFJICIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLMLKJJJPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GJLMLKJJJPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJLMLKJJJPC*))((::PBYTE)hIl2Cpp + GJLMLKJJJPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GJLMLKJJJPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GJLMLKJJJPC*))((::PBYTE)hIl2Cpp + GJLMLKJJJPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
