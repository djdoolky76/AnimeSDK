#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueDLC1Dot3AdventureRoomPrepare; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define ENOACPMIKCL_CTOR_OFFSET UNITYSDK_OFFSET(0x155A8A40)
#define ENOACPMIKCL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155A8A50)
#define ENOACPMIKCL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155A8AF0)
#define ENOACPMIKCL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155A8D40)
#define ENOACPMIKCL_PFFCCGKGLKF_OFFSET UNITYSDK_OFFSET(0x155A8E00)
#define ENOACPMIKCL_TICK_OFFSET UNITYSDK_OFFSET(0x155A8A90)

inline static constexpr unsigned int ENOACPMIKCL_TypeDefinitionIndex = 58447;

	class ENOACPMIKCL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3AdventureRoomPrepare*))((::PBYTE)hIl2Cpp + ENOACPMIKCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOACPMIKCL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENOACPMIKCL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOACPMIKCL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOACPMIKCL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void PFFCCGKGLKF(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + ENOACPMIKCL_PFFCCGKGLKF_OFFSET))(this, a1, a2);
		}

	};
