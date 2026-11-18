#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/OPIOIFPNFJJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPNDCMMBKAO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADC07C0)
#define CPNDCMMBKAO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADC0FA0)
#define CPNDCMMBKAO_HNFEGIJMMEJ_OFFSET UNITYSDK_OFFSET(0x1ADC0CA0)
#define CPNDCMMBKAO_KMIIFNGOAEG_OFFSET UNITYSDK_OFFSET(0x1ADC08B0)
#define CPNDCMMBKAO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADC0B80)
#define CPNDCMMBKAO_LOIOOLJHMAC_OFFSET UNITYSDK_OFFSET(0x1ADC0B90)
#define CPNDCMMBKAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADC07B0)

inline static constexpr unsigned int CPNDCMMBKAO_TypeDefinitionIndex = 14347;

class CPNDCMMBKAO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IDDGHJFDOCM; // 0x10
	::OPIOIFPNFJJ HBDPAIKANDB; // 0x18
	::System::String* IHGMJMLLOIK; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::HNFADNMADCK>* ALPAGADJFDP; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::OPIOIFPNFJJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OPIOIFPNFJJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CPNDCMMBKAO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KMIIFNGOAEG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_KMIIFNGOAEG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LOIOOLJHMAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_LOIOOLJHMAC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* HNFEGIJMMEJ()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_HNFEGIJMMEJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPNDCMMBKAO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
