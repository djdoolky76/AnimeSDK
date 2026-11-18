#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJFNGKBIFPE.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HALGMPEPGEM;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DCBBBLKJIJA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9AD510)
#define DCBBBLKJIJA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9ADA20)
#define DCBBBLKJIJA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9AD690)
#define DCBBBLKJIJA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9AD5E0)
#define DCBBBLKJIJA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AD550)

inline static constexpr unsigned int DCBBBLKJIJA_TypeDefinitionIndex = 94333;

class DCBBBLKJIJA : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HALGMPEPGEM*>* JMINOGAOFIL; // 0x18
	::JJFNGKBIFPE DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBLKJIJA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBLKJIJA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBBBLKJIJA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DCBBBLKJIJA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::HALGMPEPGEM* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HALGMPEPGEM*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCBBBLKJIJA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
