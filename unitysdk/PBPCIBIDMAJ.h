#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SwitchHandResetTransform; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PBPCIBIDMAJ_AEFNKDCHOFN_OFFSET UNITYSDK_OFFSET(0xBFF0930)
#define PBPCIBIDMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF01A0)
#define PBPCIBIDMAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF01B0)
#define PBPCIBIDMAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFF0320)
#define PBPCIBIDMAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFF0200)
#define PBPCIBIDMAJ_TICK_OFFSET UNITYSDK_OFFSET(0xBFF02C0)

inline static constexpr unsigned int PBPCIBIDMAJ_TypeDefinitionIndex = 53318;

	class PBPCIBIDMAJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SwitchHandResetTransform* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandResetTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandResetTransform*))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AEFNKDCHOFN(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + PBPCIBIDMAJ_AEFNKDCHOFN_OFFSET))(this, a1, a2);
		}

	};
