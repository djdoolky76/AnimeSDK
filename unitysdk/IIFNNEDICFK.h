#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IIFNNEDICFK;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }

#define IIFNNEDICFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF128D0)
#define IIFNNEDICFK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CF128E0)
#define IIFNNEDICFK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CF128A0)

inline static constexpr unsigned int IIFNNEDICFK_TypeDefinitionIndex = 23240;

	class IIFNNEDICFK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* NOCCJLJPLKJ; // 0x18
		::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x20
		::RPG::GameCore::PropertyModifyFunction FKCKKFALPBK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFNNEDICFK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IIFNNEDICFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIFNNEDICFK*))((::PBYTE)hIl2Cpp + IIFNNEDICFK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IIFNNEDICFK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIFNNEDICFK*))((::PBYTE)hIl2Cpp + IIFNNEDICFK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
