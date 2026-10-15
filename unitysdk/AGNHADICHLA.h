#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGNHADICHLA_UsageTag.h"
class AGNHADICHLA;
class GGJFAFONDHN;
class GGJFAFONDHN_ABBHOAPACDI;
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }

#define AGNHADICHLA_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xCF45380)
#define AGNHADICHLA_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xCF44D00)
#define AGNHADICHLA_AHGNCDFAFBM_OFFSET UNITYSDK_OFFSET(0xCF45440)
#define AGNHADICHLA_BCFJJBAKCGB_OFFSET UNITYSDK_OFFSET(0xCF45600)
#define AGNHADICHLA_CBPIGOCOHLK_OFFSET UNITYSDK_OFFSET(0xCF45C70)
#define AGNHADICHLA_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF45EF0)
#define AGNHADICHLA_CLPGEPMNFKJ_OFFSET UNITYSDK_OFFSET(0xCF451F0)
#define AGNHADICHLA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF44EC0)
#define AGNHADICHLA_DBDBBMCLMHD_OFFSET UNITYSDK_OFFSET(0xCF45C10)
#define AGNHADICHLA_DJLODJIBKDK_OFFSET UNITYSDK_OFFSET(0xCF44F60)
#define AGNHADICHLA_DOOGNBOHBFG_OFFSET UNITYSDK_OFFSET(0xCF459A0)
#define AGNHADICHLA_EOIDCABMDEN_OFFSET UNITYSDK_OFFSET(0xCF452A0)
#define AGNHADICHLA_GCJIFADKJPP_OFFSET UNITYSDK_OFFSET(0xCF45EE0)
#define AGNHADICHLA_GHDAHIBIODB_OFFSET UNITYSDK_OFFSET(0xCF45D70)
#define AGNHADICHLA_HFFCOKIMJGL_OFFSET UNITYSDK_OFFSET(0xCF45640)
#define AGNHADICHLA_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0xCF45BC0)
#define AGNHADICHLA_MGLOJLBMOGE_OFFSET UNITYSDK_OFFSET(0xCF45ED0)
#define AGNHADICHLA_NCEMKLHGGIO_OFFSET UNITYSDK_OFFSET(0xCF454B0)
#define AGNHADICHLA_NDINLCMBHMG_OFFSET UNITYSDK_OFFSET(0xCF44FB0)
#define AGNHADICHLA_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xCF45190)
#define AGNHADICHLA_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0xCF45040)
#define AGNHADICHLA_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0xCF45E40)

inline static constexpr unsigned int AGNHADICHLA_TypeDefinitionIndex = 49510;

	class AGNHADICHLA
	{
	public:
		::System::Type* GGPLAEOOHJO; // 0x60
		::UnityEngine::GameObject* ICKNGGICIBO; // 0x68
		::System::Boolean GDGBOFIGCMP; // 0x70
		::System::Byte _padding0[0x3];
		::AGNHADICHLA_UsageTag HDEOGJGLLPE; // 0x74
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "AGNHADICHLA")->GetStaticField(0x54570);
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AGNHADICHLA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGNHADICHLA_CCTOR_OFFSET))();
		}

		static ::AGNHADICHLA* ACMKLFOMPFC(::System::String* a1, ::System::String* a2)
		{
			return ((::AGNHADICHLA*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AGNHADICHLA_ACMKLFOMPFC_OFFSET))(a1, a2);
		}

		static ::System::Void NDINLCMBHMG(::AGNHADICHLA* a1)
		{
			return ((::System::Void(*)(::AGNHADICHLA*))((::PBYTE)hIl2Cpp + AGNHADICHLA_NDINLCMBHMG_OFFSET))(a1);
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_PKCKPFHCODN_OFFSET))(this);
		}

		::System::Void EOIDCABMDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_EOIDCABMDEN_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void AHGNCDFAFBM(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + AGNHADICHLA_AHGNCDFAFBM_OFFSET))(this, a1);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void NCEMKLHGGIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_NCEMKLHGGIO_OFFSET))(this);
		}

		::System::Void CLPGEPMNFKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_CLPGEPMNFKJ_OFFSET))(this);
		}

		::System::Type* BCFJJBAKCGB()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_BCFJJBAKCGB_OFFSET))(this);
		}

		::System::Void DJLODJIBKDK(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AGNHADICHLA_DJLODJIBKDK_OFFSET))(this, a1);
		}

		::System::Void HFFCOKIMJGL(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGNHADICHLA_HFFCOKIMJGL_OFFSET))(this, a1, a2);
		}

		::System::Void DOOGNBOHBFG(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGNHADICHLA_DOOGNBOHBFG_OFFSET))(this, a1, a2);
		}

		::System::Boolean LHMGOMFKMLB(::GGJFAFONDHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AGNHADICHLA_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void DBDBBMCLMHD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AGNHADICHLA_DBDBBMCLMHD_OFFSET))(this, a1);
		}

		::GGJFAFONDHN* CBPIGOCOHLK()
		{
			return ((::GGJFAFONDHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_CBPIGOCOHLK_OFFSET))(this);
		}

		::System::Void PPEGOIODAKI(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AGNHADICHLA_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Boolean MGLOJLBMOGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_MGLOJLBMOGE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GCJIFADKJPP()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_GCJIFADKJPP_OFFSET))(this);
		}

		::System::String* GHDAHIBIODB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNHADICHLA_GHDAHIBIODB_OFFSET))(this);
		}

	};
