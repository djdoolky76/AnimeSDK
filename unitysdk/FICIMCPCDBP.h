#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPGICCAMMKL.h"
#include "unitysdk/PJBGHMDHHBM.h"

class DJEEPKJCOEH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FICIMCPCDBP_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E2339E0)
#define FICIMCPCDBP_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1E233EF0)
#define FICIMCPCDBP_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E233AB0)
#define FICIMCPCDBP_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E2340D0)
#define FICIMCPCDBP_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E233E40)
#define FICIMCPCDBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E233A20)

inline static constexpr unsigned int FICIMCPCDBP_TypeDefinitionIndex = 93282;

class FICIMCPCDBP : public ::PJBGHMDHHBM
{
public:
	::NPGICCAMMKL DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::DJEEPKJCOEH*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICIMCPCDBP__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICIMCPCDBP_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + FICIMCPCDBP_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICIMCPCDBP_PHOADBJGFBE_OFFSET))(this);
	}

	::DJEEPKJCOEH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF, ::System::Boolean ANLJEKFCBNO)
	{
		return ((::DJEEPKJCOEH*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FICIMCPCDBP_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF, ANLJEKFCBNO);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FICIMCPCDBP_MDGCOKBMLFG_OFFSET))(this);
	}
};
