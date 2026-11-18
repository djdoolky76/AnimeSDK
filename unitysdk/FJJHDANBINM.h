#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAGEGPEHNGB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJJHDANBINM_CMLDIOCJKFH_OFFSET UNITYSDK_OFFSET(0x19AF5120)
#define FJJHDANBINM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AF4C40)
#define FJJHDANBINM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AF4C30)
#define FJJHDANBINM_FOKNMMGHOMC_OFFSET UNITYSDK_OFFSET(0x19AF5010)
#define FJJHDANBINM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AF5000)
#define FJJHDANBINM_LNKDODJDIOC_OFFSET UNITYSDK_OFFSET(0x19AF4D30)
#define FJJHDANBINM__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF4C20)

inline static constexpr unsigned int FJJHDANBINM_TypeDefinitionIndex = 12022;

class FJJHDANBINM : public ::System::Object
{
public:
	::System::String* NDFAJJOBFEK; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JCJKNCHGMCE; // 0x18
	::System::String* AHALHALDPDJ; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::OAGEGPEHNGB HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42

	::System::Void _ctor(::OAGEGPEHNGB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OAGEGPEHNGB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FJJHDANBINM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJJHDANBINM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHDANBINM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LNKDODJDIOC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHDANBINM_LNKDODJDIOC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHDANBINM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FOKNMMGHOMC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHDANBINM_FOKNMMGHOMC_OFFSET))(this);
	}

	::System::String* CMLDIOCJKFH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJHDANBINM_CMLDIOCJKFH_OFFSET))(this);
	}
};
