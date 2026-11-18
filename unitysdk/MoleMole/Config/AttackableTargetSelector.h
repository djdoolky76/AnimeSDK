#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_DLIPEDHHAPH_OFFSET UNITYSDK_OFFSET(0x16405000)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x16405110)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x16404BB0)
#define MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16405150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackableTargetSelector_TypeDefinitionIndex = 92710;

	class AttackableTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _cache; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _idSet; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}

		::System::Void DLIPEDHHAPH(::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OLKHDAAGGAA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKABLETARGETSELECTOR_DLIPEDHHAPH_OFFSET))(this, OLKHDAAGGAA);
		}
	};
}
