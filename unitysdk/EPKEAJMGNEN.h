#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define EPKEAJMGNEN_AIIECAFMDCL_OFFSET UNITYSDK_OFFSET(0x17133130)
#define EPKEAJMGNEN_DBDLCPIIKHJ_OFFSET UNITYSDK_OFFSET(0x17132B50)
#define EPKEAJMGNEN_HKKEHKJMFMP_OFFSET UNITYSDK_OFFSET(0x17132BF0)
#define EPKEAJMGNEN_IOPOBOPJLGD_OFFSET UNITYSDK_OFFSET(0x171329A0)
#define EPKEAJMGNEN_LCPLHLHHLDN_OFFSET UNITYSDK_OFFSET(0x171332C0)
#define EPKEAJMGNEN_PINCHMDDBFJ_OFFSET UNITYSDK_OFFSET(0x171330B0)
#define EPKEAJMGNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x17132990)

inline static constexpr unsigned int EPKEAJMGNEN_TypeDefinitionIndex = 75100;

class EPKEAJMGNEN : public ::System::Object
{
public:
	::UnityEngine::Transform* ANMDHBOCMGM; // 0x10
	::MoleMole::EntityHandle AMHCJOAMHFL; // 0x18
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x28
	::System::String* FCBDPCEKHOM; // 0x30
	::System::Boolean NNJLDLIHINN; // 0x38
	::System::Boolean FOBHALIGGIK; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKEAJMGNEN__CTOR_OFFSET))(this);
	}

	::System::Void IOPOBOPJLGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_IOPOBOPJLGD_OFFSET))(this);
	}

	::System::Void DBDLCPIIKHJ(::System::String* FCBDPCEKHOM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_DBDLCPIIKHJ_OFFSET))(this, FCBDPCEKHOM);
	}

	::System::Void PINCHMDDBFJ(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_PINCHMDDBFJ_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void AIIECAFMDCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_AIIECAFMDCL_OFFSET))(this);
	}

	::System::Void LCPLHLHHLDN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_LCPLHLHHLDN_OFFSET))(this);
	}

	::System::Void HKKEHKJMFMP(::System::String* OJGKMPDKIMK, ::System::Action_1<::MoleMole::Battle::Entity*>* DIGFEHPJJBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + EPKEAJMGNEN_HKKEHKJMFMP_OFFSET))(this, OJGKMPDKIMK, DIGFEHPJJBC);
	}
};
