#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroUseBullet; }

#define MKLMJODOJDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB997080)
#define MKLMJODOJDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9970B0)

inline static constexpr unsigned int MKLMJODOJDJ_TypeDefinitionIndex = 58968;

	class MKLMJODOJDJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroUseBullet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroUseBullet*))((::PBYTE)hIl2Cpp + MKLMJODOJDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLMJODOJDJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
