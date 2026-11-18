#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOEOIIMNDBK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCNMEKIJPOA_BKPLGMAAAHH_OFFSET UNITYSDK_OFFSET(0x17FD0C10)
#define NCNMEKIJPOA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17FD05C0)
#define NCNMEKIJPOA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17FD06B0)
#define NCNMEKIJPOA_GPNPFJNJGIG_OFFSET UNITYSDK_OFFSET(0x17FD06C0)
#define NCNMEKIJPOA_JNNAALCPGNF_OFFSET UNITYSDK_OFFSET(0x17FD0FB0)
#define NCNMEKIJPOA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17FD0FA0)
#define NCNMEKIJPOA_LPHDGJOMGIJ_OFFSET UNITYSDK_OFFSET(0x17FD0800)
#define NCNMEKIJPOA_MCJPFNJOEDO_OFFSET UNITYSDK_OFFSET(0x17FD0940)
#define NCNMEKIJPOA_NOLKHBLDIEF_OFFSET UNITYSDK_OFFSET(0x17FD0D50)
#define NCNMEKIJPOA_OFDPIPIOLAA_OFFSET UNITYSDK_OFFSET(0x17FD0E90)
#define NCNMEKIJPOA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD05B0)

inline static constexpr unsigned int NCNMEKIJPOA_TypeDefinitionIndex = 9858;

class NCNMEKIJPOA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* NAEKHLDKJPC; // 0x10
	::BOEOIIMNDBK HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* OEKECBCLCEP; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* ODJBAKIIKEH; // 0x38
	::System::Int32 DPAHJIJPJDD; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Byte GCHCDJCFCEG; // 0x46
	::System::Byte CNIAANMNOCF; // 0x47
	::System::Int32 DGBAOOLLECB; // 0x48
	::System::Int32 DLDAMGEMJON; // 0x4C
	::System::Int32 HHADHEOCBHA; // 0x50

	::System::Void _ctor(::BOEOIIMNDBK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BOEOIIMNDBK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCNMEKIJPOA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 GPNPFJNJGIG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_GPNPFJNJGIG_OFFSET))(this);
	}

	::System::Int32 LPHDGJOMGIJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_LPHDGJOMGIJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MCJPFNJOEDO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_MCJPFNJOEDO_OFFSET))(this);
	}

	::System::Int32 BKPLGMAAAHH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_BKPLGMAAAHH_OFFSET))(this);
	}

	::System::Int32 NOLKHBLDIEF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_NOLKHBLDIEF_OFFSET))(this);
	}

	::System::String* OFDPIPIOLAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_OFDPIPIOLAA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JNNAALCPGNF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCNMEKIJPOA_JNNAALCPGNF_OFFSET))(this);
	}
};
