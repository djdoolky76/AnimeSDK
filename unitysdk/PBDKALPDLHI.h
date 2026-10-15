#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define PBDKALPDLHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBFDDA10)
#define PBDKALPDLHI_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xBFDDAC0)
#define PBDKALPDLHI_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBFDDA20)

inline static constexpr unsigned int PBDKALPDLHI_TypeDefinitionIndex = 60367;

	class PBDKALPDLHI : public ::EFNJLACKEDH
	{
	public:
		::System::Boolean BECBGNIHODM; // 0x18
		::System::Boolean JDPGFIBLFOP; // 0x19
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBDKALPDLHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKALPDLHI_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBDKALPDLHI_HCOFMFKFMDK_OFFSET))(this);
		}

	};
