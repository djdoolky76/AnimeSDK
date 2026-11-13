#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskContext.h"
class MBBEBLGELAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define FGHGHOHCAKF_CLONE_OFFSET UNITYSDK_OFFSET(0x18A8BF20)
#define FGHGHOHCAKF_CTOR_OFFSET UNITYSDK_OFFSET(0x18A8BE90)
#define FGHGHOHCAKF_GET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A8C0A0)
#define FGHGHOHCAKF_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x18A8BF80)
#define FGHGHOHCAKF_GET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x18A8C1C0)
#define FGHGHOHCAKF_SET_OWNERABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A8C130)
#define FGHGHOHCAKF_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0x18A8C010)
#define FGHGHOHCAKF_SET_PARENTCONTEXT_OFFSET UNITYSDK_OFFSET(0x18A8C1D0)
#define FGHGHOHCAKF__GETSELFINSTANCE_OFFSET UNITYSDK_OFFSET(0x18A8C1E0)

inline static constexpr unsigned int FGHGHOHCAKF_TypeDefinitionIndex = 55944;

	class FGHGHOHCAKF : public ::RPG::GameCore::TaskContext
	{
	public:
		::RPG::GameCore::TaskContext* _ParentContext_k__BackingField; // 0xA8
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* Clone()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_CLONE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_OwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_GET_OWNERENTITY_OFFSET))(this);
		}

		::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_SET_OWNERENTITY_OFFSET))(this, a1);
		}

		::MBBEBLGELAP* get_OwnerAbilityInstance()
		{
			return ((::MBBEBLGELAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_GET_OWNERABILITYINSTANCE_OFFSET))(this);
		}

		::System::Void set_OwnerAbilityInstance(::MBBEBLGELAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBBEBLGELAP*))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_SET_OWNERABILITYINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* get_ParentContext()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_GET_PARENTCONTEXT_OFFSET))(this);
		}

		::System::Void set_ParentContext(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + FGHGHOHCAKF_SET_PARENTCONTEXT_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskContext* _GetSelfInstance()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGHGHOHCAKF__GETSELFINSTANCE_OFFSET))(this);
		}

	};
