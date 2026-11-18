#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDOKGGJHEAH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BOJMCOFJLBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15786BA0)
#define BOJMCOFJLBP_DOKBMLILGGC_OFFSET UNITYSDK_OFFSET(0x15786A60)
#define BOJMCOFJLBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15786DB0)
#define BOJMCOFJLBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15786C90)
#define BOJMCOFJLBP_NIOLACCPKHH_OFFSET UNITYSDK_OFFSET(0x15786CA0)
#define BOJMCOFJLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15786A50)

inline static constexpr unsigned int BOJMCOFJLBP_TypeDefinitionIndex = 10016;

class BOJMCOFJLBP : public ::System::Object
{
public:
	::LDOKGGJHEAH HBDPAIKANDB; // 0x10
	::System::String* NKFMGIIGJCK; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 JBMOBJNFHKN; // 0x34

	::System::Void _ctor(::LDOKGGJHEAH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDOKGGJHEAH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOJMCOFJLBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DOKBMLILGGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMCOFJLBP_DOKBMLILGGC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMCOFJLBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMCOFJLBP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NIOLACCPKHH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJMCOFJLBP_NIOLACCPKHH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOJMCOFJLBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
