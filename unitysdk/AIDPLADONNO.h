#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKIBBJHIFIK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class NHGJMPBKDCF;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AIDPLADONNO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E738110)
#define AIDPLADONNO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E7381E0)
#define AIDPLADONNO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E738460)
#define AIDPLADONNO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E7383B0)
#define AIDPLADONNO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E738150)

inline static constexpr unsigned int AIDPLADONNO_TypeDefinitionIndex = 94685;

class AIDPLADONNO : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::NHGJMPBKDCF*>* JMINOGAOFIL; // 0x18
	::HKIBBJHIFIK DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPLADONNO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPLADONNO_BHLAEBMEOLO_OFFSET))(this);
	}

	::NHGJMPBKDCF* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::NHGJMPBKDCF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIDPLADONNO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIDPLADONNO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AIDPLADONNO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
