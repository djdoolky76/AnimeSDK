#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerCheckpointRecover; }
namespace System { class Object; }

#define ONNJLPLBEAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF58250)
#define ONNJLPLBEAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF58260)
#define ONNJLPLBEAA_LJMFCBPLEEC_OFFSET UNITYSDK_OFFSET(0xBF58380)
#define ONNJLPLBEAA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF58300)
#define ONNJLPLBEAA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF584C0)
#define ONNJLPLBEAA_TICK_OFFSET UNITYSDK_OFFSET(0xBF582A0)

inline static constexpr unsigned int ONNJLPLBEAA_TypeDefinitionIndex = 58773;

	class ONNJLPLBEAA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerCheckpointRecover* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerCheckpointRecover* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerCheckpointRecover*))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void LJMFCBPLEEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_LJMFCBPLEEC_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNJLPLBEAA_ONTASKRESET_OFFSET))(this);
		}

	};
