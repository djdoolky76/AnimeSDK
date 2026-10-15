#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class LAJIKDENEOO;
namespace RPG::GameCore { class TaskContext; }

#define MLPGJCBIJED_CTOR_OFFSET UNITYSDK_OFFSET(0xB9BB3C0)
#define MLPGJCBIJED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9BB4A0)
#define MLPGJCBIJED_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB9BB880)

inline static constexpr unsigned int MLPGJCBIJED_TypeDefinitionIndex = 54919;

	class MLPGJCBIJED
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LAJIKDENEOO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LAJIKDENEOO*))((::PBYTE)hIl2Cpp + MLPGJCBIJED_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGJCBIJED_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPGJCBIJED_ONTASKRESET_OFFSET))(this);
		}

	};
