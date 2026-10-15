#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
namespace RPG::GameCore { class ConvinceMovePrevTurn; }
namespace RPG::GameCore { class TaskContext; }

#define AIFGEHNPKBH_CTOR_OFFSET UNITYSDK_OFFSET(0xEB9DE20)
#define AIFGEHNPKBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB9DE50)
#define AIFGEHNPKBH_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xEB9E030)

inline static constexpr unsigned int AIFGEHNPKBH_TypeDefinitionIndex = 52708;

	class AIFGEHNPKBH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + AIFGEHNPKBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFGEHNPKBH_ONTASKBEGIN_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + AIFGEHNPKBH_SETNEXTTASK_OFFSET))(this, a1);
		}

	};
