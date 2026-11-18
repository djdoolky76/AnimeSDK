#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define IJIPIBDKBPL_AANNKNGMHBJ_OFFSET UNITYSDK_OFFSET(0x153AF9F0)
#define IJIPIBDKBPL_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x153AFA20)
#define IJIPIBDKBPL_DHPGACHFHGH_OFFSET UNITYSDK_OFFSET(0x153AF9E0)
#define IJIPIBDKBPL_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x153AFAF0)
#define IJIPIBDKBPL_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x153AF950)
#define IJIPIBDKBPL_GPNDCOEEKMN_OFFSET UNITYSDK_OFFSET(0x153AFA10)
#define IJIPIBDKBPL_HHNIJJIJOIK_OFFSET UNITYSDK_OFFSET(0x153AFA00)
#define IJIPIBDKBPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x153AF8D0)
#define IJIPIBDKBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x153AF940)

inline static constexpr unsigned int IJIPIBDKBPL_TypeDefinitionIndex = 72317;

class IJIPIBDKBPL : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x4B; // 0x0
	::System::String* PKGDBDFHOMO; // 0x20
	::Il2CppArray<::System::String*>* FGNPNBCADEP; // 0x28
	::System::UInt32 _FKDHEMFLAGI_k__BackingField; // 0x30
	::System::Boolean MDBODILBDMG; // 0x34
	::System::Byte _padding0[0x3];
	::System::UInt32 _OGJBIEJBADN_k__BackingField; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IJIPIBDKBPL__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIBDKBPL__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void DHPGACHFHGH(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_DHPGACHFHGH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 AANNKNGMHBJ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_AANNKNGMHBJ_OFFSET))(this);
	}

	::System::Void HHNIJJIJOIK(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_HHNIJJIJOIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 GPNDCOEEKMN()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_GPNDCOEEKMN_OFFSET))(this);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 GFLBJOJOOIK, ::System::UInt32 OJJNNFNLCED, ::System::UInt32 AFAOIKBJIGI, ::System::String* PKGDBDFHOMO, ::Il2CppArray<::System::String*>* FGNPNBCADEP, ::System::Boolean MGKCGKAJMDL)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_CNHBDOMKKDE_OFFSET))(this, GFLBJOJOOIK, OJJNNFNLCED, AFAOIKBJIGI, PKGDBDFHOMO, FGNPNBCADEP, MGKCGKAJMDL);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJIPIBDKBPL_FIGPAOKNJLN_OFFSET))(this);
	}
};
