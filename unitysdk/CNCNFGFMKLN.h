#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityConfig; }

#define CNCNFGFMKLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB17020)

inline static constexpr unsigned int CNCNFGFMKLN_TypeDefinitionIndex = 43869;

	class CNCNFGFMKLN : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*>* EJHODPJIFIN; // 0x10
		::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x18
		::IOGNBKGNPFD* PFGIMMJLOHB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNCNFGFMKLN_CTOR_OFFSET))(this);
		}

	};
