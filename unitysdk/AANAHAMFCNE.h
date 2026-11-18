#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JCCANNLBCFO.h"
#include "unitysdk/PJBGHMDHHBM.h"

class AEALOFKKPEO;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AANAHAMFCNE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2DAEC0)
#define AANAHAMFCNE_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E2DB000)
#define AANAHAMFCNE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E2DB700)
#define AANAHAMFCNE_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2DB1E0)
#define AANAHAMFCNE_NKDHGOGEDEO_OFFSET UNITYSDK_OFFSET(0x1E2DB520)
#define AANAHAMFCNE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E2DB400)
#define AANAHAMFCNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DAF00)

inline static constexpr unsigned int AANAHAMFCNE_TypeDefinitionIndex = 93765;

class AANAHAMFCNE : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AEALOFKKPEO*>* JMINOGAOFIL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AEALOFKKPEO*>* DNLEHIGEHHK; // 0x20
	::JCCANNLBCFO DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANAHAMFCNE__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANAHAMFCNE_BHLAEBMEOLO_OFFSET))(this);
	}

	::AEALOFKKPEO* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::AEALOFKKPEO*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AANAHAMFCNE_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AANAHAMFCNE_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANAHAMFCNE_PHOADBJGFBE_OFFSET))(this);
	}

	::AEALOFKKPEO* NKDHGOGEDEO(::System::Int32 MOBNMDEDJIP, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::AEALOFKKPEO*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AANAHAMFCNE_NKDHGOGEDEO_OFFSET))(this, MOBNMDEDJIP, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + AANAHAMFCNE_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
