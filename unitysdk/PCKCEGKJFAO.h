#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
class FCOEMCEDLNL;
class PCKCEGKJFAO;

#define PCKCEGKJFAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E707FB0)
#define PCKCEGKJFAO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E707FC0)
#define PCKCEGKJFAO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E707F70)

inline static constexpr unsigned int PCKCEGKJFAO_TypeDefinitionIndex = 23037;

	class PCKCEGKJFAO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TeamTypeMask OMPGJDLFHAG; // 0x18
		::System::Boolean AJKDAOHKOJI; // 0x1A
		::System::Boolean AOMAPCAKIOM; // 0x1B
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKCEGKJFAO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PCKCEGKJFAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCKCEGKJFAO*))((::PBYTE)hIl2Cpp + PCKCEGKJFAO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PCKCEGKJFAO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PCKCEGKJFAO*))((::PBYTE)hIl2Cpp + PCKCEGKJFAO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
