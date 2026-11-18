#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGMNNENJPMP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIOIGOKFIDJ_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x19533A40)
#define HIOIGOKFIDJ_BKPDFJHBNDN_OFFSET UNITYSDK_OFFSET(0x19533C60)
#define HIOIGOKFIDJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19533950)
#define HIOIGOKFIDJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19533940)
#define HIOIGOKFIDJ_JMKFAIKAOFJ_OFFSET UNITYSDK_OFFSET(0x19533410)
#define HIOIGOKFIDJ_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x19533B50)
#define HIOIGOKFIDJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19533930)
#define HIOIGOKFIDJ_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x19533820)
#define HIOIGOKFIDJ_PDELMNNDMPC_OFFSET UNITYSDK_OFFSET(0x195336E0)
#define HIOIGOKFIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19533400)

inline static constexpr unsigned int HIOIGOKFIDJ_TypeDefinitionIndex = 14297;

class HIOIGOKFIDJ : public ::System::Object
{
public:
	::System::String* CDPMOEENODL; // 0x10
	::System::String* OIBEAJNLJAB; // 0x18
	::CGMNNENJPMP HBDPAIKANDB; // 0x20
	::System::String* LBJNIKIHBPM; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* MEIFGCPCAFF; // 0x38
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Int32 MPCPEDNALNI; // 0x50
	::System::Int32 BOLIENJALKP; // 0x54

	::System::Void _ctor(::CGMNNENJPMP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CGMNNENJPMP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JMKFAIKAOFJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_JMKFAIKAOFJ_OFFSET))(this);
	}

	::System::Int32 PDELMNNDMPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_PDELMNNDMPC_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_OLMMLKDHLBJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* BHMMKDGCLGB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::String* LFPFCAFBOEK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_LFPFCAFBOEK_OFFSET))(this);
	}

	::System::Int32 BKPDFJHBNDN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOIGOKFIDJ_BKPDFJHBNDN_OFFSET))(this);
	}
};
