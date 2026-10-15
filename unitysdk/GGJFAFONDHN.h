#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
#include "unitysdk/System/Object.h"
class GGJFAFONDHN;
namespace System { class String; }

#define GGJFAFONDHN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x15A011A0)
#define GGJFAFONDHN_BJGAMILJOIC_OFFSET UNITYSDK_OFFSET(0x15A01250)
#define GGJFAFONDHN_BMAFJDHDMMM_OFFSET UNITYSDK_OFFSET(0x15A012A0)
#define GGJFAFONDHN_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0x15A00AE0)
#define GGJFAFONDHN_CDLAKKMHGLK_OFFSET UNITYSDK_OFFSET(0x15A01370)
#define GGJFAFONDHN_CJPIHHIOCMB_OFFSET UNITYSDK_OFFSET(0x15A015C0)
#define GGJFAFONDHN_CTOR_OFFSET UNITYSDK_OFFSET(0x15A00B20)
#define GGJFAFONDHN_ELAKGHOKPBB_OFFSET UNITYSDK_OFFSET(0x15A01410)
#define GGJFAFONDHN_EMJAIOEDENB_OFFSET UNITYSDK_OFFSET(0x15A01350)
#define GGJFAFONDHN_EOIDCABMDEN_OFFSET UNITYSDK_OFFSET(0x15A011E0)
#define GGJFAFONDHN_FEPKGGKNOIC_OFFSET UNITYSDK_OFFSET(0x15A01360)
#define GGJFAFONDHN_GDGKOFCPJMN_OFFSET UNITYSDK_OFFSET(0x15A013C0)
#define GGJFAFONDHN_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x15A012E0)
#define GGJFAFONDHN_GNKHMNJEDML_OFFSET UNITYSDK_OFFSET(0x15A00D00)
#define GGJFAFONDHN_GPMDFFNHGPB_OFFSET UNITYSDK_OFFSET(0x15A01420)
#define GGJFAFONDHN_IJCDEINGADN_OFFSET UNITYSDK_OFFSET(0x15A01490)
#define GGJFAFONDHN_JMPKOONKKPC_OFFSET UNITYSDK_OFFSET(0x15A014D0)
#define GGJFAFONDHN_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0x15A01690)
#define GGJFAFONDHN_LLAEKPGIPFB_OFFSET UNITYSDK_OFFSET(0x15A01300)
#define GGJFAFONDHN_MOLJGEGPIMA_OFFSET UNITYSDK_OFFSET(0x15A01430)
#define GGJFAFONDHN_OAJDEKGLGLK_OFFSET UNITYSDK_OFFSET(0x15A01440)
#define GGJFAFONDHN_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0x15A00B50)
#define GGJFAFONDHN_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x15A016E0)
#define GGJFAFONDHN_SET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x15A012F0)
#define GGJFAFONDHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A01750)

inline static constexpr unsigned int GGJFAFONDHN_TypeDefinitionIndex = 49513;

	class GGJFAFONDHN : public ::System::Object
	{
	public:
		::System::String* _InternalName_k__BackingField; // 0x10
		::System::String* PEGDHJKLBEM; // 0x18
		::System::Int32 IGCDCFGJMCL; // 0x20
		::System::Int32 LFDIFAAKEBC; // 0x24
		::System::Boolean OKIMAEDNHDB; // 0x28
		::System::Boolean CGNFKCNJPCG; // 0x29
		::System::Boolean CIDINDMHIFH; // 0x2A
		::System::Byte _padding0[0x1];
		::System::Int32 KHANOHKBGCH; // 0x2C
		::EnviromentSystemV2Space::PropertyType MBCILAGJJBL; // 0x30
		::System::Int32 JFAGMFGBJMH; // 0x34
		::System::Boolean MANKLOKDNII; // 0x38
		::System::Boolean MFEOAKMDMAC; // 0x39
		static ::System::Int32* StaticGet_ICLFBBLLOCH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GGJFAFONDHN")->GetStaticField(0x149A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_CTOR_OFFSET))(this);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_CBPIGOCOHLK_OFFSET))(this);
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_PKCKPFHCODN_OFFSET))(this);
		}

		::System::Void GNKHMNJEDML(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_GNKHMNJEDML_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void EOIDCABMDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_EOIDCABMDEN_OFFSET))(this);
		}

		::System::Void BMAFJDHDMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_BMAFJDHDMMM_OFFSET))(this);
		}

		::System::String* get_InternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_GET_INTERNALNAME_OFFSET))(this);
		}

		::System::Void set_InternalName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_SET_INTERNALNAME_OFFSET))(this, a1);
		}

		::System::Void LLAEKPGIPFB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_LLAEKPGIPFB_OFFSET))(this, a1);
		}

		::System::Boolean EMJAIOEDENB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_EMJAIOEDENB_OFFSET))(this);
		}

		::System::Boolean FEPKGGKNOIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_FEPKGGKNOIC_OFFSET))(this);
		}

		::System::Void CDLAKKMHGLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJFAFONDHN_CDLAKKMHGLK_OFFSET))(this, a1);
		}

		::System::Void GDGKOFCPJMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJFAFONDHN_GDGKOFCPJMN_OFFSET))(this, a1);
		}

		::EnviromentSystemV2Space::PropertyType ELAKGHOKPBB()
		{
			return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_ELAKGHOKPBB_OFFSET))(this);
		}

		::System::Boolean GPMDFFNHGPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_GPMDFFNHGPB_OFFSET))(this);
		}

		::System::Boolean MOLJGEGPIMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_MOLJGEGPIMA_OFFSET))(this);
		}

		::System::Void OAJDEKGLGLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJFAFONDHN_OAJDEKGLGLK_OFFSET))(this, a1);
		}

		::System::Boolean IJCDEINGADN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_IJCDEINGADN_OFFSET))(this);
		}

		::System::Void JMPKOONKKPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJFAFONDHN_JMPKOONKKPC_OFFSET))(this, a1);
		}

		::System::Void CJPIHHIOCMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_CJPIHHIOCMB_OFFSET))(this);
		}

		::System::Void BJGAMILJOIC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGJFAFONDHN_BJGAMILJOIC_OFFSET))(this, a1);
		}

		::System::Boolean LHMGOMFKMLB(::GGJFAFONDHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + GGJFAFONDHN_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGJFAFONDHN_TOSTRING_OFFSET))(this);
		}

	};
