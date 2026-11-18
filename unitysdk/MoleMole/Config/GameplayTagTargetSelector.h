#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x192B14D0)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x192B1040)
#define MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x192B1510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int GameplayTagTargetSelector_TypeDefinitionIndex = 74657;

	class GameplayTagTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::String* EntityTag; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* _handles; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _cache; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_GAMEPLAYTAGTARGETSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
