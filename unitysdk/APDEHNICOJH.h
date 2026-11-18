#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJLEJPNJPNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define APDEHNICOJH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A73DE0)
#define APDEHNICOJH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A741A0)
#define APDEHNICOJH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A73DD0)
#define APDEHNICOJH_PFEPNHDDEFM_OFFSET UNITYSDK_OFFSET(0x17A73ED0)
#define APDEHNICOJH__CTOR_OFFSET UNITYSDK_OFFSET(0x17A73DC0)

inline static constexpr unsigned int APDEHNICOJH_TypeDefinitionIndex = 12660;

class APDEHNICOJH : public ::System::Object
{
public:
	::NJLEJPNJPNM HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* ICBHEALPMOI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::NJLEJPNJPNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NJLEJPNJPNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + APDEHNICOJH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEHNICOJH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEHNICOJH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PFEPNHDDEFM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + APDEHNICOJH_PFEPNHDDEFM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APDEHNICOJH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
