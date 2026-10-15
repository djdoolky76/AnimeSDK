#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEPOFEOCDI;
class OCPOIDCNJDA;
class OMPCEECHGJK;
namespace Entitas { class IGroup; }

#define PCGHKFAFCOL_BBLMMNLCMGM_OFFSET UNITYSDK_OFFSET(0xBFFF630)
#define PCGHKFAFCOL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFFF620)
#define PCGHKFAFCOL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBFFF770)
#define PCGHKFAFCOL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBFFF670)

	class PCGHKFAFCOL : public ::System::Object
	{
	public:
		::Entitas::IGroup* CIIFMONKDJK; // 0x10
		::OMPCEECHGJK* PDENFEFCAGN; // 0x18
		::AFEPOFEOCDI* FKINCGODJEP; // 0x20
		::System::Void _ctor(::AFEPOFEOCDI* a1, ::OMPCEECHGJK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AFEPOFEOCDI*, ::OMPCEECHGJK*))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean BBLMMNLCMGM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_BBLMMNLCMGM_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCGHKFAFCOL_EXECUTE_OFFSET))(this);
		}

	};
