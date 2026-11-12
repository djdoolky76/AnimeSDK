#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReturnToLoginPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GBELKBPKBLJ_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0x168802F0)
#define GBELKBPKBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16880140)
#define GBELKBPKBLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16880150)
#define GBELKBPKBLJ_LCAHFHMKLHE_OFFSET UNITYSDK_OFFSET(0x168804E0)
#define GBELKBPKBLJ_MHKAFGGBAPF_OFFSET UNITYSDK_OFFSET(0x168803B0)
#define GBELKBPKBLJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16880260)
#define GBELKBPKBLJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16880430)
#define GBELKBPKBLJ_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0x168801A0)
#define GBELKBPKBLJ_TICK_OFFSET UNITYSDK_OFFSET(0x16880480)

inline static constexpr unsigned int GBELKBPKBLJ_TypeDefinitionIndex = 54373;

	class GBELKBPKBLJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ReturnToLoginPage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReturnToLoginPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReturnToLoginPage*))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_TICK_OFFSET))(this, a1);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void LCAHFHMKLHE(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_LCAHFHMKLHE_OFFSET))(this, a1, a2);
		}

		::System::Void MHKAFGGBAPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBELKBPKBLJ_MHKAFGGBAPF_OFFSET))(this);
		}

	};
