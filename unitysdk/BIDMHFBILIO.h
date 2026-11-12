#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIDMHFBILIO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define BIDMHFBILIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BA770)
#define BIDMHFBILIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9BA780)
#define BIDMHFBILIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9BA740)

inline static constexpr unsigned int BIDMHFBILIO_TypeDefinitionIndex = 24597;

	class BIDMHFBILIO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x20
		::Il2CppArray<::RPG::GameCore::RtProjectileOnHitList*>* IFGDJCJIECP; // 0x28
		::Il2CppArray<::RPG::GameCore::RtProjectileDataList*>* JIAEPDIHNCH; // 0x30
		::System::Boolean FKJPBMMCHFL; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDMHFBILIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BIDMHFBILIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIDMHFBILIO*))((::PBYTE)hIl2Cpp + BIDMHFBILIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BIDMHFBILIO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BIDMHFBILIO*))((::PBYTE)hIl2Cpp + BIDMHFBILIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
