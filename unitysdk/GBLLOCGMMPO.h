#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFLCBCBGMLI;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define GBLLOCGMMPO_CTOR_OFFSET UNITYSDK_OFFSET(0x159474E0)

inline static constexpr unsigned int GBLLOCGMMPO_TypeDefinitionIndex = 55382;

	class GBLLOCGMMPO : public ::System::Object
	{
	public:
		::System::String* JCCECKDNGKH; // 0x10
		::FFLCBCBGMLI* MIPCILCJBMP; // 0x18
		::System::String* MPKMGIEAFCO; // 0x20
		::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x28
		::System::String* BOGKOCFEIBL; // 0x30
		::System::Boolean KLOCJMNLBOP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLLOCGMMPO_CTOR_OFFSET))(this);
		}

	};
