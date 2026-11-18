#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFCKNAKJJKA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPDCANPKLCF_CALCPNKDGMK_OFFSET UNITYSDK_OFFSET(0x15787190)
#define BPDCANPKLCF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157870A0)
#define BPDCANPKLCF_EJANPONNDOC_OFFSET UNITYSDK_OFFSET(0x15786DD0)
#define BPDCANPKLCF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157872D0)
#define BPDCANPKLCF_HFDCDPMCNMM_OFFSET UNITYSDK_OFFSET(0x157872E0)
#define BPDCANPKLCF_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x157873F0)
#define BPDCANPKLCF_KHANGHKBBEB_OFFSET UNITYSDK_OFFSET(0x15787540)
#define BPDCANPKLCF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15787530)
#define BPDCANPKLCF__CTOR_OFFSET UNITYSDK_OFFSET(0x15786DC0)

inline static constexpr unsigned int BPDCANPKLCF_TypeDefinitionIndex = 15009;

class BPDCANPKLCF : public ::System::Object
{
public:
	::System::String* GGAPNJIMOPJ; // 0x10
	::MFCKNAKJJKA HBDPAIKANDB; // 0x18
	::System::String* DPOLCAJAMEL; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* BHGNGAOADLM; // 0x38
	::System::Int32 POKJNGILNLB; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte GCHCDJCFCEG; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46
	::System::Byte CNIAANMNOCF; // 0x47
	::System::Int32 OGNEPHBABNJ; // 0x48

	::System::Void _ctor(::MFCKNAKJJKA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MFCKNAKJJKA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BPDCANPKLCF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EJANPONNDOC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_EJANPONNDOC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 CALCPNKDGMK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_CALCPNKDGMK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BPDCANPKLCF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* HFDCDPMCNMM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_HFDCDPMCNMM_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KHANGHKBBEB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDCANPKLCF_KHANGHKBBEB_OFFSET))(this);
	}
};
