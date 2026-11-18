#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMDGLAPFEKD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CLGPCKKFCNI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDFGDAIBLHB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCA5C30)
#define BDFGDAIBLHB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CCA5D00)
#define BDFGDAIBLHB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCA5F80)
#define BDFGDAIBLHB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCA5ED0)
#define BDFGDAIBLHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA5C70)

inline static constexpr unsigned int BDFGDAIBLHB_TypeDefinitionIndex = 93862;

class BDFGDAIBLHB : public ::PJBGHMDHHBM
{
public:
	::KMDGLAPFEKD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CLGPCKKFCNI*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFGDAIBLHB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFGDAIBLHB_BHLAEBMEOLO_OFFSET))(this);
	}

	::CLGPCKKFCNI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CLGPCKKFCNI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDFGDAIBLHB_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFGDAIBLHB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDFGDAIBLHB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
