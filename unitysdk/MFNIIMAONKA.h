#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEBLPHMJJAD.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OPIHNAHOIEH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MFNIIMAONKA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2F6EC0)
#define MFNIIMAONKA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E2F75F0)
#define MFNIIMAONKA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2F7260)
#define MFNIIMAONKA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2F7040)
#define MFNIIMAONKA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E2F6F90)
#define MFNIIMAONKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2F6F00)

inline static constexpr unsigned int MFNIIMAONKA_TypeDefinitionIndex = 94045;

class MFNIIMAONKA : public ::PJBGHMDHHBM
{
public:
	::KEBLPHMJJAD DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OPIHNAHOIEH*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIIMAONKA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIIMAONKA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIIMAONKA_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNIIMAONKA_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MFNIIMAONKA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::OPIHNAHOIEH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::OPIHNAHOIEH*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MFNIIMAONKA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
