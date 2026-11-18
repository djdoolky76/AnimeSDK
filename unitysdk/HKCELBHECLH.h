#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBHFEBFMGKO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class ACHEIDGFEID;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HKCELBHECLH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EA16FC0)
#define HKCELBHECLH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1EA174D0)
#define HKCELBHECLH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EA17090)
#define HKCELBHECLH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EA17420)
#define HKCELBHECLH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA17000)

inline static constexpr unsigned int HKCELBHECLH_TypeDefinitionIndex = 94865;

class HKCELBHECLH : public ::PJBGHMDHHBM
{
public:
	::JBHFEBFMGKO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ACHEIDGFEID*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCELBHECLH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCELBHECLH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HKCELBHECLH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::ACHEIDGFEID* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::ACHEIDGFEID*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HKCELBHECLH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKCELBHECLH_PHOADBJGFBE_OFFSET))(this);
	}
};
