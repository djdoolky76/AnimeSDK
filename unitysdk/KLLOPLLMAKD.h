#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class PDDFOHKDPFF;
namespace RPG::GameCore { class TaskContext; }

#define KLLOPLLMAKD_CTOR_OFFSET UNITYSDK_OFFSET(0xB528490)
#define KLLOPLLMAKD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5286B0)
#define KLLOPLLMAKD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5284A0)
#define KLLOPLLMAKD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB528600)
#define KLLOPLLMAKD_TICK_OFFSET UNITYSDK_OFFSET(0xB528650)
#define KLLOPLLMAKD__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xB528730)

inline static constexpr unsigned int KLLOPLLMAKD_TypeDefinitionIndex = 52814;

	class KLLOPLLMAKD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::PDDFOHKDPFF* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::PDDFOHKDPFF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::PDDFOHKDPFF*))((::PBYTE)hIl2Cpp + KLLOPLLMAKD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOPLLMAKD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOPLLMAKD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLLOPLLMAKD_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOPLLMAKD_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLLOPLLMAKD__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
