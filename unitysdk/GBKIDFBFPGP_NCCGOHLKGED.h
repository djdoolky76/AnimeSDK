#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define GBKIDFBFPGP_NCCGOHLKGED_BGIFPEOGHOD_OFFSET UNITYSDK_OFFSET(0xBB80C10)
#define GBKIDFBFPGP_NCCGOHLKGED_EFMHNFGNLBK_OFFSET UNITYSDK_OFFSET(0xBB809E0)
#define GBKIDFBFPGP_NCCGOHLKGED_LJICNMOPICO_OFFSET UNITYSDK_OFFSET(0xBB80C20)
#define GBKIDFBFPGP_NCCGOHLKGED_OFNBEOHGPFO_OFFSET UNITYSDK_OFFSET(0xBB807B0)
#define GBKIDFBFPGP_NCCGOHLKGED__CTOR_OFFSET UNITYSDK_OFFSET(0xBB807A0)

inline static constexpr unsigned int GBKIDFBFPGP_NCCGOHLKGED_TypeDefinitionIndex = 58613;

class GBKIDFBFPGP_NCCGOHLKGED : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::KPBPGBNIDOK KKOGCPPLPNJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NCCGOHLKGED__CTOR_OFFSET))(this);
	}

	::System::Void OFNBEOHGPFO(::UnityEngine::Collider* CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NCCGOHLKGED_OFNBEOHGPFO_OFFSET))(this, CHIFPJGLFPK);
	}

	::System::Void EFMHNFGNLBK(::UnityEngine::Collider* CHIFPJGLFPK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NCCGOHLKGED_EFMHNFGNLBK_OFFSET))(this, CHIFPJGLFPK);
	}

	::System::Void BGIFPEOGHOD(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NCCGOHLKGED_BGIFPEOGHOD_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}

	::System::Void LJICNMOPICO(::UnityEngine::Collider* PIIPCLCCOIG, ::System::Object* MINPNEAOEMM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + GBKIDFBFPGP_NCCGOHLKGED_LJICNMOPICO_OFFSET))(this, PIIPCLCCOIG, MINPNEAOEMM);
	}
};
