#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJFANDEAJNN;
class HPOCHBIJIHH;
class OBJANKHLNGO;

#define LHHCFCCKIJM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6AA870)
#define LHHCFCCKIJM_JCOGDJBICJC_OFFSET UNITYSDK_OFFSET(0xB6AA9E0)
#define LHHCFCCKIJM_START_OFFSET UNITYSDK_OFFSET(0xB6AA8F0)
#define LHHCFCCKIJM_STOP_OFFSET UNITYSDK_OFFSET(0xB6AA980)

inline static constexpr unsigned int LHHCFCCKIJM_TypeDefinitionIndex = 81075;

	class LHHCFCCKIJM : public ::System::Object
	{
	public:
		::HPOCHBIJIHH* PODJBLOPDAK; // 0x10
		::OBJANKHLNGO* GJALMBBNNOF; // 0x18
		::System::Void _ctor(::HPOCHBIJIHH* a1, ::OBJANKHLNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPOCHBIJIHH*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + LHHCFCCKIJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCFCCKIJM_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHCFCCKIJM_STOP_OFFSET))(this);
		}

		::System::Void JCOGDJBICJC(::GJFANDEAJNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJFANDEAJNN*))((::PBYTE)hIl2Cpp + LHHCFCCKIJM_JCOGDJBICJC_OFFSET))(this, a1);
		}

	};
