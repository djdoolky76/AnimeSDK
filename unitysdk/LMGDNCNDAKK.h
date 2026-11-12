#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IRogueTournPersonaStyle; }

#define LMGDNCNDAKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC020A20)
#define LMGDNCNDAKK_GET_STYLE_OFFSET UNITYSDK_OFFSET(0xC020A80)
#define LMGDNCNDAKK_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0xC020A30)

inline static constexpr unsigned int LMGDNCNDAKK_TypeDefinitionIndex = 68982;

	class LMGDNCNDAKK : public ::System::Object
	{
	public:
		::RPG::Client::IRogueTournPersonaStyle* _Style_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::IRogueTournPersonaStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyle*))((::PBYTE)hIl2Cpp + LMGDNCNDAKK_CTOR_OFFSET))(this, a1);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGDNCNDAKK_TRIGGERACTION_OFFSET))(this);
		}

		::RPG::Client::IRogueTournPersonaStyle* get_Style()
		{
			return ((::RPG::Client::IRogueTournPersonaStyle*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMGDNCNDAKK_GET_STYLE_OFFSET))(this);
		}

	};
