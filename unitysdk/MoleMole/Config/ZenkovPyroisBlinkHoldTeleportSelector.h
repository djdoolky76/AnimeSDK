#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x118E80B0)
#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x118E7B50)
#define MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x118E80F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovPyroisBlinkHoldTeleportSelector_TypeDefinitionIndex = 91600;

	class ZenkovPyroisBlinkHoldTeleportSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		::MoleMole::Config::TeleportSelectionType TeleportType; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* _cachedSelectList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVPYROISBLINKHOLDTELEPORTSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
