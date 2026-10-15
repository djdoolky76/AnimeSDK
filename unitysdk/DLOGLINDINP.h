#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class OEGDBPLMIAE;

#define DLOGLINDINP_CTOR_OFFSET UNITYSDK_OFFSET(0xF8BC1E0)
#define DLOGLINDINP_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xF8BC270)
#define DLOGLINDINP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xF8BC1F0)

inline static constexpr unsigned int DLOGLINDINP_TypeDefinitionIndex = 60376;

	class DLOGLINDINP : public ::EFNJLACKEDH
	{
	public:
		::OEGDBPLMIAE* JHNMKNCEDDD; // 0x18
		::System::UInt32 MOMHJEFJDOF; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::OEGDBPLMIAE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::OEGDBPLMIAE*))((::PBYTE)hIl2Cpp + DLOGLINDINP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOGLINDINP_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLOGLINDINP_EEBFMFBOIHN_OFFSET))(this);
		}

	};
