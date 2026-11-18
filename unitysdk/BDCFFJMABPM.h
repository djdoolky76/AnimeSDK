#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDIMLPNPOEC.h"
#include "unitysdk/PJBGHMDHHBM.h"

class OHKEFCIPDNH;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDCFFJMABPM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1F6379D0)
#define BDCFFJMABPM_KGNEJKNNODJ_OFFSET UNITYSDK_OFFSET(0x1F637EE0)
#define BDCFFJMABPM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1F637B50)
#define BDCFFJMABPM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1F637AA0)
#define BDCFFJMABPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F637A10)

inline static constexpr unsigned int BDCFFJMABPM_TypeDefinitionIndex = 94881;

class BDCFFJMABPM : public ::PJBGHMDHHBM
{
public:
	::KDIMLPNPOEC DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::OHKEFCIPDNH*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCFFJMABPM__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCFFJMABPM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDCFFJMABPM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + BDCFFJMABPM_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::OHKEFCIPDNH* KGNEJKNNODJ(::System::Int32 MGMDLMBEDJF)
	{
		return ((::OHKEFCIPDNH*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BDCFFJMABPM_KGNEJKNNODJ_OFFSET))(this, MGMDLMBEDJF);
	}
};
