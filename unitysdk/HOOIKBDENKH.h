#pragma once
#include "unitysdk/unitysdk.h"
class ABELNLAOFEI;
namespace RPG::GameCore { class TaskContext; }

#define HOOIKBDENKH_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB1C70)
#define HOOIKBDENKH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DB1CA0)

inline static constexpr unsigned int HOOIKBDENKH_TypeDefinitionIndex = 55033;

	class HOOIKBDENKH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ABELNLAOFEI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ABELNLAOFEI*))((::PBYTE)hIl2Cpp + HOOIKBDENKH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOIKBDENKH_ONTASKBEGIN_OFFSET))(this);
		}

	};
