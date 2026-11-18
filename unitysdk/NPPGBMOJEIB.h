#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOJAIMCGPIM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GEENDIJKDLE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPPGBMOJEIB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CBCDB20)
#define NPPGBMOJEIB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CBCDBF0)
#define NPPGBMOJEIB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CBCDDD0)
#define NPPGBMOJEIB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CBCE210)
#define NPPGBMOJEIB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CBCE160)
#define NPPGBMOJEIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBCDB60)

inline static constexpr unsigned int NPPGBMOJEIB_TypeDefinitionIndex = 94177;

class NPPGBMOJEIB : public ::PJBGHMDHHBM
{
public:
	::LOJAIMCGPIM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GEENDIJKDLE*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPGBMOJEIB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPGBMOJEIB_BHLAEBMEOLO_OFFSET))(this);
	}

	::GEENDIJKDLE* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::GEENDIJKDLE*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPPGBMOJEIB_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPPGBMOJEIB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPGBMOJEIB_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPGBMOJEIB_PHOADBJGFBE_OFFSET))(this);
	}
};
