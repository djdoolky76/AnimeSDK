#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAKCPAHAPAL.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define AIOEAPMPJJD_BFFKEKHBGKF_OFFSET UNITYSDK_OFFSET(0x16D81390)
#define AIOEAPMPJJD_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x16D816E0)
#define AIOEAPMPJJD_GKIPDDINKID_OFFSET UNITYSDK_OFFSET(0x16D818B0)
#define AIOEAPMPJJD_JPOLBPCHLHK_OFFSET UNITYSDK_OFFSET(0x16D81B20)
#define AIOEAPMPJJD_KKFNPONHGEM_1_OFFSET UNITYSDK_OFFSET(0x16D81CA0)
#define AIOEAPMPJJD_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x16D81810)
#define AIOEAPMPJJD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16D81780)
#define AIOEAPMPJJD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D7ECF0)

inline static constexpr unsigned int AIOEAPMPJJD_TypeDefinitionIndex = 57482;

class AIOEAPMPJJD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Type*>** StaticGet_DACGMLNFFCI()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x4FF90);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_JBNCHJKJFIK()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x4FF98);
	}
	static ::Il2CppArray<::System::Object*>** StaticGet_HKDFICCCEPK()
	{
		return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x4FFA0);
	}
	static ::Il2CppArray<::System::Type*>** StaticGet_CBNKOBNMJBI()
	{
		return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x4FFA8);
	}
	static ::EAKCPAHAPAL* StaticGet_MIMDNKBCGOI()
	{
		return (::EAKCPAHAPAL*)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x13060);
	}
	static ::EAKCPAHAPAL* StaticGet_DMMAGBEGDCE()
	{
		return (::EAKCPAHAPAL*)Il2CppClass::FromTypeDefinitionIndex(AIOEAPMPJJD_TypeDefinitionIndex)->GetStaticField(0x13061);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOEAPMPJJD__CCTOR_OFFSET))();
	}

	static ::System::Void FLHNGDLANDC(::Il2CppArray<::System::Type*>* PLKAODHEMJC, ::EAKCPAHAPAL KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Type*>*, ::EAKCPAHAPAL))((::PBYTE)hIl2Cpp + AIOEAPMPJJD_FLHNGDLANDC_OFFSET))(PLKAODHEMJC, KPNIHKEKDOC);
	}

	static ::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOEAPMPJJD_PHOADBJGFBE_OFFSET))();
	}

	static ::EAKCPAHAPAL BFFKEKHBGKF(::Il2CppArray<::System::Object*>* MBKNHCBGNHK)
	{
		return ((::EAKCPAHAPAL(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + AIOEAPMPJJD_BFFKEKHBGKF_OFFSET))(MBKNHCBGNHK);
	}

	static ::System::Void KKFNPONHGEM(::Il2CppArray<::System::Type*>* PLKAODHEMJC, ::EAKCPAHAPAL KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::Il2CppArray<::System::Type*>*, ::EAKCPAHAPAL))((::PBYTE)hIl2Cpp + AIOEAPMPJJD_KKFNPONHGEM_OFFSET))(PLKAODHEMJC, KPNIHKEKDOC);
	}

	static ::EAKCPAHAPAL GKIPDDINKID(::EAKCPAHAPAL JMKGHAPJKID, ::EAKCPAHAPAL KFCHHCMCCGN, ::EAKCPAHAPAL& GMDAFKCJEHC)
	{
		return ((::EAKCPAHAPAL(*)(::EAKCPAHAPAL, ::EAKCPAHAPAL, ::EAKCPAHAPAL&))((::PBYTE)hIl2Cpp + AIOEAPMPJJD_GKIPDDINKID_OFFSET))(JMKGHAPJKID, KFCHHCMCCGN, GMDAFKCJEHC);
	}

	static ::System::Void JPOLBPCHLHK()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOEAPMPJJD_JPOLBPCHLHK_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM_1(::EAKCPAHAPAL KPNIHKEKDOC)
	{
		return ((::System::Void(*)(::EAKCPAHAPAL))((::PBYTE)hIl2Cpp + AIOEAPMPJJD_KKFNPONHGEM_1_OFFSET))(KPNIHKEKDOC);
	}
};
