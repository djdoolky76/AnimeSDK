#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGCOKMCMMPB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OBLMELFLIKL;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MBDNIEOEOAO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E887590)
#define MBDNIEOEOAO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E887AA0)
#define MBDNIEOEOAO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E887660)
#define MBDNIEOEOAO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E8879F0)
#define MBDNIEOEOAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8875D0)

inline static constexpr unsigned int MBDNIEOEOAO_TypeDefinitionIndex = 94606;

class MBDNIEOEOAO : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OBLMELFLIKL*>* JMINOGAOFIL; // 0x18
	::IGCOKMCMMPB DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDNIEOEOAO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDNIEOEOAO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MBDNIEOEOAO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::OBLMELFLIKL* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OBLMELFLIKL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MBDNIEOEOAO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDNIEOEOAO_PHOADBJGFBE_OFFSET))(this);
	}
};
