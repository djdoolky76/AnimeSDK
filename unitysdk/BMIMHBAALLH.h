#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SyncWait; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define BMIMHBAALLH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDBD480)
#define BMIMHBAALLH_DILEJHCIPBJ_OFFSET UNITYSDK_OFFSET(0xBDBD6F0)
#define BMIMHBAALLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDBD490)
#define BMIMHBAALLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDBD4D0)
#define BMIMHBAALLH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBDBD5E0)
#define BMIMHBAALLH_TICK_OFFSET UNITYSDK_OFFSET(0xBDBD690)

inline static constexpr unsigned int BMIMHBAALLH_TypeDefinitionIndex = 53325;

	class BMIMHBAALLH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SyncWait* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SyncWait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SyncWait*))((::PBYTE)hIl2Cpp + BMIMHBAALLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIMHBAALLH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIMHBAALLH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIMHBAALLH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BMIMHBAALLH_TICK_OFFSET))(this, a1);
		}

		::System::Void DILEJHCIPBJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + BMIMHBAALLH_DILEJHCIPBJ_OFFSET))(this, a1, a2);
		}

	};
