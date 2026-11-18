#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEJLENHBCIF.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HNAKLGOEIIL;
class KGBFLHNJHHN;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OGGNGFAJEOF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D3F4760)
#define OGGNGFAJEOF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D3F48E0)
#define OGGNGFAJEOF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D3F4AC0)
#define OGGNGFAJEOF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3F4E50)
#define OGGNGFAJEOF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D3F4830)
#define OGGNGFAJEOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F47A0)

inline static constexpr unsigned int OGGNGFAJEOF_TypeDefinitionIndex = 94047;

class OGGNGFAJEOF : public ::PJBGHMDHHBM
{
public:
	::KGBFLHNJHHN* DGLFBEGCIAN; // 0x18
	::DEJLENHBCIF DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HNAKLGOEIIL*>* JMINOGAOFIL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGNGFAJEOF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGNGFAJEOF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGNGFAJEOF_PHOADBJGFBE_OFFSET))(this);
	}

	::HNAKLGOEIIL* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::HNAKLGOEIIL*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OGGNGFAJEOF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OGGNGFAJEOF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGNGFAJEOF_MDGCOKBMLFG_OFFSET))(this);
	}
};
