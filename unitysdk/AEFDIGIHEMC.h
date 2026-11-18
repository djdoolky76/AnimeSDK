#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GALDCCMAMNN.h"
#include "unitysdk/PJBGHMDHHBM.h"

class ECAMIKBHACE;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AEFDIGIHEMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D3CF0B0)
#define AEFDIGIHEMC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D3CF5C0)
#define AEFDIGIHEMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D3CF230)
#define AEFDIGIHEMC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3CF7A0)
#define AEFDIGIHEMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D3CF180)
#define AEFDIGIHEMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CF0F0)

inline static constexpr unsigned int AEFDIGIHEMC_TypeDefinitionIndex = 94325;

class AEFDIGIHEMC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ECAMIKBHACE*>* JMINOGAOFIL; // 0x18
	::GALDCCMAMNN DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDIGIHEMC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDIGIHEMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDIGIHEMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AEFDIGIHEMC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::ECAMIKBHACE* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::ECAMIKBHACE*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AEFDIGIHEMC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFDIGIHEMC_MDGCOKBMLFG_OFFSET))(this);
	}
};
