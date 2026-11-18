#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLLJAOFDGD.h"

class KFNLPKJAINK_BLLEDIKDKDM;
namespace System { class String; }

#define KGNOIKNJNEK_BIKHPDLBMFA_OFFSET UNITYSDK_OFFSET(0xD3F77D0)
#define KGNOIKNJNEK_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0xD3F7420)
#define KGNOIKNJNEK_EJHKKKPFCKE_OFFSET UNITYSDK_OFFSET(0xD3F7480)
#define KGNOIKNJNEK_FEFBOAKPIHM_OFFSET UNITYSDK_OFFSET(0xD3F75B0)
#define KGNOIKNJNEK_KFHPPBIFOMG_OFFSET UNITYSDK_OFFSET(0xD3F7430)
#define KGNOIKNJNEK__CTOR_OFFSET UNITYSDK_OFFSET(0xD3F7440)

inline static constexpr unsigned int KGNOIKNJNEK_TypeDefinitionIndex = 42911;

class KGNOIKNJNEK : public ::JMLLJAOFDGD
{
public:
	::KFNLPKJAINK_BLLEDIKDKDM* EJGDHCIBCJH; // 0x30
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x38

	::System::Void _ctor(::KFNLPKJAINK_BLLEDIKDKDM* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::KFNLPKJAINK_BLLEDIKDKDM*))((::PBYTE)hIl2Cpp + KGNOIKNJNEK__CTOR_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOIKNJNEK_DECMGICKDLH_OFFSET))(this);
	}

	::System::Void KFHPPBIFOMG(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGNOIKNJNEK_KFHPPBIFOMG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EJHKKKPFCKE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOIKNJNEK_EJHKKKPFCKE_OFFSET))(this);
	}

	::System::Void FEFBOAKPIHM(::System::String* DKPGLAFDLBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KGNOIKNJNEK_FEFBOAKPIHM_OFFSET))(this, DKPGLAFDLBC);
	}

	::System::Void BIKHPDLBMFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNOIKNJNEK_BIKHPDLBMFA_OFFSET))(this);
	}
};
