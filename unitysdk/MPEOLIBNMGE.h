#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class CNBNDKINGBF;
class FIEEBCKMKDF;
class LEODIDNFCKO;
class OHPJBMJAJML;

#define MPEOLIBNMGE_BKPMNOOAGDM_OFFSET UNITYSDK_OFFSET(0x1C544890)
#define MPEOLIBNMGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C544870)

inline static constexpr unsigned int MPEOLIBNMGE_TypeDefinitionIndex = 41861;

	class MPEOLIBNMGE : public ::System::Object
	{
	public:
		::LEODIDNFCKO* CDKHAIMKMLO; // 0x10
		::CNBNDKINGBF* FACKNHDNAGL; // 0x18
		::OHPJBMJAJML* EPAEMMEAAMB; // 0x20
		::BEEJHBCIGGI* ILPEEPDIPHL; // 0x28
		::System::Void _ctor(::LEODIDNFCKO* a1, ::OHPJBMJAJML* a2, ::BEEJHBCIGGI* a3, ::CNBNDKINGBF* a4)
		{
			return ((::System::Void(*)(::PVOID, ::LEODIDNFCKO*, ::OHPJBMJAJML*, ::BEEJHBCIGGI*, ::CNBNDKINGBF*))((::PBYTE)hIl2Cpp + MPEOLIBNMGE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::FIEEBCKMKDF* BKPMNOOAGDM(::System::UInt32 a1)
		{
			return ((::FIEEBCKMKDF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPEOLIBNMGE_BKPMNOOAGDM_OFFSET))(this, a1);
		}

	};
