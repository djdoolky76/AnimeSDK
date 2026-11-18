#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIJMABNLCBO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MNICMFEMMID_AILPDKAHANE_OFFSET UNITYSDK_OFFSET(0x1BF63B20)
#define MNICMFEMMID_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF63A30)
#define MNICMFEMMID_DFAOEOEDFLH_OFFSET UNITYSDK_OFFSET(0x1BF63C40)
#define MNICMFEMMID_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF63C30)
#define MNICMFEMMID_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF638E0)
#define MNICMFEMMID_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x1BF638F0)
#define MNICMFEMMID__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF638D0)

inline static constexpr unsigned int MNICMFEMMID_TypeDefinitionIndex = 15391;

class MNICMFEMMID : public ::System::Object
{
public:
	::System::String* OEBOEIGBLBA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* HCKMEAPLAJN; // 0x20
	::CIJMABNLCBO HBDPAIKANDB; // 0x28
	::System::Int32 PEHLJEEIACG; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E

	::System::Void _ctor(::CIJMABNLCBO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIJMABNLCBO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MNICMFEMMID__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MNICMFEMMID_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNICMFEMMID_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNICMFEMMID_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AILPDKAHANE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNICMFEMMID_AILPDKAHANE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MNICMFEMMID_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DFAOEOEDFLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNICMFEMMID_DFAOEOEDFLH_OFFSET))(this);
	}
};
