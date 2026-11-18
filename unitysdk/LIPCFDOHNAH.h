#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCBDJHHBGHM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HMOPOCGNECJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIPCFDOHNAH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E3B5A80)
#define LIPCFDOHNAH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E3B5F90)
#define LIPCFDOHNAH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E3B5B50)
#define LIPCFDOHNAH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E3B5EE0)
#define LIPCFDOHNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5AC0)

inline static constexpr unsigned int LIPCFDOHNAH_TypeDefinitionIndex = 94441;

class LIPCFDOHNAH : public ::PJBGHMDHHBM
{
public:
	::OCBDJHHBGHM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HMOPOCGNECJ*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCFDOHNAH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCFDOHNAH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + LIPCFDOHNAH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCFDOHNAH_PHOADBJGFBE_OFFSET))(this);
	}

	::HMOPOCGNECJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HMOPOCGNECJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LIPCFDOHNAH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
