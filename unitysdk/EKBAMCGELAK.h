#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class EKBAMCGELAK;
class FCOEMCEDLNL;
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define EKBAMCGELAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD947B0)
#define EKBAMCGELAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD947C0)
#define EKBAMCGELAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD94770)

inline static constexpr unsigned int EKBAMCGELAK_TypeDefinitionIndex = 24137;

	class EKBAMCGELAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x18
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x20
		::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x30
		::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x38
		::System::Boolean FKJPBMMCHFL; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 HCDEOKNIGKG; // 0x44
		::RPG::GameCore::FixPoint JKDFIMCIKFJ; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBAMCGELAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EKBAMCGELAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKBAMCGELAK*))((::PBYTE)hIl2Cpp + EKBAMCGELAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::EKBAMCGELAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EKBAMCGELAK*))((::PBYTE)hIl2Cpp + EKBAMCGELAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
