#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Transform; }

#define ELICEANLIMM_AGDMDAJACIA_OFFSET UNITYSDK_OFFSET(0x15521160)
#define ELICEANLIMM_AJGGDMNGJMF_OFFSET UNITYSDK_OFFSET(0x15521620)
#define ELICEANLIMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15521C50)
#define ELICEANLIMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15520D60)
#define ELICEANLIMM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15521A60)
#define ELICEANLIMM_LIEEPKGACKM_OFFSET UNITYSDK_OFFSET(0x15520D90)
#define ELICEANLIMM_MHOCMGMNEBL_OFFSET UNITYSDK_OFFSET(0x15520EB0)
#define ELICEANLIMM_MIOCDNNHIHE_OFFSET UNITYSDK_OFFSET(0x15520FD0)
#define ELICEANLIMM_NCLIDHIAEFK_OFFSET UNITYSDK_OFFSET(0x15521480)

inline static constexpr unsigned int ELICEANLIMM_TypeDefinitionIndex = 54630;

	class ELICEANLIMM
	{
	public:
		static ::System::Int32* StaticGet_GBFKGJFHEDM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ELICEANLIMM")->GetStaticField(0x111E0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + ELICEANLIMM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELICEANLIMM_CCTOR_OFFSET))();
		}

		::System::Single LIEEPKGACKM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICEANLIMM_LIEEPKGACKM_OFFSET))(this);
		}

		::System::Single MHOCMGMNEBL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICEANLIMM_MHOCMGMNEBL_OFFSET))(this);
		}

		::System::Boolean MIOCDNNHIHE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELICEANLIMM_MIOCDNNHIHE_OFFSET))(this, a1);
		}

		::System::Boolean AGDMDAJACIA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELICEANLIMM_AGDMDAJACIA_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* NCLIDHIAEFK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELICEANLIMM_NCLIDHIAEFK_OFFSET))(this, a1);
		}

		::System::Boolean AJGGDMNGJMF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ELICEANLIMM_AJGGDMNGJMF_OFFSET))(this, a1);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELICEANLIMM_EVALUATE_OFFSET))(this);
		}

	};
