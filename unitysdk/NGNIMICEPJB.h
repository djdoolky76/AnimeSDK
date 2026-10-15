#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;

#define NGNIMICEPJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAAEC0)
#define NGNIMICEPJB_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xBBAAF10)
#define NGNIMICEPJB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBBAAED0)

inline static constexpr unsigned int NGNIMICEPJB_TypeDefinitionIndex = 60369;

	class NGNIMICEPJB : public ::EFNJLACKEDH
	{
	public:
		::GLPPDCIBMIH* HKJLKMCDMGB; // 0x18
		::System::UInt32 MPIMEEAIELI; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::GLPPDCIBMIH* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + NGNIMICEPJB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNIMICEPJB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNIMICEPJB_HCOFMFKFMDK_OFFSET))(this);
		}

	};
