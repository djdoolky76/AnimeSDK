#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class NKLOMENKLHK;
namespace RPG::GameCore { class TaskContext; }

#define FFFJBFBHLNH_CTOR_OFFSET UNITYSDK_OFFSET(0x15729830)
#define FFFJBFBHLNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15729910)
#define FFFJBFBHLNH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15729B80)

inline static constexpr unsigned int FFFJBFBHLNH_TypeDefinitionIndex = 55171;

	class FFFJBFBHLNH
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NKLOMENKLHK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NKLOMENKLHK*))((::PBYTE)hIl2Cpp + FFFJBFBHLNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJBFBHLNH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFFJBFBHLNH_ONTASKRESET_OFFSET))(this);
		}

	};
