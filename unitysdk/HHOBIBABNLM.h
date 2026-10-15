#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }

#define HHOBIBABNLM_CTOR_OFFSET UNITYSDK_OFFSET(0x15CD4F80)

inline static constexpr unsigned int HHOBIBABNLM_TypeDefinitionIndex = 55333;

	class HHOBIBABNLM : public ::System::Object
	{
	public:
		::System::String* OLOIFNNLKJP; // 0x10
		::RPG::GameCore::GameEntityList* GEGKCAOLMOH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHOBIBABNLM_CTOR_OFFSET))(this);
		}

	};
