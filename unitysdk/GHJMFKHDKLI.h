#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/UnityEngine/Bounds.h"

class KBALNFBNAFI;
namespace MoleMole { class MonoEntityColliderManager; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define GHJMFKHDKLI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10EF59C0)
#define GHJMFKHDKLI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10EF6060)
#define GHJMFKHDKLI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10EF5FD0)
#define GHJMFKHDKLI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x10EF52B0)
#define GHJMFKHDKLI__CCTOR_OFFSET UNITYSDK_OFFSET(0x10EF5A10)
#define GHJMFKHDKLI__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF5A90)

inline static constexpr unsigned int GHJMFKHDKLI_TypeDefinitionIndex = 76492;

class GHJMFKHDKLI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x3F; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Collider*>* GNGCNOLGKIF; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KBALNFBNAFI*>* CFNKPGFBJPC; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* GDLAOMCAMMN; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::String*>*>*>* CLKCAHIIFKN; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::KBALNFBNAFI*>* OLPHHODNJAJ; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* AFAFNAOLGCB; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* DDDLMEDLAFO; // 0x78
	::UnityEngine::Collider* GACDOMHGKFG; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* JHGONKIILIH; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DHCJPDMAHKF; // 0x90
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Bounds>* BAMJIHFKFFA; // 0x98
	::UnityEngine::Collider* FKCKNFJKMJN; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* MFMCPLBJFCI; // 0xA8
	::MoleMole::MonoEntityColliderManager* BBFGIAIFKBA; // 0xB0
	::System::Action_3<::MoleMole::Battle::Entity*, ::UnityEngine::Collider*, ::System::Boolean>* PAJKDFHDFJC; // 0xB8
	::System::Int32 EMPEHJALOGB; // 0xC0
	::System::Boolean IJIKLDBIMMG; // 0xC4
	::System::Boolean IMPCDBJLFJJ; // 0xC5

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJMFKHDKLI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJMFKHDKLI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJMFKHDKLI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJMFKHDKLI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJMFKHDKLI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::GHJMFKHDKLI* JFDOOELFAOA()
	{
		return ((::GHJMFKHDKLI*(*)())((::PBYTE)hIl2Cpp + GHJMFKHDKLI_JFDOOELFAOA_OFFSET))();
	}
};
