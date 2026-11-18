#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OANPKCJIDBI.h"
#include "unitysdk/PJBGHMDHHBM.h"

class EKEICCPMFAI;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGOLMPKGGCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E8C1AE0)
#define MGOLMPKGGCI_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E8C1C60)
#define MGOLMPKGGCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E8C1E30)
#define MGOLMPKGGCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E8C1BB0)
#define MGOLMPKGGCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C1B20)

inline static constexpr unsigned int MGOLMPKGGCI_TypeDefinitionIndex = 94768;

class MGOLMPKGGCI : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EKEICCPMFAI*>* JMINOGAOFIL; // 0x18
	::OANPKCJIDBI DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLMPKGGCI__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLMPKGGCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLMPKGGCI_PHOADBJGFBE_OFFSET))(this);
	}

	::EKEICCPMFAI* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::EKEICCPMFAI*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MGOLMPKGGCI_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MGOLMPKGGCI_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
