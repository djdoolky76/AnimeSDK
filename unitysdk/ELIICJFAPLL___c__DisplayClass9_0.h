#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKMBGNOKAFF;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }

#define ELIICJFAPLL___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15523070)
#define ELIICJFAPLL___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x155230C0)

inline static constexpr unsigned int ELIICJFAPLL___c__DisplayClass9_0_TypeDefinitionIndex = 57265;

	class ELIICJFAPLL___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FreeStyleAnimGroupEventConfig* groupEventConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIICJFAPLL___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateClipGroupEvents_b__0(::FKMBGNOKAFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKMBGNOKAFF*))((::PBYTE)hIl2Cpp + ELIICJFAPLL___C__DISPLAYCLASS9_0__GENERATECLIPGROUPEVENTS_B__0_OFFSET))(this, a1);
		}

	};
