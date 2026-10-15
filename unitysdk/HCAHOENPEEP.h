#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMHFBHIAAL;
class DODPFANHNDG;
class ICCLDNDNHPD;
namespace System { class Action; }

#define HCAHOENPEEP_CTOR_OFFSET UNITYSDK_OFFSET(0x15C160E0)
#define HCAHOENPEEP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15C16160)
#define HCAHOENPEEP_TICK_OFFSET UNITYSDK_OFFSET(0x15C16390)

inline static constexpr unsigned int HCAHOENPEEP_TypeDefinitionIndex = 77659;

	class HCAHOENPEEP : public ::System::Object
	{
	public:
		::DODPFANHNDG* JCLEPMNPBAP; // 0x10
		::System::Void _ctor(::BFMHFBHIAAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFMHFBHIAAL*))((::PBYTE)hIl2Cpp + HCAHOENPEEP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Execute(::ICCLDNDNHPD* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICCLDNDNHPD*, ::System::Action*))((::PBYTE)hIl2Cpp + HCAHOENPEEP_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HCAHOENPEEP_TICK_OFFSET))(this, a1);
		}

	};
