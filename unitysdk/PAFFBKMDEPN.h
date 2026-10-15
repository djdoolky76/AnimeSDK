#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IDOHKCEJPJP.h"
#include "unitysdk/LGPFGDFHIOM.h"
#include "unitysdk/PAOIIOIGCOJ.h"
class HPKACEPPPCA;
class KLEFGGIHGMI;
class LJFHKAJPFNE;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define PAFFBKMDEPN_BFFOCNIGILL_OFFSET UNITYSDK_OFFSET(0xBFC8430)
#define PAFFBKMDEPN_BNOJFKEFFHP_OFFSET UNITYSDK_OFFSET(0xBFC85B0)
#define PAFFBKMDEPN_CMDBJFLEOGI_OFFSET UNITYSDK_OFFSET(0xBFC7CE0)
#define PAFFBKMDEPN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC72A0)
#define PAFFBKMDEPN_FAGDDMHBJIJ_OFFSET UNITYSDK_OFFSET(0xBFC79A0)
#define PAFFBKMDEPN_FHJLKIBONPH_OFFSET UNITYSDK_OFFSET(0xBFC81C0)
#define PAFFBKMDEPN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBFC7420)
#define PAFFBKMDEPN_NDJKBKNLIBE_OFFSET UNITYSDK_OFFSET(0xBFC7E50)
#define PAFFBKMDEPN_ODKHAJKJENA_OFFSET UNITYSDK_OFFSET(0xBFC7FC0)
#define PAFFBKMDEPN_PMLJIMGJNJO_OFFSET UNITYSDK_OFFSET(0xBFC7790)

inline static constexpr unsigned int PAFFBKMDEPN_TypeDefinitionIndex = 73902;

	class PAFFBKMDEPN : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::IDOHKCEJPJP>* JOIPMLKGAEG; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::System::Collections::Generic::List_1<::LGPFGDFHIOM>*>* NLKGFBCLFMO; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::KLEFGGIHGMI*>* DKFENCPCAHD; // 0x28
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void PMLJIMGJNJO(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::IDOHKCEJPJP a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_PMLJIMGJNJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FAGDDMHBJIJ(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::LGPFGDFHIOM a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::LGPFGDFHIOM))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_FAGDDMHBJIJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CMDBJFLEOGI(::KLEFGGIHGMI* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_CMDBJFLEOGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHJLKIBONPH(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_FHJLKIBONPH_OFFSET))(this, a1);
		}

		::System::Void BFFOCNIGILL(::HPKACEPPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPKACEPPPCA*))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_BFFOCNIGILL_OFFSET))(this, a1);
		}

		::System::Void ODKHAJKJENA(::UnityEngine::GameObject* a1, ::IDOHKCEJPJP a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_ODKHAJKJENA_OFFSET))(this, a1, a2);
		}

		::System::Void BNOJFKEFFHP(::UnityEngine::GameObject* a1, ::IDOHKCEJPJP a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::IDOHKCEJPJP))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_BNOJFKEFFHP_OFFSET))(this, a1, a2);
		}

		::System::Void NDJKBKNLIBE(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::LGPFGDFHIOM>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::LGPFGDFHIOM>*))((::PBYTE)hIl2Cpp + PAFFBKMDEPN_NDJKBKNLIBE_OFFSET))(this, a1, a2);
		}

	};
