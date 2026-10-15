#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OOCOGGMJLBN;
namespace RPG::GameCore { class DynamicFloat; }

#define OOCOGGMJLBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27AA00)
#define OOCOGGMJLBN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D27AA10)
#define OOCOGGMJLBN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D27A9D0)

inline static constexpr unsigned int OOCOGGMJLBN_TypeDefinitionIndex = 23604;

	class OOCOGGMJLBN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* MCNPMDPMCKM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCOGGMJLBN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OOCOGGMJLBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOCOGGMJLBN*))((::PBYTE)hIl2Cpp + OOCOGGMJLBN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OOCOGGMJLBN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OOCOGGMJLBN*))((::PBYTE)hIl2Cpp + OOCOGGMJLBN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
