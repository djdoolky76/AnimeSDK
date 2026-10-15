#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class OHNBGKMGBCE;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define OHNBGKMGBCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D281180)
#define OHNBGKMGBCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2811C0)
#define OHNBGKMGBCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D281120)

inline static constexpr unsigned int OHNBGKMGBCE_TypeDefinitionIndex = 20772;

	class OHNBGKMGBCE : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* FHLJGDGMMHK; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::TargetEvaluator* IDFDJPPLHFE; // 0x28
		::RPG::GameCore::TargetEvaluator* ABAPJDNAJBN; // 0x30
		::RPG::GameCore::TargetEvaluator* EDLFMHHFEBO; // 0x38
		::RPG::GameCore::DynamicFloat* IDKONBFPBLH; // 0x40
		::RPG::GameCore::DynamicValueContextScope AMEKHLANFKP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHNBGKMGBCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OHNBGKMGBCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHNBGKMGBCE*))((::PBYTE)hIl2Cpp + OHNBGKMGBCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::OHNBGKMGBCE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OHNBGKMGBCE*))((::PBYTE)hIl2Cpp + OHNBGKMGBCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
