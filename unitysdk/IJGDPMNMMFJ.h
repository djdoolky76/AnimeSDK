#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBICPDGDOKF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IJGDPMNMMFJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C1CC70)
#define IJGDPMNMMFJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C1CEB0)
#define IJGDPMNMMFJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C1CEA0)
#define IJGDPMNMMFJ_MNDIPOCDFOO_OFFSET UNITYSDK_OFFSET(0x17C1CEC0)
#define IJGDPMNMMFJ_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x17C1CD60)
#define IJGDPMNMMFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1CC60)

inline static constexpr unsigned int IJGDPMNMMFJ_TypeDefinitionIndex = 17438;

class IJGDPMNMMFJ : public ::System::Object
{
public:
	::KBICPDGDOKF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* GDKKPCBIGDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x34

	::System::Void _ctor(::KBICPDGDOKF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KBICPDGDOKF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MNDIPOCDFOO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJGDPMNMMFJ_MNDIPOCDFOO_OFFSET))(this);
	}
};
