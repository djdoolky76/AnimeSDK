#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNFKELNOGBF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MELAIELHDBN_CIPHLGKFJPN_OFFSET UNITYSDK_OFFSET(0x1AB07280)
#define MELAIELHDBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB07180)
#define MELAIELHDBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB07270)
#define MELAIELHDBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB07550)

inline static constexpr unsigned int MELAIELHDBN_TypeDefinitionIndex = 12537;

class MELAIELHDBN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* BBOPBGOONBI; // 0x18
	::KNFKELNOGBF HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MELAIELHDBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MELAIELHDBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CIPHLGKFJPN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MELAIELHDBN_CIPHLGKFJPN_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MELAIELHDBN_LJANCIBECFG_OFFSET))(this);
	}
};
