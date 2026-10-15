#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AdvModifierListenPhotograph; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define DKFENHCBKKL_ADCAHFNLFGG_OFFSET UNITYSDK_OFFSET(0xF87AE80)
#define DKFENHCBKKL_CIDINBJBOJE_OFFSET UNITYSDK_OFFSET(0xF87AD10)
#define DKFENHCBKKL_CTOR_OFFSET UNITYSDK_OFFSET(0xF87A7B0)
#define DKFENHCBKKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF87AA80)
#define DKFENHCBKKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF87A8B0)
#define DKFENHCBKKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF87A9B0)
#define DKFENHCBKKL_TICK_OFFSET UNITYSDK_OFFSET(0xF87ACB0)

	class DKFENHCBKKL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvModifierListenPhotograph* OFKGLJOAMLD; // 0x18
		::KFELGAIGHAP* DDHDKBNKPAM; // 0x20
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* CIAELKANOIB; // 0x38
		::RPG::GameCore::GameEntity* MOBJADOMNGJ; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvModifierListenPhotograph* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvModifierListenPhotograph*))((::PBYTE)hIl2Cpp + DKFENHCBKKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFENHCBKKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFENHCBKKL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFENHCBKKL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DKFENHCBKKL_TICK_OFFSET))(this, a1);
		}

		::System::Void CIDINBJBOJE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKFENHCBKKL_CIDINBJBOJE_OFFSET))(this, a1);
		}

		::System::Void ADCAHFNLFGG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DKFENHCBKKL_ADCAHFNLFGG_OFFSET))(this, a1);
		}

	};
