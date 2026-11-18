#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPIIKNHKAHP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKLHCPPOKJH_ACDJEPMIKKP_OFFSET UNITYSDK_OFFSET(0x19322010)
#define FKLHCPPOKJH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19322140)
#define FKLHCPPOKJH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19322130)
#define FKLHCPPOKJH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19322120)
#define FKLHCPPOKJH_LMAMDCBOIME_OFFSET UNITYSDK_OFFSET(0x19322230)
#define FKLHCPPOKJH_MDMJEFBNFGM_OFFSET UNITYSDK_OFFSET(0x19321D40)
#define FKLHCPPOKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x19321D30)

inline static constexpr unsigned int FKLHCPPOKJH_TypeDefinitionIndex = 13816;

class FKLHCPPOKJH : public ::System::Object
{
public:
	::CPIIKNHKAHP HBDPAIKANDB; // 0x10
	::System::String* KIIGPAGKKKE; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* EIHEPCFLOOF; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 KMLDACLHLOO; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::CPIIKNHKAHP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CPIIKNHKAHP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FKLHCPPOKJH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MDMJEFBNFGM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_MDMJEFBNFGM_OFFSET))(this);
	}

	::System::String* ACDJEPMIKKP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_ACDJEPMIKKP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LMAMDCBOIME()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLHCPPOKJH_LMAMDCBOIME_OFFSET))(this);
	}
};
