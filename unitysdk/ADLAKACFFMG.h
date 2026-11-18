#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDPLHDHEFJM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADLAKACFFMG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AB7E50)
#define ADLAKACFFMG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AB7B60)
#define ADLAKACFFMG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AB7B70)
#define ADLAKACFFMG_MGGCLMPMKCL_OFFSET UNITYSDK_OFFSET(0x19AB7F40)
#define ADLAKACFFMG_NDGHCNGMHBI_OFFSET UNITYSDK_OFFSET(0x19AB7B80)
#define ADLAKACFFMG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB7B50)

inline static constexpr unsigned int ADLAKACFFMG_TypeDefinitionIndex = 16695;

class ADLAKACFFMG : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JOIDFOKGEMK; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* DDFEPOFJNBF; // 0x20
	::GDPLHDHEFJM HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::GDPLHDHEFJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GDPLHDHEFJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ADLAKACFFMG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADLAKACFFMG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLAKACFFMG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NDGHCNGMHBI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLAKACFFMG_NDGHCNGMHBI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLAKACFFMG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MGGCLMPMKCL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADLAKACFFMG_MGGCLMPMKCL_OFFSET))(this);
	}
};
