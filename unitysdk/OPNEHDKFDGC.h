#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEKLGFKPHNM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CJBCBLOPOCG;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OPNEHDKFDGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1DE637D0)
#define OPNEHDKFDGC_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1DE64200)
#define OPNEHDKFDGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1DE63D10)
#define OPNEHDKFDGC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DE63910)
#define OPNEHDKFDGC_OMCOLIBIEAP_OFFSET UNITYSDK_OFFSET(0x1DE63B30)
#define OPNEHDKFDGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1DE64150)
#define OPNEHDKFDGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE63810)

inline static constexpr unsigned int OPNEHDKFDGC_TypeDefinitionIndex = 93715;

class OPNEHDKFDGC : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CJBCBLOPOCG*>* JMINOGAOFIL; // 0x18
	::JEKLGFKPHNM DHDJDGFNBOA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CJBCBLOPOCG*>* AHOCMFNHDOF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNEHDKFDGC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_MDGCOKBMLFG_OFFSET))(this);
	}

	::CJBCBLOPOCG* OMCOLIBIEAP(::System::Int32 HCKDKJHAOMF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::CJBCBLOPOCG*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_OMCOLIBIEAP_OFFSET))(this, HCKDKJHAOMF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_PHOADBJGFBE_OFFSET))(this);
	}

	::CJBCBLOPOCG* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::CJBCBLOPOCG*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + OPNEHDKFDGC_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}
};
