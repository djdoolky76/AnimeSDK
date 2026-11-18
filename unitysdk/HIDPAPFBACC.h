#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IBAMAKEGFBE.h"
#include "unitysdk/IKMNAKGKFPC.h"

class KGBFLHNJHHN;
namespace System { class Object; }

#define HIDPAPFBACC_FBCIFFPBAAC_OFFSET UNITYSDK_OFFSET(0x18BB0000)
#define HIDPAPFBACC_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x18BAFFD0)
#define HIDPAPFBACC_KCGALKCGEON_OFFSET UNITYSDK_OFFSET(0x18BAFFB0)
#define HIDPAPFBACC_OHDLECFIIHL_OFFSET UNITYSDK_OFFSET(0x18BAFFF0)
#define HIDPAPFBACC__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAFFA0)

inline static constexpr unsigned int HIDPAPFBACC_TypeDefinitionIndex = 12381;

class HIDPAPFBACC : public ::IBAMAKEGFBE
{
public:
	::Il2CppArray<::System::Object*>* _BOBCEOEFIDI_k__BackingField; // 0x58
	::System::Int32 _ILCHJLAGGNE_k__BackingField; // 0x60

	::System::Void _ctor(::IKMNAKGKFPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IKMNAKGKFPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HIDPAPFBACC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean KCGALKCGEON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPAPFBACC_KCGALKCGEON_OFFSET))(this);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPAPFBACC_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void OHDLECFIIHL(::Il2CppArray<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + HIDPAPFBACC_OHDLECFIIHL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FBCIFFPBAAC(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HIDPAPFBACC_FBCIFFPBAAC_OFFSET))(this, EGEGIMGMJHN);
	}
};
