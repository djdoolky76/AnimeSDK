#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetDynamicAttachPointEffectAdaptionConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Text::RegularExpressions { class Regex; }

#define KKJFMJGFJGO_CTOR_OFFSET UNITYSDK_OFFSET(0xB4C7810)
#define KKJFMJGFJGO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4C7840)

inline static constexpr unsigned int KKJFMJGFJGO_TypeDefinitionIndex = 55397;

	class KKJFMJGFJGO
	{
	public:
		::System::Text::RegularExpressions::Regex* BGNEGFEMHIJ; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicAttachPointEffectAdaptionConfig*))((::PBYTE)hIl2Cpp + KKJFMJGFJGO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJFMJGFJGO_ONTASKBEGIN_OFFSET))(this);
		}

	};
