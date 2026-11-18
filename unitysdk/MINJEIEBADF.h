#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPKCKILEIHA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MINJEIEBADF_AKHOPDGDHGE_OFFSET UNITYSDK_OFFSET(0x1B319A60)
#define MINJEIEBADF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B319830)
#define MINJEIEBADF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B319BA0)
#define MINJEIEBADF_KLIMJHHMAOK_OFFSET UNITYSDK_OFFSET(0x1B319720)
#define MINJEIEBADF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B319710)
#define MINJEIEBADF_MADPGOPGLCL_OFFSET UNITYSDK_OFFSET(0x1B319920)
#define MINJEIEBADF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B319700)

inline static constexpr unsigned int MINJEIEBADF_TypeDefinitionIndex = 11014;

class MINJEIEBADF : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* ABHBHOLNPOK; // 0x18
	::MPKCKILEIHA HBDPAIKANDB; // 0x20
	::System::Int32 CNPBFKCNLDI; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x35
	::System::Byte CNIAANMNOCF; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 BHKGLFNCOKL; // 0x38

	::System::Void _ctor(::MPKCKILEIHA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MPKCKILEIHA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MINJEIEBADF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MINJEIEBADF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KLIMJHHMAOK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MINJEIEBADF_KLIMJHHMAOK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MINJEIEBADF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 MADPGOPGLCL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINJEIEBADF_MADPGOPGLCL_OFFSET))(this);
	}

	::System::Int32 AKHOPDGDHGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MINJEIEBADF_AKHOPDGDHGE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MINJEIEBADF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
