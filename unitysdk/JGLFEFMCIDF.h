#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NNCLKNMEGED.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JGLFEFMCIDF_ACCJFBKHGJJ_OFFSET UNITYSDK_OFFSET(0x18BC9E70)
#define JGLFEFMCIDF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BC9C40)
#define JGLFEFMCIDF_DLOPLJFNAHO_OFFSET UNITYSDK_OFFSET(0x18BCA290)
#define JGLFEFMCIDF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCA140)
#define JGLFEFMCIDF_FOJAIEALOLG_OFFSET UNITYSDK_OFFSET(0x18BC9D30)
#define JGLFEFMCIDF_GNKGJLCEHBH_OFFSET UNITYSDK_OFFSET(0x18BCA3D0)
#define JGLFEFMCIDF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BC9AF0)
#define JGLFEFMCIDF_MBJIJBEEMHD_OFFSET UNITYSDK_OFFSET(0x18BC9B00)
#define JGLFEFMCIDF_MGNNFIANOAC_OFFSET UNITYSDK_OFFSET(0x18BCA150)
#define JGLFEFMCIDF__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC9AE0)

inline static constexpr unsigned int JGLFEFMCIDF_TypeDefinitionIndex = 11451;

class JGLFEFMCIDF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DLBHHMLAIKF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* DDIFMDCLOOK; // 0x20
	::System::String* DKNMEDNDAPP; // 0x28
	::System::String* CDOAIAAMMBB; // 0x30
	::NNCLKNMEGED HBDPAIKANDB; // 0x38
	::System::Int32 FLJKHHBKDKB; // 0x48
	::System::Int32 PNHIMPBNMIH; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52
	::System::Byte _padding0[0x1];
	::System::Int32 KAKGDJBAEOI; // 0x54
	::System::Int32 GFLICNGMFCA; // 0x58

	::System::Void _ctor(::NNCLKNMEGED LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NNCLKNMEGED, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JGLFEFMCIDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MBJIJBEEMHD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_MBJIJBEEMHD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 FOJAIEALOLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_FOJAIEALOLG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* ACCJFBKHGJJ()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_ACCJFBKHGJJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MGNNFIANOAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_MGNNFIANOAC_OFFSET))(this);
	}

	::System::Int32 DLOPLJFNAHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_DLOPLJFNAHO_OFFSET))(this);
	}

	::System::String* GNKGJLCEHBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGLFEFMCIDF_GNKGJLCEHBH_OFFSET))(this);
	}
};
