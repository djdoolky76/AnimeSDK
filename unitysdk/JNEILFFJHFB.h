#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCDIKONNGOL.h"
#include "unitysdk/PJBGHMDHHBM.h"

class BCNFNMHPPLN;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JNEILFFJHFB_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9BD7E0)
#define JNEILFFJHFB_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9BDF10)
#define JNEILFFJHFB_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9BDB80)
#define JNEILFFJHFB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9BD8B0)
#define JNEILFFJHFB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9BDAD0)
#define JNEILFFJHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BD820)

inline static constexpr unsigned int JNEILFFJHFB_TypeDefinitionIndex = 93323;

class JNEILFFJHFB : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::BCNFNMHPPLN*>* JMINOGAOFIL; // 0x18
	::OCDIKONNGOL DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEILFFJHFB__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEILFFJHFB_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEILFFJHFB_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNEILFFJHFB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + JNEILFFJHFB_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::BCNFNMHPPLN* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::BCNFNMHPPLN*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + JNEILFFJHFB_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
