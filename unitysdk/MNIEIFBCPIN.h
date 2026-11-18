#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCGPJEGBBNK.h"
#include "unitysdk/PJBGHMDHHBM.h"

class GJMBIKFPDMP;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MNIEIFBCPIN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D9A0840)
#define MNIEIFBCPIN_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D9A0F70)
#define MNIEIFBCPIN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D9A0910)
#define MNIEIFBCPIN_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9A0D50)
#define MNIEIFBCPIN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D9A0CA0)
#define MNIEIFBCPIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0880)

inline static constexpr unsigned int MNIEIFBCPIN_TypeDefinitionIndex = 93726;

class MNIEIFBCPIN : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GJMBIKFPDMP*>* JMINOGAOFIL; // 0x18
	::GCGPJEGBBNK DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEIFBCPIN__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEIFBCPIN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + MNIEIFBCPIN_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEIFBCPIN_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIEIFBCPIN_PHOADBJGFBE_OFFSET))(this);
	}

	::GJMBIKFPDMP* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::GJMBIKFPDMP*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MNIEIFBCPIN_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
