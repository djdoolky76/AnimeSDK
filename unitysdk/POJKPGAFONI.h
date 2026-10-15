#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class QuestProgressChangeListener; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define POJKPGAFONI_CTOR_OFFSET UNITYSDK_OFFSET(0xC365B80)
#define POJKPGAFONI_DFJAMCIAJPP_OFFSET UNITYSDK_OFFSET(0xC365E00)
#define POJKPGAFONI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC365E90)
#define POJKPGAFONI_NPKJMIHJACM_OFFSET UNITYSDK_OFFSET(0xC366240)
#define POJKPGAFONI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC365BA0)
#define POJKPGAFONI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC365D40)
#define POJKPGAFONI_TICK_OFFSET UNITYSDK_OFFSET(0xC365FF0)

inline static constexpr unsigned int POJKPGAFONI_TypeDefinitionIndex = 58370;

	class POJKPGAFONI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::QuestProgressChangeListener* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::GELIALJDFBL* MJOEBIHKEIG; // 0x28
		::System::Boolean BJIMNGNKDGD; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 AIDHKEPNBKJ; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::QuestProgressChangeListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::QuestProgressChangeListener*))((::PBYTE)hIl2Cpp + POJKPGAFONI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJKPGAFONI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJKPGAFONI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJKPGAFONI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POJKPGAFONI_TICK_OFFSET))(this, a1);
		}

		::System::Void DFJAMCIAJPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POJKPGAFONI_DFJAMCIAJPP_OFFSET))(this);
		}

		::System::Void NPKJMIHJACM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POJKPGAFONI_NPKJMIHJACM_OFFSET))(this, a1);
		}

	};
