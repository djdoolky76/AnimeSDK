#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPAPIOILGBN.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CJOPLPOFDPC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PKFDANKOOPH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E88BEC0)
#define PKFDANKOOPH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E88C3C0)
#define PKFDANKOOPH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E88C040)
#define PKFDANKOOPH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E88BF90)
#define PKFDANKOOPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E88BF00)

inline static constexpr unsigned int PKFDANKOOPH_TypeDefinitionIndex = 94491;

class PKFDANKOOPH : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CJOPLPOFDPC*>* JMINOGAOFIL; // 0x18
	::GPAPIOILGBN DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFDANKOOPH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFDANKOOPH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFDANKOOPH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + PKFDANKOOPH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::CJOPLPOFDPC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CJOPLPOFDPC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PKFDANKOOPH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
