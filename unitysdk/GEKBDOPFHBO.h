#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RemoveMapPoseSwitcher; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GEKBDOPFHBO_CTOR_OFFSET UNITYSDK_OFFSET(0x159DED70)
#define GEKBDOPFHBO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159DED80)
#define GEKBDOPFHBO_NODEDPINMHN_OFFSET UNITYSDK_OFFSET(0x159DF060)
#define GEKBDOPFHBO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159DEEB0)
#define GEKBDOPFHBO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x159DEE00)
#define GEKBDOPFHBO_TICK_OFFSET UNITYSDK_OFFSET(0x159DEE50)

inline static constexpr unsigned int GEKBDOPFHBO_TypeDefinitionIndex = 52998;

	class GEKBDOPFHBO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::RemoveMapPoseSwitcher* IGHAHBNLIJA; // 0x20
		::System::UInt32 GEFEOLMLPJN; // 0x28
		::System::UInt32 BCAGKLKAFCF; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RemoveMapPoseSwitcher* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RemoveMapPoseSwitcher*))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void NODEDPINMHN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GEKBDOPFHBO_NODEDPINMHN_OFFSET))(this, a1, a2);
		}

	};
