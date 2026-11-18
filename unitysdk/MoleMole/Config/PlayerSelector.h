#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PLAYERSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x1A04BBA0)
#define MOLEMOLE_CONFIG_PLAYERSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x1A04B8A0)
#define MOLEMOLE_CONFIG_PLAYERSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04BBE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PlayerSelector_TypeDefinitionIndex = 58636;

	class PlayerSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* targetEmptyList; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* targetList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PLAYERSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
