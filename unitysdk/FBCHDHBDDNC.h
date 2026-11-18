#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNAPNMNIGIH.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DAMMGNPFBGI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBCHDHBDDNC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D6990E0)
#define FBCHDHBDDNC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D6991B0)
#define FBCHDHBDDNC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D699430)
#define FBCHDHBDDNC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D699380)
#define FBCHDHBDDNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D699120)

inline static constexpr unsigned int FBCHDHBDDNC_TypeDefinitionIndex = 93933;

class FBCHDHBDDNC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DAMMGNPFBGI*>* JMINOGAOFIL; // 0x18
	::MNAPNMNIGIH DHDJDGFNBOA; // 0x20
	::System::Int32 BMHHGLOICLI; // 0x38
	::System::Int32 DCNMBMDGDKL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCHDHBDDNC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCHDHBDDNC_BHLAEBMEOLO_OFFSET))(this);
	}

	::DAMMGNPFBGI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::DAMMGNPFBGI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBCHDHBDDNC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCHDHBDDNC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FBCHDHBDDNC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
