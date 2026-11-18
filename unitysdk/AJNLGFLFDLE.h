#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBANNOGKALB.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OJIFDFOOBFH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AJNLGFLFDLE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D3D0F60)
#define AJNLGFLFDLE_GJEDJOOLFHG_OFFSET UNITYSDK_OFFSET(0x1D3D1700)
#define AJNLGFLFDLE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D3D1530)
#define AJNLGFLFDLE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D3D10A0)
#define AJNLGFLFDLE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D3D1410)
#define AJNLGFLFDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0FA0)

inline static constexpr unsigned int AJNLGFLFDLE_TypeDefinitionIndex = 93688;

class AJNLGFLFDLE : public ::PJBGHMDHHBM
{
public:
	::PBANNOGKALB DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OJIFDFOOBFH*>* JMINOGAOFIL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OJIFDFOOBFH*>* ODGFGCLKCOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNLGFLFDLE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNLGFLFDLE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AJNLGFLFDLE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNLGFLFDLE_PHOADBJGFBE_OFFSET))(this);
	}

	::OJIFDFOOBFH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OJIFDFOOBFH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJNLGFLFDLE_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::OJIFDFOOBFH* GJEDJOOLFHG(::System::Int32 AMHFLBPBKLL)
	{
		return ((::OJIFDFOOBFH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJNLGFLFDLE_GJEDJOOLFHG_OFFSET))(this, AMHFLBPBKLL);
	}
};
