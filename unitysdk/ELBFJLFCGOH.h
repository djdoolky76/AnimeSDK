#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKNMDOHBDDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELBFJLFCGOH_AACFDDKFJHP_OFFSET UNITYSDK_OFFSET(0x19AE7460)
#define ELBFJLFCGOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AE7CD0)
#define ELBFJLFCGOH_DLELFJCPHNI_OFFSET UNITYSDK_OFFSET(0x19AE75A0)
#define ELBFJLFCGOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AE7440)
#define ELBFJLFCGOH_GJDKPEBAFDL_OFFSET UNITYSDK_OFFSET(0x19AE7DC0)
#define ELBFJLFCGOH_ICDCMBOBLBK_OFFSET UNITYSDK_OFFSET(0x19AE76E0)
#define ELBFJLFCGOH_IHEELLDPLDH_OFFSET UNITYSDK_OFFSET(0x19AE7940)
#define ELBFJLFCGOH_IPLACEIOFOK_OFFSET UNITYSDK_OFFSET(0x19AE7B90)
#define ELBFJLFCGOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AE7450)
#define ELBFJLFCGOH_MMLBFOANOEP_OFFSET UNITYSDK_OFFSET(0x19AE7A80)
#define ELBFJLFCGOH__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE7430)

inline static constexpr unsigned int ELBFJLFCGOH_TypeDefinitionIndex = 15968;

class ELBFJLFCGOH : public ::System::Object
{
public:
	::System::String* MMJFNDELFPK; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* GOIHMLBFILG; // 0x18
	::KKNMDOHBDDJ HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 MOBOKBFBOLM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 OFCPELBPPFC; // 0x40
	::System::Int32 OAHNCEKLEHG; // 0x44
	::System::Int32 HPJGINHPAPE; // 0x48
	::System::Int32 KBOMAMKLEDN; // 0x4C

	::System::Void _ctor(::KKNMDOHBDDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KKNMDOHBDDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ELBFJLFCGOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 AACFDDKFJHP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_AACFDDKFJHP_OFFSET))(this);
	}

	::System::Int32 DLELFJCPHNI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_DLELFJCPHNI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* ICDCMBOBLBK()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_ICDCMBOBLBK_OFFSET))(this);
	}

	::System::Int32 IHEELLDPLDH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_IHEELLDPLDH_OFFSET))(this);
	}

	::System::String* MMLBFOANOEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_MMLBFOANOEP_OFFSET))(this);
	}

	::System::Int32 IPLACEIOFOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_IPLACEIOFOK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GJDKPEBAFDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBFJLFCGOH_GJDKPEBAFDL_OFFSET))(this);
	}
};
