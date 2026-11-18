#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICIAEPPMOMP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIRABLevelBossSkillRowWidgetController_Context; }

#define MNPGCFFJENB_OJHNMMFIAIP_NNCBJMNAHAD_OFFSET UNITYSDK_OFFSET(0x131A7320)
#define MNPGCFFJENB_OJHNMMFIAIP__CTOR_OFFSET UNITYSDK_OFFSET(0x131A7310)

inline static constexpr unsigned int MNPGCFFJENB_OJHNMMFIAIP_TypeDefinitionIndex = 78016;

class MNPGCFFJENB_OJHNMMFIAIP : public ::System::Object
{
public:
	::System::Int32 GIAOKGFENJD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGCFFJENB_OJHNMMFIAIP__CTOR_OFFSET))(this);
	}

	::MoleMole::UIRABLevelBossSkillRowWidgetController_Context* NNCBJMNAHAD(::System::ValueTuple_2<::System::Int32, ::ICIAEPPMOMP> IPMMCGDMODG)
	{
		return ((::MoleMole::UIRABLevelBossSkillRowWidgetController_Context*(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::ICIAEPPMOMP>))((::PBYTE)hIl2Cpp + MNPGCFFJENB_OJHNMMFIAIP_NNCBJMNAHAD_OFFSET))(this, IPMMCGDMODG);
	}
};
