#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MJOPBJKKGPL_CTOR_OFFSET UNITYSDK_OFFSET(0xB9754F0)

inline static constexpr unsigned int MJOPBJKKGPL_TypeDefinitionIndex = 55589;

	class MJOPBJKKGPL : public ::System::Object
	{
	public:
		::System::String* PDPFAPMCMMI; // 0x10
		::System::String* AJHFKOGFFOP; // 0x18
		::RPG::GameCore::FixPoint BCCHCNNIEDB; // 0x20
		::RPG::GameCore::FixPoint EFJAHDEMACL; // 0x28
		::RPG::GameCore::FixPoint HOELGLIGJMC; // 0x30
		::System::Boolean LEFMBOJIBDM; // 0x38
		::System::Boolean FEDOIDAMKEI; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOPBJKKGPL_CTOR_OFFSET))(this);
		}

	};
