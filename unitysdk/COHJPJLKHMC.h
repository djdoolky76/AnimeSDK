#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLLIMJEDGED.h"
#include "unitysdk/PJBGHMDHHBM.h"

class HLBDGDENNNO;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define COHJPJLKHMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1E73D500)
#define COHJPJLKHMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1E73DA70)
#define COHJPJLKHMC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E73D850)
#define COHJPJLKHMC_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1E73D680)
#define COHJPJLKHMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1E73D5D0)
#define COHJPJLKHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E73D540)

inline static constexpr unsigned int COHJPJLKHMC_TypeDefinitionIndex = 94562;

class COHJPJLKHMC : public ::PJBGHMDHHBM
{
public:
	::HLLIMJEDGED DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HLBDGDENNNO*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJPJLKHMC__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJPJLKHMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJPJLKHMC_PHOADBJGFBE_OFFSET))(this);
	}

	::HLBDGDENNNO* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::HLBDGDENNNO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + COHJPJLKHMC_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + COHJPJLKHMC_MDGCOKBMLFG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + COHJPJLKHMC_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}
};
