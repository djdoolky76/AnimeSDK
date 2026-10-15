#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
#include "unitysdk/RPG/Client/NotifyType.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitForNotifyNoParam; }
namespace System { class Object; }

#define HPHBIMGEOKI_CMMHAKEAFAC_OFFSET UNITYSDK_OFFSET(0x15DBB190)
#define HPHBIMGEOKI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DBAC00)
#define HPHBIMGEOKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DBAEF0)
#define HPHBIMGEOKI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15DBAFA0)
#define HPHBIMGEOKI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15DBB070)
#define HPHBIMGEOKI_TICK_OFFSET UNITYSDK_OFFSET(0x15DBB0C0)

inline static constexpr unsigned int HPHBIMGEOKI_TypeDefinitionIndex = 58891;

	class HPHBIMGEOKI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitForNotifyNoParam* OFKGLJOAMLD; // 0x18
		::MJKLAEILHPK OLMFJLICIIA; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x50
		::RPG::Client::NotifyType NNENGKADBBN; // 0x58
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitForNotifyNoParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitForNotifyNoParam*))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_TICK_OFFSET))(this, a1);
		}

		::System::Void CMMHAKEAFAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPHBIMGEOKI_CMMHAKEAFAC_OFFSET))(this, a1);
		}

	};
