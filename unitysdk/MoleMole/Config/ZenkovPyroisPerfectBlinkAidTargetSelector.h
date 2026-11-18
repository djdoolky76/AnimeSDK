#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x1B451FB0)
#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x1B451E60)
#define MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B451FF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovPyroisPerfectBlinkAidTargetSelector_TypeDefinitionIndex = 65881;

	class ZenkovPyroisPerfectBlinkAidTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISPERFECTBLINKAIDTARGETSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
