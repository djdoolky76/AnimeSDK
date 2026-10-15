#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EEJMIHDHHHB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }

#define EEJMIHDHHHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD75FF0)
#define EEJMIHDHHHB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD76000)
#define EEJMIHDHHHB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD75FC0)

	class EEJMIHDHHHB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x18
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x20
		::System::Boolean DKOBNHEIEIJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEJMIHDHHHB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EEJMIHDHHHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEJMIHDHHHB*))((::PBYTE)hIl2Cpp + EEJMIHDHHHB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EEJMIHDHHHB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EEJMIHDHHHB*))((::PBYTE)hIl2Cpp + EEJMIHDHHHB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
