#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HAANMCMKGHF.h"
#include "unitysdk/PJBGHMDHHBM.h"

class KGBFLHNJHHN;
class PFEGALIKFEC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HOOHMMKJLAH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1D3E4230)
#define HOOHMMKJLAH_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1D3E4740)
#define HOOHMMKJLAH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1D3E43B0)
#define HOOHMMKJLAH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D3E4920)
#define HOOHMMKJLAH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D3E4300)
#define HOOHMMKJLAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E4270)

inline static constexpr unsigned int HOOHMMKJLAH_TypeDefinitionIndex = 94250;

class HOOHMMKJLAH : public ::PJBGHMDHHBM
{
public:
	::KGBFLHNJHHN* DGLFBEGCIAN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::PFEGALIKFEC*>* JMINOGAOFIL; // 0x20
	::HAANMCMKGHF DHDJDGFNBOA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOHMMKJLAH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOHMMKJLAH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOHMMKJLAH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + HOOHMMKJLAH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::PFEGALIKFEC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::PFEGALIKFEC*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HOOHMMKJLAH_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOOHMMKJLAH_MDGCOKBMLFG_OFFSET))(this);
	}
};
