#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MJOPBJKKGPL_CTOR_OFFSET UNITYSDK_OFFSET(0xC235860)

inline static constexpr unsigned int MJOPBJKKGPL_TypeDefinitionIndex = 56785;

	class MJOPBJKKGPL : public ::System::Object
	{
	public:
		::System::String* AJHFKOGFFOP; // 0x10
		::System::String* PDPFAPMCMMI; // 0x18
		::System::Boolean LEFMBOJIBDM; // 0x20
		::System::Boolean FEDOIDAMKEI; // 0x21
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint EFJAHDEMACL; // 0x28
		::RPG::GameCore::FixPoint BCCHCNNIEDB; // 0x30
		::RPG::GameCore::FixPoint HOELGLIGJMC; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOPBJKKGPL_CTOR_OFFSET))(this);
		}

	};
