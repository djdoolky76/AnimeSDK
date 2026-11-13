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

#define EKBAMCGELAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F11F740)
#define EKBAMCGELAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F11F750)
#define EKBAMCGELAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F11F700)

inline static constexpr unsigned int EKBAMCGELAK_TypeDefinitionIndex = 24596;

	class EKBAMCGELAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::TargetEvaluator* FHMKCLNLGOP; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BKNDLCGHANK; // 0x28
		::RPG::GameCore::ProjectileData* PJCICCBNBEI; // 0x30
		::RPG::GameCore::NewProjectileConfig* FJFCBBOCICK; // 0x38
		::RPG::GameCore::FixPoint JKDFIMCIKFJ; // 0x40
		::System::Boolean FKJPBMMCHFL; // 0x48
		::System::Byte _padding0[0x3];
		::System::Int32 HCDEOKNIGKG; // 0x4C
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
