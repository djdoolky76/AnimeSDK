#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
class GAHENGLADAH;
class GELIALJDFBL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GAHENGLADAH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1686FD80)
#define GAHENGLADAH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1686FFB0)
#define GAHENGLADAH_CTOR_OFFSET UNITYSDK_OFFSET(0x16870380)
#define GAHENGLADAH_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x16870080)

inline static constexpr unsigned int GAHENGLADAH_TypeDefinitionIndex = 55145;

	class GAHENGLADAH : public ::System::Object
	{
	public:
		::GELIALJDFBL* LLHKOFLJFCH; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::TeamTypeMask AILGGHMGLIN; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::EntityTypeMask JKAGAKJELHA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHENGLADAH_CTOR_OFFSET))(this);
		}

		static ::GAHENGLADAH* BPLPBPMEODA(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PredicateConfig* a2, ::RPG::GameCore::EntityTypeMask a3, ::RPG::GameCore::TeamTypeMask a4)
		{
			return ((::GAHENGLADAH*(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::PredicateConfig*, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::TeamTypeMask))((::PBYTE)hIl2Cpp + GAHENGLADAH_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHENGLADAH_CLEAR_OFFSET))(this);
		}

		::System::Boolean JJNFOPNOPBF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GAHENGLADAH_JJNFOPNOPBF_OFFSET))(this, a1);
		}

	};
