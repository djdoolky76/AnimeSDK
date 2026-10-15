#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define MFOAEOIAFNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB909500)
#define MFOAEOIAFNA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9096D0)
#define MFOAEOIAFNA_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xB909610)
#define MFOAEOIAFNA_HMOONNAFBJK_OFFSET UNITYSDK_OFFSET(0xB909590)
#define MFOAEOIAFNA_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xB909720)

inline static constexpr unsigned int MFOAEOIAFNA_TypeDefinitionIndex = 75458;

	class MFOAEOIAFNA : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::Boolean AFLGDFPEMNP; // 0x18
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + MFOAEOIAFNA_CTOR_OFFSET))(this, a1);
		}

		::System::Void HMOONNAFBJK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFOAEOIAFNA_HMOONNAFBJK_OFFSET))(this, a1);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOAEOIAFNA_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFOAEOIAFNA_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MFOAEOIAFNA_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
