#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMNIKMCIEBP.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KKKGEINKDJK;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPJCOPGAFGF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E1D7CE0)
#define NPJCOPGAFGF_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E1D0930)
#define NPJCOPGAFGF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E1D7FD0)
#define NPJCOPGAFGF_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1D7DB0)
#define NPJCOPGAFGF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E1D8360)
#define NPJCOPGAFGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D7D20)

inline static constexpr unsigned int NPJCOPGAFGF_TypeDefinitionIndex = 93299;

class NPJCOPGAFGF : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::KKKGEINKDJK*>* JMINOGAOFIL; // 0x18
	::DMNIKMCIEBP DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJCOPGAFGF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJCOPGAFGF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJCOPGAFGF_MDGCOKBMLFG_OFFSET))(this);
	}

	::KKKGEINKDJK* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::KKKGEINKDJK*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJCOPGAFGF_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + NPJCOPGAFGF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJCOPGAFGF_PHOADBJGFBE_OFFSET))(this);
	}
};
