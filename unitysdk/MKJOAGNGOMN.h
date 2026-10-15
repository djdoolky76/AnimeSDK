#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ELJDLJJBFEE;
namespace RPG::GameCore { class TaskContext; }

#define MKJOAGNGOMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB993E90)
#define MKJOAGNGOMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB993F50)
#define MKJOAGNGOMN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB993F90)
#define MKJOAGNGOMN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB993F00)
#define MKJOAGNGOMN_TICK_OFFSET UNITYSDK_OFFSET(0xB993EA0)

inline static constexpr unsigned int MKJOAGNGOMN_TypeDefinitionIndex = 58484;

	class MKJOAGNGOMN : public ::GELIALJDFBL
	{
	public:
		::ELJDLJJBFEE* JKJPFJALGKO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ELJDLJJBFEE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ELJDLJJBFEE*))((::PBYTE)hIl2Cpp + MKJOAGNGOMN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKJOAGNGOMN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJOAGNGOMN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJOAGNGOMN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJOAGNGOMN_ONTASKBEGIN_OFFSET))(this);
		}

	};
