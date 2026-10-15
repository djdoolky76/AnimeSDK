#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;

#define NIFIPACDMEF_CTOR_OFFSET UNITYSDK_OFFSET(0xBBE9670)
#define NIFIPACDMEF_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xBBE9AB0)
#define NIFIPACDMEF_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xBBE9A70)
#define NIFIPACDMEF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBBE9690)

	class NIFIPACDMEF : public ::EFNJLACKEDH
	{
	public:
		::GLPPDCIBMIH* HKJLKMCDMGB; // 0x18
		::GLPPDCIBMIH* IBLBKLNHKLL; // 0x20
		::System::UInt32 MPIMEEAIELI; // 0x28
		::System::Boolean JDPGFIBLFOP; // 0x2C
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::GLPPDCIBMIH* a3, ::GLPPDCIBMIH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::GLPPDCIBMIH*, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + NIFIPACDMEF_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIPACDMEF_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIPACDMEF_MGJLINFADJK_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFIPACDMEF_HCOFMFKFMDK_OFFSET))(this);
		}

	};
