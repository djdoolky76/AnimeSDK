#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELNECDIHJFA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/cfg/SceneSizeType.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ELHFNPIPAGP_AEMLNCLMHKL_OFFSET UNITYSDK_OFFSET(0x1ADD74D0)
#define ELHFNPIPAGP_BALCHJECMJI_OFFSET UNITYSDK_OFFSET(0x1ADD6EF0)
#define ELHFNPIPAGP_BKNENHNIOCA_OFFSET UNITYSDK_OFFSET(0x1ADD7030)
#define ELHFNPIPAGP_CABFABMELAN_OFFSET UNITYSDK_OFFSET(0x1ADD7180)
#define ELHFNPIPAGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1ADD7290)
#define ELHFNPIPAGP_DBDCNFIMEKA_OFFSET UNITYSDK_OFFSET(0x1ADD7390)
#define ELHFNPIPAGP_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1ADD7700)
#define ELHFNPIPAGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1ADD7380)
#define ELHFNPIPAGP_IOIENACFPEP_OFFSET UNITYSDK_OFFSET(0x1ADD7810)
#define ELHFNPIPAGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1ADD75E0)
#define ELHFNPIPAGP_PLOHAMOJHMJ_OFFSET UNITYSDK_OFFSET(0x1ADD75F0)
#define ELHFNPIPAGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADD6EE0)

inline static constexpr unsigned int ELHFNPIPAGP_TypeDefinitionIndex = 11795;

class ELHFNPIPAGP : public ::System::Object
{
public:
	::System::String* PBOEHPPEHMP; // 0x10
	::System::String* LKFDDPFNKPP; // 0x18
	::System::String* DEJGDJJGKHC; // 0x20
	::System::String* OAANNOLHBJJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::ELNECDIHJFA HBDPAIKANDB; // 0x38
	::System::String* IENCBDEPMFJ; // 0x48
	::System::Int32 BHEKONHJFLP; // 0x50
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x54
	::System::Byte GCHCDJCFCEG; // 0x55
	::System::Byte ACIOBDEBDNK; // 0x56
	::System::Byte CNIAANMNOCF; // 0x57
	::System::Int32 FIEFFNIOMHA; // 0x58
	::cfg::SceneSizeType ECEAKJCFLPA; // 0x5C

	::System::Void _ctor(::ELNECDIHJFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ELNECDIHJFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELHFNPIPAGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 BALCHJECMJI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_BALCHJECMJI_OFFSET))(this);
	}

	::cfg::SceneSizeType BKNENHNIOCA()
	{
		return ((::cfg::SceneSizeType(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_BKNENHNIOCA_OFFSET))(this);
	}

	::System::String* CABFABMELAN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_CABFABMELAN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DBDCNFIMEKA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_DBDCNFIMEKA_OFFSET))(this);
	}

	::System::String* AEMLNCLMHKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_AEMLNCLMHKL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PLOHAMOJHMJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_PLOHAMOJHMJ_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_DECMGICKDLH_OFFSET))(this);
	}

	::System::String* IOIENACFPEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELHFNPIPAGP_IOIENACFPEP_OFFSET))(this);
	}
};
