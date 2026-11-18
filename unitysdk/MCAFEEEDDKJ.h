#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPBOHLFAOGD.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ANDNNFHEGDH.h"

#define MCAFEEEDDKJ_FGJHFIHNDAI_OFFSET UNITYSDK_OFFSET(0x12D4FE30)
#define MCAFEEEDDKJ_HBDBJDANMLP_OFFSET UNITYSDK_OFFSET(0x12D50380)
#define MCAFEEEDDKJ_JDFDCPGLHHO_OFFSET UNITYSDK_OFFSET(0x12D50320)
#define MCAFEEEDDKJ_LCJFCCAIONA_1_OFFSET UNITYSDK_OFFSET(0x12D502A0)
#define MCAFEEEDDKJ_MOLOJPAPBEN_OFFSET UNITYSDK_OFFSET(0x12D50390)
#define MCAFEEEDDKJ_PAJJLOAPJIF_OFFSET UNITYSDK_OFFSET(0x12D50100)
#define MCAFEEEDDKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x12D500C0)
#define MCAFEEEDDKJ__CTOR_1_OFFSET UNITYSDK_OFFSET(0x12D4FCE0)
#define MCAFEEEDDKJ__CTOR_2_OFFSET UNITYSDK_OFFSET(0x12D4FFB0)
#define MCAFEEEDDKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12D4FCD0)

inline static constexpr unsigned int MCAFEEEDDKJ_TypeDefinitionIndex = 55628;

class MCAFEEEDDKJ : public ::System::Object
{
public:
	static ::MCAFEEEDDKJ** StaticGet_FDJHEBHLJLD()
	{
		return (::MCAFEEEDDKJ**)Il2CppClass::FromTypeDefinitionIndex(MCAFEEEDDKJ_TypeDefinitionIndex)->GetStaticField(0x3A400);
	}
	::Il2CppArray<::System::Nullable_1<::System::UInt32>>* OBOGHNJFKKF; // 0x10
	::System::UInt32 PKGMMHJHKPN; // 0x18
	::System::Byte _padding0[0x4];
	::NPBOHLFAOGD OIBIELGBOBN; // 0x20
	::System::Boolean _OGLOBILPADH_k__BackingField; // 0x30
	::System::Byte _padding1[0x3];
	::System::UInt32 DKNKDGHDKGL; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::UInt32>* HOEBCFOPLNG)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ__CTOR_1_OFFSET))(this, HOEBCFOPLNG);
	}

	::System::Void _ctor_2(::ANDNNFHEGDH& HICCEBKMHAP)
	{
		return ((::System::Void(*)(::PVOID, ::ANDNNFHEGDH&))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ__CTOR_2_OFFSET))(this, HICCEBKMHAP);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCAFEEEDDKJ__CCTOR_OFFSET))();
	}

	::System::Boolean PAJJLOAPJIF(::ANDNNFHEGDH HICCEBKMHAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ANDNNFHEGDH))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_PAJJLOAPJIF_OFFSET))(this, HICCEBKMHAP);
	}

	::System::Nullable_1<::System::UInt32> LCJFCCAIONA_1(::System::UInt32 NPDPOCGHFHG)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_LCJFCCAIONA_1_OFFSET))(this, NPDPOCGHFHG);
	}

	::System::Boolean JDFDCPGLHHO(::ANDNNFHEGDH HICCEBKMHAP)
	{
		return ((::System::Boolean(*)(::PVOID, ::ANDNNFHEGDH))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_JDFDCPGLHHO_OFFSET))(this, HICCEBKMHAP);
	}

	::NPBOHLFAOGD& HBDBJDANMLP()
	{
		return ((::NPBOHLFAOGD&(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_HBDBJDANMLP_OFFSET))(this);
	}

	::System::Boolean MOLOJPAPBEN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_MOLOJPAPBEN_OFFSET))(this);
	}

	::System::Void FGJHFIHNDAI(::NPBOHLFAOGD DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::NPBOHLFAOGD))((::PBYTE)hIl2Cpp + MCAFEEEDDKJ_FGJHFIHNDAI_OFFSET))(this, DOOHCBBJGFD);
	}
};
