#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCKHNJGAPCM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OLENFKEHAIC;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FMOBMNFDBGO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1CCB4F40)
#define FMOBMNFDBGO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1CCB52E0)
#define FMOBMNFDBGO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1CCB54C0)
#define FMOBMNFDBGO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1CCB5010)
#define FMOBMNFDBGO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1CCB5230)
#define FMOBMNFDBGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB4F80)

inline static constexpr unsigned int FMOBMNFDBGO_TypeDefinitionIndex = 93700;

class FMOBMNFDBGO : public ::PJBGHMDHHBM
{
public:
	::HCKHNJGAPCM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OLENFKEHAIC*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOBMNFDBGO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOBMNFDBGO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOBMNFDBGO_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOBMNFDBGO_PHOADBJGFBE_OFFSET))(this);
	}

	::OLENFKEHAIC* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::OLENFKEHAIC*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FMOBMNFDBGO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FMOBMNFDBGO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
