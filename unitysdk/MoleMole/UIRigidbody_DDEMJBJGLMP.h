#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP_NPAONPMEFDF_OFFSET UNITYSDK_OFFSET(0x15C5BA60)
#define MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP_PEJHFJPPAED_OFFSET UNITYSDK_OFFSET(0x15C5BA70)
#define MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15C5BA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_DDEMJBJGLMP_TypeDefinitionIndex = 91374;

	class UIRigidbody_DDEMJBJGLMP : public ::System::Object
	{
	public:
		::MoleMole::UIRigidbody* KLHPEBKNIFB; // 0x10
		::System::Single IMLLDOHDCNC; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP__CTOR_OFFSET))(this);
		}

		::System::Single NPAONPMEFDF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP_NPAONPMEFDF_OFFSET))(this);
		}

		::System::Void PEJHFJPPAED(::System::Single HFMHOELKCAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_DDEMJBJGLMP_PEJHFJPPAED_OFFSET))(this, HFMHOELKCAJ);
		}
	};
}
