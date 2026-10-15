#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIDMHFBILIO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define BIDMHFBILIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D9140)
#define BIDMHFBILIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D9150)
#define BIDMHFBILIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D9110)

inline static constexpr unsigned int BIDMHFBILIO_TypeDefinitionIndex = 24138;

	class BIDMHFBILIO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtProjectileOnHitList*>* IFGDJCJIECP; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x28
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
