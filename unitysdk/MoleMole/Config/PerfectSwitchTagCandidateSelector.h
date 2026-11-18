#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x1A048C20)
#define MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x1A048A30)
#define MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A048C60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerfectSwitchTagCandidateSelector_TypeDefinitionIndex = 88454;

	class PerfectSwitchTagCandidateSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHTAGCANDIDATESELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
