#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDKFHKOEPGG.h"
#include "unitysdk/PJBGHMDHHBM.h"

class MEHOFJOFPBD;
namespace FlatBuffers { class ByteBuffer; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBKPKPCKKJF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x132C0AC0)
#define DBKPKPCKKJF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x132C0B90)
#define DBKPKPCKKJF_MMBMHGPMOGI_OFFSET UNITYSDK_OFFSET(0x132C0FD0)
#define DBKPKPCKKJF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x132C0F20)
#define DBKPKPCKKJF__CTOR_OFFSET UNITYSDK_OFFSET(0x132C0B00)

inline static constexpr unsigned int DBKPKPCKKJF_TypeDefinitionIndex = 94361;

class DBKPKPCKKJF : public ::PJBGHMDHHBM
{
public:
	::FDKFHKOEPGG DHDJDGFNBOA; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MEHOFJOFPBD*>* JMINOGAOFIL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKPKPCKKJF__CTOR_OFFSET))(this);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKPKPCKKJF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::FlatBuffers::ByteBuffer* CAFJHKGOAEB)
	{
		return ((::System::Void(*)(::PVOID, ::FlatBuffers::ByteBuffer*))((::PBYTE)hIl2Cpp + DBKPKPCKKJF_LNFENFDLMIG_OFFSET))(this, CAFJHKGOAEB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKPKPCKKJF_PHOADBJGFBE_OFFSET))(this);
	}

	::MEHOFJOFPBD* MMBMHGPMOGI(::System::Int32 MGMDLMBEDJF)
	{
		return ((::MEHOFJOFPBD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBKPKPCKKJF_MMBMHGPMOGI_OFFSET))(this, MGMDLMBEDJF);
	}
};
