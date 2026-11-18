#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOEMOACNPMC_DEONDJGBBKC_OFFSET UNITYSDK_OFFSET(0x1819A770)
#define HOEMOACNPMC_FOIDBPJOHIO_OFFSET UNITYSDK_OFFSET(0x1819A630)
#define HOEMOACNPMC_HDOONDIDMOC_OFFSET UNITYSDK_OFFSET(0x1819A7C0)
#define HOEMOACNPMC_NGHGGGFKPGF_OFFSET UNITYSDK_OFFSET(0x1819A8B0)
#define HOEMOACNPMC_PCAMNOEFMDP_1_OFFSET UNITYSDK_OFFSET(0x1819A4C0)
#define HOEMOACNPMC_PCAMNOEFMDP_2_OFFSET UNITYSDK_OFFSET(0x1819A6B0)
#define HOEMOACNPMC_PCAMNOEFMDP_OFFSET UNITYSDK_OFFSET(0x1819A470)
#define HOEMOACNPMC_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x1819A410)
#define HOEMOACNPMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1819A8A0)

inline static constexpr unsigned int HOEMOACNPMC_TypeDefinitionIndex = 84202;

class HOEMOACNPMC : public ::System::Object
{
public:
	// static const ::System::Int32 DIFOHAIIDPG = 0x7FFFFFFF; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC__CTOR_OFFSET))(this);
	}

	::System::Double PKAFJHDJEDO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC_PKAFJHDJEDO_OFFSET))(this);
	}

	::System::Int32 PCAMNOEFMDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC_PCAMNOEFMDP_OFFSET))(this);
	}

	::System::Int32 PCAMNOEFMDP_1(::System::Int32 FBCNNPLFAAG, ::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOEMOACNPMC_PCAMNOEFMDP_1_OFFSET))(this, FBCNNPLFAAG, GOKEGHENOGP);
	}

	::System::Int32 PCAMNOEFMDP_2(::System::Int32 GOKEGHENOGP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOEMOACNPMC_PCAMNOEFMDP_2_OFFSET))(this, GOKEGHENOGP);
	}

	::System::Double DEONDJGBBKC()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC_DEONDJGBBKC_OFFSET))(this);
	}

	::System::Void HDOONDIDMOC(::Il2CppArray<::System::Byte>* PMAMMGFJAJL)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HOEMOACNPMC_HDOONDIDMOC_OFFSET))(this, PMAMMGFJAJL);
	}

	static ::HOEMOACNPMC* NGHGGGFKPGF(::System::Int32 GONODCOMIAA)
	{
		return ((::HOEMOACNPMC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HOEMOACNPMC_NGHGGGFKPGF_OFFSET))(GONODCOMIAA);
	}

	::System::Double FOIDBPJOHIO()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HOEMOACNPMC_FOIDBPJOHIO_OFFSET))(this);
	}
};
