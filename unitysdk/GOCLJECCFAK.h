#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GOCLJECCFAK;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define GOCLJECCFAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C3DA0)
#define GOCLJECCFAK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9C3DB0)
#define GOCLJECCFAK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9C3D70)

inline static constexpr unsigned int GOCLJECCFAK_TypeDefinitionIndex = 24056;

	class GOCLJECCFAK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GEKIGCNCNBH; // 0x18
		::Il2CppArray<::RPG::GameCore::SkillType>* DCMBIGIDAHM; // 0x20
		::RPG::GameCore::PredicateConfig* EKIJFPIPCKF; // 0x28
		::Il2CppArray<::System::String*>* COIKNMHIEPK; // 0x30
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* BFKINNEPCKC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOCLJECCFAK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GOCLJECCFAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOCLJECCFAK*))((::PBYTE)hIl2Cpp + GOCLJECCFAK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GOCLJECCFAK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GOCLJECCFAK*))((::PBYTE)hIl2Cpp + GOCLJECCFAK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
