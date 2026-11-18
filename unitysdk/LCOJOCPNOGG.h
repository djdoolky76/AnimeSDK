#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIBCPAKIAME.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCOJOCPNOGG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1958BA50)
#define LCOJOCPNOGG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1958BA30)
#define LCOJOCPNOGG_HGKEPCOLGLL_OFFSET UNITYSDK_OFFSET(0x1958B760)
#define LCOJOCPNOGG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1958BA40)
#define LCOJOCPNOGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1958B750)

inline static constexpr unsigned int LCOJOCPNOGG_TypeDefinitionIndex = 15650;

class LCOJOCPNOGG : public ::System::Object
{
public:
	::FIBCPAKIAME HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* IIBEGCBJBNE; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::FIBCPAKIAME LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FIBCPAKIAME, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LCOJOCPNOGG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HGKEPCOLGLL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOJOCPNOGG_HGKEPCOLGLL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LCOJOCPNOGG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOJOCPNOGG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOJOCPNOGG_COFGIJJOFLP_OFFSET))(this);
	}
};
