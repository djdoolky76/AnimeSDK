#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHLECNJHFOM;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PHLECNJHFOM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC24D4F0)
#define PHLECNJHFOM_CTOR_OFFSET UNITYSDK_OFFSET(0xC24D540)
#define PHLECNJHFOM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC24D550)

inline static constexpr unsigned int PHLECNJHFOM_TypeDefinitionIndex = 62558;

	class PHLECNJHFOM : public ::System::Object
	{
	public:
		::RPG::Client::RoguePickAvatarInfo* BPJMOAEDGOM; // 0x10
		::System::Void _ctor(::RPG::Client::RoguePickAvatarInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + PHLECNJHFOM_CTOR_OFFSET))(this, a1);
		}

		static ::PHLECNJHFOM* BPLPBPMEODA(::RPG::Client::RoguePickAvatarInfo* a1)
		{
			return ((::PHLECNJHFOM*(*)(::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + PHLECNJHFOM_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAGKOAEOLKA(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + PHLECNJHFOM_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
