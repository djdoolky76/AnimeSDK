#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFLCBCBGMLI;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }

#define GBLLOCGMMPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15952470)

inline static constexpr unsigned int GBLLOCGMMPO_TypeDefinitionIndex = 55382;

	class GBLLOCGMMPO : public ::System::Object
	{
	public:
		::System::String* JCCECKDNGKH; // 0x10
		::System::String* BOGKOCFEIBL; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* NGBAPOEDIOJ; // 0x20
		::System::String* MPKMGIEAFCO; // 0x28
		::FFLCBCBGMLI* MIPCILCJBMP; // 0x30
		::System::Boolean KLOCJMNLBOP; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLLOCGMMPO_CTOR_OFFSET))(this);
		}

	};
