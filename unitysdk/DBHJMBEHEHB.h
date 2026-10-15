#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBPFGANJMPN.h"
class OHHPOGMFPBF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define DBHJMBEHEHB_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE22D0)
#define DBHJMBEHEHB_KAMBFDCONPJ_OFFSET UNITYSDK_OFFSET(0xDFE22F0)

inline static constexpr unsigned int DBHJMBEHEHB_TypeDefinitionIndex = 55232;

	class DBHJMBEHEHB : public ::BBPFGANJMPN
	{
	public:
		::RPG::GameCore::NewFireProjectile* PBGHFKLFOHD; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireProjectile* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + DBHJMBEHEHB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KAMBFDCONPJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::OHHPOGMFPBF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::OHHPOGMFPBF*))((::PBYTE)hIl2Cpp + DBHJMBEHEHB_KAMBFDCONPJ_OFFSET))(this, a1, a2, a3);
		}

	};
