#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class LFJJMNNJEEK;
namespace RPG::GameCore { class TaskContext; }

#define MOGMLLOPJBM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA26CB0)
#define MOGMLLOPJBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA26D90)

inline static constexpr unsigned int MOGMLLOPJBM_TypeDefinitionIndex = 55054;

	class MOGMLLOPJBM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LFJJMNNJEEK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LFJJMNNJEEK*))((::PBYTE)hIl2Cpp + MOGMLLOPJBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLLOPJBM_ONTASKBEGIN_OFFSET))(this);
		}

	};
