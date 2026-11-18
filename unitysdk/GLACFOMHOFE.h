#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HMCABIPPLNK.h"
#include "unitysdk/PJBGHMDHHBM.h"
#include "unitysdk/System/ValueTuple_2.h"

class FPFMKCAGFKG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GLACFOMHOFE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DABE570)
#define GLACFOMHOFE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DABE850)
#define GLACFOMHOFE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DABEA30)
#define GLACFOMHOFE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DABEEB0)
#define GLACFOMHOFE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DABE730)
#define GLACFOMHOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DABE5B0)

inline static constexpr unsigned int GLACFOMHOFE_TypeDefinitionIndex = 93416;

class GLACFOMHOFE : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FPFMKCAGFKG*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::FPFMKCAGFKG*>* KFKDOFBLCHD; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::FPFMKCAGFKG*>* MKECLFGDKOI; // 0x28
	::HMCABIPPLNK DHDJDGFNBOA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACFOMHOFE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACFOMHOFE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACFOMHOFE_PHOADBJGFBE_OFFSET))(this);
	}

	::FPFMKCAGFKG* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::FPFMKCAGFKG*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GLACFOMHOFE_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + GLACFOMHOFE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLACFOMHOFE_MDGCOKBMLFG_OFFSET))(this);
	}
};
