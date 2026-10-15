#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNEBINMALON;
namespace RPG::Client { class ComposeItemCost; }
namespace RPG::Client { class ComposeItemData; }
namespace RPG::GameCore { class ItemConfig; }

#define GIFOLHLECBI_BHENJJJJEDD_OFFSET UNITYSDK_OFFSET(0x15A2A850)
#define GIFOLHLECBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2A9C0)
#define GIFOLHLECBI_LAIOBHPLOAL_OFFSET UNITYSDK_OFFSET(0x15A2A650)

inline static constexpr unsigned int GIFOLHLECBI_TypeDefinitionIndex = 65705;

	class GIFOLHLECBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIFOLHLECBI_CTOR_OFFSET))(this);
		}

		::System::Void LAIOBHPLOAL(::PNEBINMALON* a1, ::RPG::Client::ComposeItemData* a2, ::RPG::GameCore::ItemConfig* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::RPG::Client::ComposeItemCost* a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::RPG::Client::ComposeItemData*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ComposeItemCost*, ::System::Boolean))((::PBYTE)hIl2Cpp + GIFOLHLECBI_LAIOBHPLOAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void BHENJJJJEDD(::PNEBINMALON* a1, ::RPG::Client::ComposeItemCost* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNEBINMALON*, ::RPG::Client::ComposeItemCost*))((::PBYTE)hIl2Cpp + GIFOLHLECBI_BHENJJJJEDD_OFFSET))(this, a1, a2);
		}

	};
