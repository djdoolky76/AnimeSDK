#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
class FCOEMCEDLNL;
class JNHAGNDEMNJ;
namespace RPG::GameCore { class DynamicFloat; }

#define JNHAGNDEMNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D051B00)
#define JNHAGNDEMNJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D051B10)
#define JNHAGNDEMNJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D051AC0)

	class JNHAGNDEMNJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x20
		::RPG::GameCore::TeamType BEGKIKOGEOD; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNHAGNDEMNJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JNHAGNDEMNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNHAGNDEMNJ*))((::PBYTE)hIl2Cpp + JNHAGNDEMNJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JNHAGNDEMNJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JNHAGNDEMNJ*))((::PBYTE)hIl2Cpp + JNHAGNDEMNJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
