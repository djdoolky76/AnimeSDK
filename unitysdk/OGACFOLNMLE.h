#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKBPNPDADDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OGACFOLNMLE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D1B60)
#define OGACFOLNMLE_FIGNOOEDDNC_OFFSET UNITYSDK_OFFSET(0x1D0D1890)
#define OGACFOLNMLE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D1880)
#define OGACFOLNMLE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D1870)
#define OGACFOLNMLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D1860)

inline static constexpr unsigned int OGACFOLNMLE_TypeDefinitionIndex = 11912;

class OGACFOLNMLE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* PCCPGAMLEMB; // 0x18
	::HKBPNPDADDP HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::HKBPNPDADDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKBPNPDADDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OGACFOLNMLE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACFOLNMLE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OGACFOLNMLE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FIGNOOEDDNC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACFOLNMLE_FIGNOOEDDNC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGACFOLNMLE_COFGIJJOFLP_OFFSET))(this);
	}
};
