#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEENICMPPMO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class LBNBOCJKKFO;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KOIGMOBBPAM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2F5D20)
#define KOIGMOBBPAM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E2F5DF0)
#define KOIGMOBBPAM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2F5FC0)
#define KOIGMOBBPAM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E2F63E0)
#define KOIGMOBBPAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F5D60)

inline static constexpr unsigned int KOIGMOBBPAM_TypeDefinitionIndex = 93802;

class KOIGMOBBPAM : public ::PJBGHMDHHBM
{
public:
	::EEENICMPPMO DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::LBNBOCJKKFO*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGMOBBPAM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGMOBBPAM_BHLAEBMEOLO_OFFSET))(this);
	}

	::LBNBOCJKKFO* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::LBNBOCJKKFO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KOIGMOBBPAM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + KOIGMOBBPAM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOIGMOBBPAM_PHOADBJGFBE_OFFSET))(this);
	}
};
