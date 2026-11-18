#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIHOCOBJOEI.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GLKLGNPCAMI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGBDGLDFACE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E4E2040)
#define NGBDGLDFACE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E4E25E0)
#define NGBDGLDFACE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E4E21C0)
#define NGBDGLDFACE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E4E2110)
#define NGBDGLDFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E2080)

inline static constexpr unsigned int NGBDGLDFACE_TypeDefinitionIndex = 94330;

class NGBDGLDFACE : public ::PJBGHMDHHBM
{
public:
	::LIHOCOBJOEI DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GLKLGNPCAMI*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBDGLDFACE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBDGLDFACE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBDGLDFACE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NGBDGLDFACE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::GLKLGNPCAMI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::GLKLGNPCAMI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NGBDGLDFACE_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
