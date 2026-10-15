#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::Client { class SceneShaderPropertyTransition; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BLBINLBGNLI_AIAIBMNEBAF_OFFSET UNITYSDK_OFFSET(0xBA65E10)
#define BLBINLBGNLI_CGCPGDCGOBH_OFFSET UNITYSDK_OFFSET(0xBA660B0)
#define BLBINLBGNLI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA65C50)
#define BLBINLBGNLI_FEJKOHFHHNN_OFFSET UNITYSDK_OFFSET(0xBA66060)
#define BLBINLBGNLI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBA65E90)
#define BLBINLBGNLI_IPIIINBOLBJ_OFFSET UNITYSDK_OFFSET(0xBA662D0)
#define BLBINLBGNLI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA65CB0)
#define BLBINLBGNLI_MGDEKAHCGAE_OFFSET UNITYSDK_OFFSET(0xBA65E50)

inline static constexpr unsigned int BLBINLBGNLI_TypeDefinitionIndex = 68885;

	class BLBINLBGNLI : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* JFCDMEMJAGA; // 0x10
		::RPG::GameCore::EntityManager* OKLBOLCBGAF; // 0x18
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* IINHNOLAPHH; // 0x28
		::System::Void _ctor(::RPG::GameCore::EventManager* a1, ::RPG::GameCore::EntityManager* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*, ::RPG::GameCore::EntityManager*))((::PBYTE)hIl2Cpp + BLBINLBGNLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBINLBGNLI_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>* AIAIBMNEBAF()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CharacterShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBINLBGNLI_AIAIBMNEBAF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>* MGDEKAHCGAE()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SceneShaderPropertyTransition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBINLBGNLI_MGDEKAHCGAE_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBINLBGNLI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FEJKOHFHHNN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BLBINLBGNLI_FEJKOHFHHNN_OFFSET))(this, a1);
		}

		::System::Void IPIIINBOLBJ(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + BLBINLBGNLI_IPIIINBOLBJ_OFFSET))(this, a1);
		}

		::System::Void CGCPGDCGOBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLBINLBGNLI_CGCPGDCGOBH_OFFSET))(this);
		}

	};
