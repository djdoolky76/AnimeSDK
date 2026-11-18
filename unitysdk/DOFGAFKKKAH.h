#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPHEACGMGLM.h"
#include "unitysdk/PJBGHMDHHBM.h"

class CKPLOAKNJFD;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DOFGAFKKKAH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1EEA9C10)
#define DOFGAFKKKAH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1EEA9CE0)
#define DOFGAFKKKAH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1EEAA120)
#define DOFGAFKKKAH_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x1EEAA340)
#define DOFGAFKKKAH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EEAA070)
#define DOFGAFKKKAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA9C50)

inline static constexpr unsigned int DOFGAFKKKAH_TypeDefinitionIndex = 94468;

class DOFGAFKKKAH : public ::PJBGHMDHHBM
{
public:
	::GPHEACGMGLM DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::CKPLOAKNJFD*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFGAFKKKAH__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFGAFKKKAH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DOFGAFKKKAH_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Boolean MDGCOKBMLFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFGAFKKKAH_MDGCOKBMLFG_OFFSET))(this);
	}

	::CKPLOAKNJFD* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::CKPLOAKNJFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DOFGAFKKKAH_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFGAFKKKAH_PHOADBJGFBE_OFFSET))(this);
	}
};
