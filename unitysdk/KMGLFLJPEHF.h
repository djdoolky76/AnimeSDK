#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAOIIOIGCOJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class LJFHKAJPFNE;
class NIBCAANJHIL;
namespace RPG::GameCore { class AnchorInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMGLFLJPEHF_ALABCLEEMNB_OFFSET UNITYSDK_OFFSET(0xB555C60)
#define KMGLFLJPEHF_AOEHEEFDGNL_OFFSET UNITYSDK_OFFSET(0xB555AF0)
#define KMGLFLJPEHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5554E0)
#define KMGLFLJPEHF_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB5562F0)
#define KMGLFLJPEHF_KDKCCHDHFAG_OFFSET UNITYSDK_OFFSET(0xB555580)
#define KMGLFLJPEHF_KKBGKLHFFAA_OFFSET UNITYSDK_OFFSET(0xB555EA0)
#define KMGLFLJPEHF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB556020)

inline static constexpr unsigned int KMGLFLJPEHF_TypeDefinitionIndex = 73978;

	class KMGLFLJPEHF : public ::PAOIIOIGCOJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NIBCAANJHIL*>* IMJDHFOLBNM; // 0x18
		::System::Void _ctor(::LJFHKAJPFNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_CTOR_OFFSET))(this, a1);
		}

		::System::Void KDKCCHDHFAG(::System::String* a1, ::RPG::GameCore::AnchorInfo* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::AnchorInfo*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_KDKCCHDHFAG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AOEHEEFDGNL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_AOEHEEFDGNL_OFFSET))(this, a1, a2);
		}

		::System::Void ALABCLEEMNB(::System::String* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_ALABCLEEMNB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KKBGKLHFFAA(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_KKBGKLHFFAA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMGLFLJPEHF_HADOHLNHHGB_OFFSET))(this);
		}

	};
