#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEFBMDDEBNB;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ILHDPGNPIOK_CMMLLEFOFFK_OFFSET UNITYSDK_OFFSET(0x164A6370)
#define ILHDPGNPIOK_CMPNCFCJCNE_OFFSET UNITYSDK_OFFSET(0x164A61C0)
#define ILHDPGNPIOK_CTOR_OFFSET UNITYSDK_OFFSET(0x164A66D0)
#define ILHDPGNPIOK_EECOOBGAIFN_OFFSET UNITYSDK_OFFSET(0x164A5FF0)
#define ILHDPGNPIOK_IFOOEPKGGAG_OFFSET UNITYSDK_OFFSET(0x164A5E30)
#define ILHDPGNPIOK_JHKBGBMLBOI_OFFSET UNITYSDK_OFFSET(0x164A5DE0)
#define ILHDPGNPIOK_MKFLEJIFBLL_OFFSET UNITYSDK_OFFSET(0x164A6510)

inline static constexpr unsigned int ILHDPGNPIOK_TypeDefinitionIndex = 72347;

	class ILHDPGNPIOK : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GPLBPFPABPH; // 0x10
		::System::Collections::Generic::List_1<::MEFBMDDEBNB*>* MHLIBBOJJMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_CTOR_OFFSET))(this);
		}

		::System::Void JHKBGBMLBOI(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_JHKBGBMLBOI_OFFSET))(this, a1);
		}

		::MEFBMDDEBNB* IFOOEPKGGAG(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::MEFBMDDEBNB*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_IFOOEPKGGAG_OFFSET))(this, a1);
		}

		::System::Void CMPNCFCJCNE(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_CMPNCFCJCNE_OFFSET))(this, a1);
		}

		::System::Void CMMLLEFOFFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_CMMLLEFOFFK_OFFSET))(this);
		}

		::System::Void EECOOBGAIFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_EECOOBGAIFN_OFFSET))(this);
		}

		::System::Int32 MKFLEJIFBLL(::MEFBMDDEBNB* a1, ::MEFBMDDEBNB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MEFBMDDEBNB*, ::MEFBMDDEBNB*))((::PBYTE)hIl2Cpp + ILHDPGNPIOK_MKFLEJIFBLL_OFFSET))(this, a1, a2);
		}

	};
