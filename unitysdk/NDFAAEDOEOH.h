#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOIIMBFKMJC.h"
class KANHBPAGDJD;
namespace RPG::GameCore { class GameEntity; }

#define NDFAAEDOEOH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB229F0)
#define NDFAAEDOEOH_DIKLEOOHEFN_OFFSET UNITYSDK_OFFSET(0xBB226B0)
#define NDFAAEDOEOH_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBB22130)
#define NDFAAEDOEOH_GET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0xBB220F0)
#define NDFAAEDOEOH_GET_TOENTITY_OFFSET UNITYSDK_OFFSET(0xBB22110)
#define NDFAAEDOEOH_SET_FROMENTITY_OFFSET UNITYSDK_OFFSET(0xBB22100)
#define NDFAAEDOEOH_SET_TOENTITY_OFFSET UNITYSDK_OFFSET(0xBB22120)

inline static constexpr unsigned int NDFAAEDOEOH_TypeDefinitionIndex = 54307;

	class NDFAAEDOEOH : public ::GOIIMBFKMJC
	{
	public:
		::RPG::GameCore::GameEntity* _FromEntity_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _ToEntity_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_FromEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_GET_FROMENTITY_OFFSET))(this);
		}

		::System::Void set_FromEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_SET_FROMENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_ToEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_GET_TOENTITY_OFFSET))(this);
		}

		::System::Void set_ToEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_SET_TOENTITY_OFFSET))(this, a1);
		}

		::System::Void Execute(::KANHBPAGDJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KANHBPAGDJD*))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_EXECUTE_OFFSET))(this, a1);
		}

		static ::System::Boolean DIKLEOOHEFN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NDFAAEDOEOH_DIKLEOOHEFN_OFFSET))(a1, a2);
		}

	};
