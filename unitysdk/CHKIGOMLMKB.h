#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByStanceCount; }
namespace RPG::GameCore { class TaskContext; }

#define CHKIGOMLMKB_CTOR_OFFSET UNITYSDK_OFFSET(0xCF54E50)
#define CHKIGOMLMKB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF54F30)

inline static constexpr unsigned int CHKIGOMLMKB_TypeDefinitionIndex = 55469;

	class CHKIGOMLMKB
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByStanceCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByStanceCount*))((::PBYTE)hIl2Cpp + CHKIGOMLMKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKIGOMLMKB_ONTASKBEGIN_OFFSET))(this);
		}

	};
