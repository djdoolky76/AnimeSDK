#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICNJLCPDMEA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAANNDCJDEK_BEIOLJIJICO_OFFSET UNITYSDK_OFFSET(0x195738C0)
#define MAANNDCJDEK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195737D0)
#define MAANNDCJDEK_EINGDMJPGGK_OFFSET UNITYSDK_OFFSET(0x19573570)
#define MAANNDCJDEK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19573560)
#define MAANNDCJDEK_HJNIADBPLHJ_OFFSET UNITYSDK_OFFSET(0x19573B90)
#define MAANNDCJDEK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19573CA0)
#define MAANNDCJDEK_NBLDHOEPBIC_OFFSET UNITYSDK_OFFSET(0x19573CB0)
#define MAANNDCJDEK_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x19573300)
#define MAANNDCJDEK__CTOR_OFFSET UNITYSDK_OFFSET(0x195732F0)

inline static constexpr unsigned int MAANNDCJDEK_TypeDefinitionIndex = 10037;

class MAANNDCJDEK : public ::System::Object
{
public:
	::ICNJLCPDMEA HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* CLDBHNDEDOH; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JOOMBLOCLPN; // 0x28
	::System::String* KPOGGOCHPKL; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* FFOCDMJNAMA; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* OHMLOEKNBHC; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52

	::System::Void _ctor(::ICNJLCPDMEA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ICNJLCPDMEA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MAANNDCJDEK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* NGKOPBCHFOP()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAANNDCJDEK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* EINGDMJPGGK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_EINGDMJPGGK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BEIOLJIJICO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_BEIOLJIJICO_OFFSET))(this);
	}

	::System::String* HJNIADBPLHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_HJNIADBPLHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NBLDHOEPBIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAANNDCJDEK_NBLDHOEPBIC_OFFSET))(this);
	}
};
