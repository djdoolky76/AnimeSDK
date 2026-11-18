#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDJAILOIBIM.h"

namespace System { class String; }

#define ANDHPAGCAKD_AIIKJAGFBJP_OFFSET UNITYSDK_OFFSET(0x1700BEB0)
#define ANDHPAGCAKD_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1700BB70)
#define ANDHPAGCAKD_BMGEEIJFLIJ_OFFSET UNITYSDK_OFFSET(0x1700BEC0)
#define ANDHPAGCAKD_CAOBPCFPBIN_OFFSET UNITYSDK_OFFSET(0x1700BFC0)
#define ANDHPAGCAKD_EGFJBNHOKHG_OFFSET UNITYSDK_OFFSET(0x1700BB80)
#define ANDHPAGCAKD_KIJAJIHPBDL_OFFSET UNITYSDK_OFFSET(0x1700BD30)
#define ANDHPAGCAKD_KNONDCBFMDD_OFFSET UNITYSDK_OFFSET(0x1700BE30)
#define ANDHPAGCAKD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1700BCF0)
#define ANDHPAGCAKD__CTOR_OFFSET UNITYSDK_OFFSET(0x1700BC90)

inline static constexpr unsigned int ANDHPAGCAKD_TypeDefinitionIndex = 89995;

class ANDHPAGCAKD : public ::GDJAILOIBIM
{
public:
	static ::System::String** StaticGet_KMJMAJGGOCD()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ANDHPAGCAKD_TypeDefinitionIndex)->GetStaticField(0x42D30);
	}
	::System::Boolean IHLDIOOCHEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHPAGCAKD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANDHPAGCAKD__CCTOR_OFFSET))();
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHPAGCAKD_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Boolean EGFJBNHOKHG(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ANDHPAGCAKD_EGFJBNHOKHG_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void KIJAJIHPBDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHPAGCAKD_KIJAJIHPBDL_OFFSET))(this);
	}

	static ::System::Void AIIKJAGFBJP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + ANDHPAGCAKD_AIIKJAGFBJP_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void BMGEEIJFLIJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDHPAGCAKD_BMGEEIJFLIJ_OFFSET))(this);
	}

	static ::System::String* CAOBPCFPBIN()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + ANDHPAGCAKD_CAOBPCFPBIN_OFFSET))();
	}

	static ::System::Void KNONDCBFMDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANDHPAGCAKD_KNONDCBFMDD_OFFSET))();
	}
};
