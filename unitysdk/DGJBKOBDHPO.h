#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGHAFNAJDNH.h"
#include "unitysdk/PJBGHMDHHBM.h"

class IBKFGFEPHKJ;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DGJBKOBDHPO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x132C13B0)
#define DGJBKOBDHPO_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x132C1480)
#define DGJBKOBDHPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x132C1870)
#define DGJBKOBDHPO_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x132C1650)
#define DGJBKOBDHPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x132C1BF0)
#define DGJBKOBDHPO__CTOR_OFFSET UNITYSDK_OFFSET(0x132C13F0)

inline static constexpr unsigned int DGJBKOBDHPO_TypeDefinitionIndex = 94839;

class DGJBKOBDHPO : public ::PJBGHMDHHBM
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::IBKFGFEPHKJ*>* JMINOGAOFIL; // 0x18
	::JGHAFNAJDNH DHDJDGFNBOA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJBKOBDHPO__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJBKOBDHPO_BHLAEBMEOLO_OFFSET))(this);
	}

	::IBKFGFEPHKJ* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::IBKFGFEPHKJ*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DGJBKOBDHPO_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJBKOBDHPO_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DGJBKOBDHPO_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGJBKOBDHPO_PHOADBJGFBE_OFFSET))(this);
	}
};
