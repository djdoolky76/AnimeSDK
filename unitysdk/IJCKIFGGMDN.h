#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IJCKIFGGMDN;
namespace RPG::GameCore { class DynamicString; }

#define IJCKIFGGMDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE9990)
#define IJCKIFGGMDN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEE99A0)
#define IJCKIFGGMDN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE9960)

inline static constexpr unsigned int IJCKIFGGMDN_TypeDefinitionIndex = 21459;

	class IJCKIFGGMDN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* OENAMINOLLF; // 0x18
		::System::Boolean HBGIPOPFOBA; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJCKIFGGMDN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IJCKIFGGMDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJCKIFGGMDN*))((::PBYTE)hIl2Cpp + IJCKIFGGMDN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IJCKIFGGMDN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IJCKIFGGMDN*))((::PBYTE)hIl2Cpp + IJCKIFGGMDN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
