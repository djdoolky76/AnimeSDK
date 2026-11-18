#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFJFDAJDKLJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EALMMIMFNBE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187A1350)
#define EALMMIMFNBE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187A1340)
#define EALMMIMFNBE_IOHFPLPLKHH_OFFSET UNITYSDK_OFFSET(0x187A1440)
#define EALMMIMFNBE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187A1710)
#define EALMMIMFNBE_NDIJEFLOAGI_OFFSET UNITYSDK_OFFSET(0x187A1230)
#define EALMMIMFNBE__CTOR_OFFSET UNITYSDK_OFFSET(0x187A1220)

inline static constexpr unsigned int EALMMIMFNBE_TypeDefinitionIndex = 10720;

class EALMMIMFNBE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* OIMGEDDFNBO; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* IMBGFLILHIB; // 0x20
	::NFJFDAJDKLJ HBDPAIKANDB; // 0x28
	::System::Int32 ONPMJGJBNOA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::NFJFDAJDKLJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NFJFDAJDKLJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EALMMIMFNBE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NDIJEFLOAGI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMMIMFNBE_NDIJEFLOAGI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EALMMIMFNBE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMMIMFNBE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* IOHFPLPLKHH()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMMIMFNBE_IOHFPLPLKHH_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EALMMIMFNBE_LJANCIBECFG_OFFSET))(this);
	}
};
