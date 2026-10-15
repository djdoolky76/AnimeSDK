#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class HOCGLMNPAPI;
namespace RPG::GameCore { class TaskContext; }

#define ILLHBOHHIOG_CTOR_OFFSET UNITYSDK_OFFSET(0x164B69E0)
#define ILLHBOHHIOG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164B6AC0)

inline static constexpr unsigned int ILLHBOHHIOG_TypeDefinitionIndex = 55053;

	class ILLHBOHHIOG
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::HOCGLMNPAPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::HOCGLMNPAPI*))((::PBYTE)hIl2Cpp + ILLHBOHHIOG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLHBOHHIOG_ONTASKBEGIN_OFFSET))(this);
		}

	};
