#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDOPMDCILCK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ACLNGAANBDP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A512430)
#define ACLNGAANBDP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A511F00)
#define ACLNGAANBDP_HLPJLCNEOIH_OFFSET UNITYSDK_OFFSET(0x1A512520)
#define ACLNGAANBDP_HMPFPCCBKMJ_OFFSET UNITYSDK_OFFSET(0x1A512050)
#define ACLNGAANBDP_ILCKGOLIOGM_OFFSET UNITYSDK_OFFSET(0x1A511F10)
#define ACLNGAANBDP_KFIFFEIKJEG_OFFSET UNITYSDK_OFFSET(0x1A511DC0)
#define ACLNGAANBDP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A511DB0)
#define ACLNGAANBDP_PMLNHFGDHAA_OFFSET UNITYSDK_OFFSET(0x1A512160)
#define ACLNGAANBDP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A511DA0)

inline static constexpr unsigned int ACLNGAANBDP_TypeDefinitionIndex = 9756;

class ACLNGAANBDP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* MKLMIBCIPJF; // 0x10
	::NDOPMDCILCK HBDPAIKANDB; // 0x18
	::System::String* HMCEMPIOHNM; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* LLOOJKNKCKD; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte ACIOBDEBDNK; // 0x43
	::System::Int32 LGHJJEEJMIG; // 0x44
	::System::Int32 LHNEFHNNGCE; // 0x48

	::System::Void _ctor(::NDOPMDCILCK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDOPMDCILCK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ACLNGAANBDP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 KFIFFEIKJEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_KFIFFEIKJEG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACLNGAANBDP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ILCKGOLIOGM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_ILCKGOLIOGM_OFFSET))(this);
	}

	::System::String* HMPFPCCBKMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_HMPFPCCBKMJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PMLNHFGDHAA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_PMLNHFGDHAA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HLPJLCNEOIH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLNGAANBDP_HLPJLCNEOIH_OFFSET))(this);
	}
};
