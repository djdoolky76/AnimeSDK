#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/JEPILOGEGLN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LKOAKGJAHFB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B652C30)
#define LKOAKGJAHFB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B6530F0)
#define LKOAKGJAHFB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B652D20)
#define LKOAKGJAHFB_LJKEKKGDJMK_OFFSET UNITYSDK_OFFSET(0x1B652D30)
#define LKOAKGJAHFB_NLNJPCCEEID_OFFSET UNITYSDK_OFFSET(0x1B652E90)
#define LKOAKGJAHFB_PBFKHLEHIGG_OFFSET UNITYSDK_OFFSET(0x1B652FE0)
#define LKOAKGJAHFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B652C20)

inline static constexpr unsigned int LKOAKGJAHFB_TypeDefinitionIndex = 9208;

class LKOAKGJAHFB : public ::System::Object
{
public:
	::Foundation::AssetPath EAKDMEKCELH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* CDEKJIPBECO; // 0x28
	::JEPILOGEGLN HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x5];
	::System::UInt64 KGEKDKAJKNP; // 0x48

	::System::Void _ctor(::JEPILOGEGLN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JEPILOGEGLN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LKOAKGJAHFB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_LJANCIBECFG_OFFSET))(this);
	}

	::Foundation::AssetPath LJKEKKGDJMK()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_LJKEKKGDJMK_OFFSET))(this);
	}

	::System::UInt64 NLNJPCCEEID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_NLNJPCCEEID_OFFSET))(this);
	}

	::System::String* PBFKHLEHIGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_PBFKHLEHIGG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LKOAKGJAHFB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
