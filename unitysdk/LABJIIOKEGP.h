#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGNHADICHLA.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class GGJFAFONDHN_ABBHOAPACDI;
class HBEABJKBJAL;
class LABJIIOKEGP;
class PNEMLMAGOMM;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define LABJIIOKEGP_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB5D0480)
#define LABJIIOKEGP_ACMKLFOMPFC_1_OFFSET UNITYSDK_OFFSET(0xB5D0750)
#define LABJIIOKEGP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xB5D05B0)
#define LABJIIOKEGP_BMAFJDHDMMM_OFFSET UNITYSDK_OFFSET(0xB5CFE40)
#define LABJIIOKEGP_BMFDLLJFKML_OFFSET UNITYSDK_OFFSET(0xB5D0200)
#define LABJIIOKEGP_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5D0870)
#define LABJIIOKEGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D01C0)
#define LABJIIOKEGP_DNHMJBOPONA_OFFSET UNITYSDK_OFFSET(0xB5D0340)
#define LABJIIOKEGP_EOIDCABMDEN_OFFSET UNITYSDK_OFFSET(0xB5D0110)
#define LABJIIOKEGP_MONCPDPAGFL_OFFSET UNITYSDK_OFFSET(0xB5D0500)
#define LABJIIOKEGP_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xB5D0210)
#define LABJIIOKEGP_PKCKPFHCODN_OFFSET UNITYSDK_OFFSET(0xB5D0820)
#define LABJIIOKEGP_PLFDCONMOKD_OFFSET UNITYSDK_OFFSET(0xB5D03E0)

inline static constexpr unsigned int LABJIIOKEGP_TypeDefinitionIndex = 49504;

	class LABJIIOKEGP : public ::AGNHADICHLA
	{
	public:
		::UnityEngine::GameObject* PBHBHECOCND; // 0x78
		::HBEABJKBJAL* GIAABPCBIND; // 0x80
		::PNEMLMAGOMM* HLJFJJALIOJ; // 0x88
		::EnviromentSystemV2Space::EnvCallbackCurveType OLBMJKIKBLG; // 0x90
		static ::GGJFAFONDHN_ABBHOAPACDI** StaticGet_MFPNICMCKJG()
		{
			return (::GGJFAFONDHN_ABBHOAPACDI**)UnitySDK::FromName("", "LABJIIOKEGP")->GetStaticField(0x63CC0);
		}

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + LABJIIOKEGP_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LABJIIOKEGP_CCTOR_OFFSET))();
		}

		::System::Void BMAFJDHDMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJIIOKEGP_BMAFJDHDMMM_OFFSET))(this);
		}

		::System::Void EOIDCABMDEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJIIOKEGP_EOIDCABMDEN_OFFSET))(this);
		}

		::HBEABJKBJAL* BMFDLLJFKML()
		{
			return ((::HBEABJKBJAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJIIOKEGP_BMFDLLJFKML_OFFSET))(this);
		}

		::System::Void NLKPKABOIPJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LABJIIOKEGP_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* DNHMJBOPONA(::System::Single a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LABJIIOKEGP_DNHMJBOPONA_OFFSET))(this, a1);
		}

		::System::Void PLFDCONMOKD(::HBEABJKBJAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBEABJKBJAL*))((::PBYTE)hIl2Cpp + LABJIIOKEGP_PLFDCONMOKD_OFFSET))(this, a1);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJIIOKEGP_ABKBOGIGAEH_OFFSET))(this);
		}

		static ::LABJIIOKEGP* ACMKLFOMPFC(::System::String* a1, ::System::String* a2, ::EnviromentSystemV2Space::EnvCallbackCurveType a3)
		{
			return ((::LABJIIOKEGP*(*)(::System::String*, ::System::String*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + LABJIIOKEGP_ACMKLFOMPFC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void MONCPDPAGFL(::LABJIIOKEGP* a1)
		{
			return ((::System::Void(*)(::LABJIIOKEGP*))((::PBYTE)hIl2Cpp + LABJIIOKEGP_MONCPDPAGFL_OFFSET))(a1);
		}

		static ::LABJIIOKEGP* ACMKLFOMPFC_1(::HBEABJKBJAL* a1, ::System::String* a2, ::EnviromentSystemV2Space::EnvCallbackCurveType a3)
		{
			return ((::LABJIIOKEGP*(*)(::HBEABJKBJAL*, ::System::String*, ::EnviromentSystemV2Space::EnvCallbackCurveType))((::PBYTE)hIl2Cpp + LABJIIOKEGP_ACMKLFOMPFC_1_OFFSET))(a1, a2, a3);
		}

		::System::Void PKCKPFHCODN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LABJIIOKEGP_PKCKPFHCODN_OFFSET))(this);
		}

	};
