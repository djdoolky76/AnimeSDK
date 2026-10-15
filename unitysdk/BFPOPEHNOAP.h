#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define BFPOPEHNOAP_CTOR_OFFSET UNITYSDK_OFFSET(0xB173ED0)
#define BFPOPEHNOAP_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB173DE0)

inline static constexpr unsigned int BFPOPEHNOAP_TypeDefinitionIndex = 55600;

	class BFPOPEHNOAP : public ::System::Object
	{
	public:
		::System::String* IFNAGLOMHBK; // 0x10
		::System::UInt32 KPLDHNOGLDC; // 0x18
		::System::UInt32 OMIPHFPGKAC; // 0x1C
		::System::Int32 BJOBFAIMJAE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPOPEHNOAP_CTOR_OFFSET))(this);
		}

		::System::Boolean GNADABFLEFM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BFPOPEHNOAP_GNADABFLEFM_OFFSET))(this, a1);
		}

	};
