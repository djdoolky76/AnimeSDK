#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBLJLKAMBPN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNNKEECCOGI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B617490)
#define HNNKEECCOGI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B617580)
#define HNNKEECCOGI_JPDJJMNPBIJ_OFFSET UNITYSDK_OFFSET(0x1B617590)
#define HNNKEECCOGI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B617480)
#define HNNKEECCOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B617470)

inline static constexpr unsigned int HNNKEECCOGI_TypeDefinitionIndex = 16444;

class HNNKEECCOGI : public ::System::Object
{
public:
	::MBLJLKAMBPN HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* HBKFLEADHMB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::MBLJLKAMBPN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MBLJLKAMBPN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HNNKEECCOGI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNKEECCOGI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNKEECCOGI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNNKEECCOGI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JPDJJMNPBIJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNNKEECCOGI_JPDJJMNPBIJ_OFFSET))(this);
	}
};
