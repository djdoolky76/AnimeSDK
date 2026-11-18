#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class AOPLCFCANOO;
class IAHJCOLHDML;
class PFHNCJLIFHM;
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHGEGJNKDHC_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1527E850)
#define JHGEGJNKDHC_HJHPJGINEEG_OFFSET UNITYSDK_OFFSET(0x1527EB10)
#define JHGEGJNKDHC_JFBHGKHGHLO_OFFSET UNITYSDK_OFFSET(0x1527E720)
#define JHGEGJNKDHC_KGMDHHKEBCL_OFFSET UNITYSDK_OFFSET(0x1527EC90)
#define JHGEGJNKDHC_KJKLNJELKMP_OFFSET UNITYSDK_OFFSET(0x1527EC40)
#define JHGEGJNKDHC_KJLALGLCCMP_OFFSET UNITYSDK_OFFSET(0x1527E540)
#define JHGEGJNKDHC_LJDLLKOIDKA_OFFSET UNITYSDK_OFFSET(0x1527EDD0)
#define JHGEGJNKDHC_MGOJOEFEDGM_OFFSET UNITYSDK_OFFSET(0x1527ECF0)
#define JHGEGJNKDHC_OACAPHLENDB_OFFSET UNITYSDK_OFFSET(0x1527EFD0)
#define JHGEGJNKDHC_OCGNHCIPEIP_OFFSET UNITYSDK_OFFSET(0x1527E8E0)
#define JHGEGJNKDHC_ONSTART_OFFSET UNITYSDK_OFFSET(0x1527E3A0)
#define JHGEGJNKDHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1527E2A0)

inline static constexpr unsigned int JHGEGJNKDHC_TypeDefinitionIndex = 51577;

class JHGEGJNKDHC : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* HJBOFDIJEDF; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AEPBNKPMCEA; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::AOPLCFCANOO*>* FHBELDEBPGP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGEGJNKDHC__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_ONSTART_OFFSET))(this);
	}

	::System::Void KJLALGLCCMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_KJLALGLCCMP_OFFSET))(this);
	}

	::System::Void JFBHGKHGHLO(::PFHNCJLIFHM* GDINHGLCODO)
	{
		return ((::System::Void(*)(::PVOID, ::PFHNCJLIFHM*))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_JFBHGKHGHLO_OFFSET))(this, GDINHGLCODO);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void OCGNHCIPEIP(::System::UInt32 BKLGNCBNEGM, ::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_OCGNHCIPEIP_OFFSET))(this, BKLGNCBNEGM, AOCOIDIMLIH);
	}

	::System::Void KJKLNJELKMP(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_KJKLNJELKMP_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean KGMDHHKEBCL(::System::Int32 FKFEGMOBDOJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_KGMDHHKEBCL_OFFSET))(this, FKFEGMOBDOJ);
	}

	::System::Void MGOJOEFEDGM(::IAHJCOLHDML* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::IAHJCOLHDML*))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_MGOJOEFEDGM_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void HJHPJGINEEG(::System::Int32 AOCOIDIMLIH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_HJHPJGINEEG_OFFSET))(this, AOCOIDIMLIH);
	}

	::System::Void LJDLLKOIDKA(::System::Int32 AOCOIDIMLIH, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_LJDLLKOIDKA_OFFSET))(this, AOCOIDIMLIH, BKLGNCBNEGM);
	}

	::System::Void OACAPHLENDB(::System::Int32 AOCOIDIMLIH, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + JHGEGJNKDHC_OACAPHLENDB_OFFSET))(this, AOCOIDIMLIH, BKLGNCBNEGM);
	}
};
