#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define KKLKJJOMCCE_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x129A19F0)
#define KKLKJJOMCCE_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x129A1800)
#define KKLKJJOMCCE_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x129A18E0)
#define KKLKJJOMCCE_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x129A1960)
#define KKLKJJOMCCE_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x129A1660)
#define KKLKJJOMCCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A1850)
#define KKLKJJOMCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x129A18D0)

inline static constexpr unsigned int KKLKJJOMCCE_TypeDefinitionIndex = 75138;

class KKLKJJOMCCE : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA9; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* JIHOENNHGFB; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NEIBLNDMAIG; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* EDNBOJEBKNE; // 0x58
	::System::Int32 PEKJOGJKNHF; // 0x60
	::System::Boolean DHLACIKOOFB; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKLKJJOMCCE__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLKJJOMCCE__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLKJJOMCCE_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLKJJOMCCE_GETCLASSID_OFFSET))(this);
	}

	static ::KKLKJJOMCCE* JFDOOELFAOA()
	{
		return ((::KKLKJJOMCCE*(*)())((::PBYTE)hIl2Cpp + KKLKJJOMCCE_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLKJJOMCCE_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLKJJOMCCE_GALGFCPKMGC_OFFSET))(this);
	}
};
