#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFMBHLJFOEN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENAFIAEGGGN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B9BF230)
#define ENAFIAEGGGN_DHDIOCOGIDP_OFFSET UNITYSDK_OFFSET(0x1B9BECF0)
#define ENAFIAEGGGN_EHIKHEIHKJM_OFFSET UNITYSDK_OFFSET(0x1B9BEF60)
#define ENAFIAEGGGN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B9BEF50)
#define ENAFIAEGGGN_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1B9BEE30)
#define ENAFIAEGGGN_IBJJDNCCIJH_OFFSET UNITYSDK_OFFSET(0x1B9BF320)
#define ENAFIAEGGGN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B9BEF40)
#define ENAFIAEGGGN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9BECE0)

inline static constexpr unsigned int ENAFIAEGGGN_TypeDefinitionIndex = 9308;

class ENAFIAEGGGN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* KDJPOJIEHFL; // 0x18
	::NFMBHLJFOEN HBDPAIKANDB; // 0x20
	::System::String* GPNJCCHKLIP; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 CDNHHCAIAAD; // 0x3C
	::System::Int32 FBCGIAPIMBF; // 0x40

	::System::Void _ctor(::NFMBHLJFOEN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NFMBHLJFOEN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ENAFIAEGGGN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DHDIOCOGIDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_DHDIOCOGIDP_OFFSET))(this);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EHIKHEIHKJM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_EHIKHEIHKJM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 IBJJDNCCIJH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENAFIAEGGGN_IBJJDNCCIJH_OFFSET))(this);
	}
};
