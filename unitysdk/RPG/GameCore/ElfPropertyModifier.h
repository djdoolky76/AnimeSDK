#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfProperty.h"
#include "unitysdk/RPG/GameCore/ElfPropertyOperation.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfPropertyModifier; }
namespace System { class String; }

#define RPG_GAMECORE_ELFPROPERTYMODIFIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D637900)
#define RPG_GAMECORE_ELFPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D637770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfPropertyModifier_TypeDefinitionIndex = 18488;

	class ElfPropertyModifier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ElfProperty Property; // 0x10
		::RPG::GameCore::ElfPropertyOperation Operation; // 0x14
		::System::String* Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROPERTYMODIFIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfPropertyModifier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfPropertyModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFPROPERTYMODIFIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
