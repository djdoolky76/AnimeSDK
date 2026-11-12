#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define MCLDEPJALEA_CTOR_OFFSET UNITYSDK_OFFSET(0xC132C10)
#define MCLDEPJALEA_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xC132D30)
#define MCLDEPJALEA_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC132CC0)
#define MCLDEPJALEA_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC132C20)

inline static constexpr unsigned int MCLDEPJALEA_TypeDefinitionIndex = 61657;

	class MCLDEPJALEA : public ::EFNJLACKEDH
	{
	public:
		::System::UInt32 MPIMEEAIELI; // 0x18
		::System::Boolean PIPLLENMLIM; // 0x1C
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MCLDEPJALEA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLDEPJALEA_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void LLBFBLIGNDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLDEPJALEA_LLBFBLIGNDG_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLDEPJALEA_EEBFMFBOIHN_OFFSET))(this);
		}

	};
