#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOMPBCHLIBN.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define ACJHBPEODBJ_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1433D950)
#define ACJHBPEODBJ_BJCHJMNDNAD_OFFSET UNITYSDK_OFFSET(0x1433DBB0)
#define ACJHBPEODBJ_CADMAMFIOIE_OFFSET UNITYSDK_OFFSET(0x1433DAD0)
#define ACJHBPEODBJ_CGKPJKJNOOH_OFFSET UNITYSDK_OFFSET(0x1433DA70)
#define ACJHBPEODBJ_DILGLPEANLK_OFFSET UNITYSDK_OFFSET(0x1433DB10)
#define ACJHBPEODBJ_EJADACCCCED_OFFSET UNITYSDK_OFFSET(0x1433DAF0)
#define ACJHBPEODBJ_FPAGNENGMFK_OFFSET UNITYSDK_OFFSET(0x1433DAE0)
#define ACJHBPEODBJ_KBGNELPOJIB_OFFSET UNITYSDK_OFFSET(0x1433DBC0)
#define ACJHBPEODBJ_OCPJCFAOFKP_OFFSET UNITYSDK_OFFSET(0x1433DB00)
#define ACJHBPEODBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1433D940)

inline static constexpr unsigned int ACJHBPEODBJ_TypeDefinitionIndex = 88285;

class ACJHBPEODBJ : public ::System::Object
{
public:
	::NOMPBCHLIBN _ILPLIJEPGEO_k__BackingField; // 0x10
	::System::Int32 _AIAHFFHDECE_k__BackingField; // 0x30
	::System::Nullable_1<::System::Object*> _JHNFNONKGPB_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJHBPEODBJ__CTOR_OFFSET))(this);
	}

	static ::ACJHBPEODBJ* BBPCBEEHALC(::NOMPBCHLIBN& ACDIPDJOJNB)
	{
		return ((::ACJHBPEODBJ*(*)(::NOMPBCHLIBN&))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_BBPCBEEHALC_OFFSET))(ACDIPDJOJNB);
	}

	::System::Int32 CADMAMFIOIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_CADMAMFIOIE_OFFSET))(this);
	}

	::System::Void FPAGNENGMFK(::NOMPBCHLIBN EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NOMPBCHLIBN))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_FPAGNENGMFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Nullable_1<::System::Object*> EJADACCCCED()
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_EJADACCCCED_OFFSET))(this);
	}

	::System::Void OCPJCFAOFKP(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_OCPJCFAOFKP_OFFSET))(this, EGEGIMGMJHN);
	}

	static ::System::Nullable_1<::System::Object*> CGKPJKJNOOH(::NOMPBCHLIBN& ACDIPDJOJNB)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::NOMPBCHLIBN&))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_CGKPJKJNOOH_OFFSET))(ACDIPDJOJNB);
	}

	static ::System::Void DILGLPEANLK(::ACJHBPEODBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::ACJHBPEODBJ*))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_DILGLPEANLK_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void BJCHJMNDNAD(::System::Nullable_1<::System::Object*> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Object*>))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_BJCHJMNDNAD_OFFSET))(this, EGEGIMGMJHN);
	}

	::NOMPBCHLIBN KBGNELPOJIB()
	{
		return ((::NOMPBCHLIBN(*)(::PVOID))((::PBYTE)hIl2Cpp + ACJHBPEODBJ_KBGNELPOJIB_OFFSET))(this);
	}
};
