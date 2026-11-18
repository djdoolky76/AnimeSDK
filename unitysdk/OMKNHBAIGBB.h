#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFFPPKADLNF.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMKNHBAIGBB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D6060)
#define OMKNHBAIGBB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D66E0)
#define OMKNHBAIGBB_GDPGNGNIGLB_OFFSET UNITYSDK_OFFSET(0x1D0D6590)
#define OMKNHBAIGBB_GOFMDNFCOGB_OFFSET UNITYSDK_OFFSET(0x1D0D66F0)
#define OMKNHBAIGBB_KHNEMEJAFFL_OFFSET UNITYSDK_OFFSET(0x1D0D6430)
#define OMKNHBAIGBB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D6150)
#define OMKNHBAIGBB_MMCFANMENAJ_OFFSET UNITYSDK_OFFSET(0x1D0D6160)
#define OMKNHBAIGBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6050)

inline static constexpr unsigned int OMKNHBAIGBB_TypeDefinitionIndex = 9732;

class OMKNHBAIGBB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::Foundation::AssetPath DIKDDPFIJBF; // 0x18
	::FFFPPKADLNF HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* GMJOHPJOINA; // 0x38
	::System::Int32 JCFDLDKDBJO; // 0x40
	::System::Byte CNIAANMNOCF; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::UInt64 OHEKIKDFCAL; // 0x48

	::System::Void _ctor(::FFFPPKADLNF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FFFPPKADLNF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OMKNHBAIGBB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MMCFANMENAJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_MMCFANMENAJ_OFFSET))(this);
	}

	::Foundation::AssetPath KHNEMEJAFFL()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_KHNEMEJAFFL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 GDPGNGNIGLB()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_GDPGNGNIGLB_OFFSET))(this);
	}

	::System::Int32 GOFMDNFCOGB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKNHBAIGBB_GOFMDNFCOGB_OFFSET))(this);
	}
};
