#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/POINOLHKHJO.h"

class IDJEKAIKGNC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DEJHHACONCO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DB777D0)
#define DEJHHACONCO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DB77CF0)
#define DEJHHACONCO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DB778A0)
#define DEJHHACONCO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DB77C40)
#define DEJHHACONCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB77810)

inline static constexpr unsigned int DEJHHACONCO_TypeDefinitionIndex = 93894;

class DEJHHACONCO : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IDJEKAIKGNC*>* JMINOGAOFIL; // 0x18
	::POINOLHKHJO DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJHHACONCO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJHHACONCO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DEJHHACONCO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::IDJEKAIKGNC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IDJEKAIKGNC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEJHHACONCO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJHHACONCO_PHOADBJGFBE_OFFSET))(this);
	}
};
