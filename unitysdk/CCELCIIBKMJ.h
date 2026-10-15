#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class GLPPDCIBMIH;

#define CCELCIIBKMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC73A350)
#define CCELCIIBKMJ_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xC73A6B0)
#define CCELCIIBKMJ_LLBFBLIGNDG_OFFSET UNITYSDK_OFFSET(0xC73A4D0)
#define CCELCIIBKMJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC73A370)

inline static constexpr unsigned int CCELCIIBKMJ_TypeDefinitionIndex = 60371;

	class CCELCIIBKMJ : public ::EFNJLACKEDH
	{
	public:
		::GLPPDCIBMIH* OJAHLJGABMJ; // 0x18
		::System::Boolean JDPGFIBLFOP; // 0x20
		::System::Boolean ILLBOOLGFBO; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 MPIMEEAIELI; // 0x24
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Boolean a3, ::GLPPDCIBMIH* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Boolean, ::GLPPDCIBMIH*))((::PBYTE)hIl2Cpp + CCELCIIBKMJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCELCIIBKMJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void LLBFBLIGNDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCELCIIBKMJ_LLBFBLIGNDG_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCELCIIBKMJ_EEBFMFBOIHN_OFFSET))(this);
		}

	};
