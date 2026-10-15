#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PEKCDLDLGJI;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class TargetEvaluator; }

#define PEKCDLDLGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D56E0)
#define PEKCDLDLGJI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2D56F0)
#define PEKCDLDLGJI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2D56A0)

	class PEKCDLDLGJI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::JsonEnum* LAONHAPDGGO; // 0x20
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x28
		::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEKCDLDLGJI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PEKCDLDLGJI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEKCDLDLGJI*))((::PBYTE)hIl2Cpp + PEKCDLDLGJI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PEKCDLDLGJI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PEKCDLDLGJI*))((::PBYTE)hIl2Cpp + PEKCDLDLGJI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
