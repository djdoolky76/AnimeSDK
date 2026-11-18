#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPDHDEPLGAI.h"
#include "unitysdk/PJBGHMDHHBM.h"

class MHIEHNKKEIK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JAJFILAENCA_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9BB380)
#define JAJFILAENCA_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9BB720)
#define JAJFILAENCA_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9BB900)
#define JAJFILAENCA_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9BB450)
#define JAJFILAENCA_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9BB670)
#define JAJFILAENCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BB3C0)

inline static constexpr unsigned int JAJFILAENCA_TypeDefinitionIndex = 93585;

class JAJFILAENCA : public ::PJBGHMDHHBM
{
public:
	::CPDHDEPLGAI DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MHIEHNKKEIK*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFILAENCA__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFILAENCA_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFILAENCA_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAJFILAENCA_PHOADBJGFBE_OFFSET))(this);
	}

	::MHIEHNKKEIK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::MHIEHNKKEIK*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JAJFILAENCA_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JAJFILAENCA_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
