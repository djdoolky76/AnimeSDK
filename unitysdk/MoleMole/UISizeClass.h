#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKLMOLLOGGO.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISIZECLASS_APDBAOPLMDC_OFFSET UNITYSDK_OFFSET(0x167C7B70)
#define MOLEMOLE_UISIZECLASS_BCLJAMJMBGD_OFFSET UNITYSDK_OFFSET(0x167C7AE0)
#define MOLEMOLE_UISIZECLASS_CGCBOJIFEEP_OFFSET UNITYSDK_OFFSET(0x167C7F30)
#define MOLEMOLE_UISIZECLASS_DJMGDLGFHIN_OFFSET UNITYSDK_OFFSET(0x167C7EE0)
#define MOLEMOLE_UISIZECLASS_EGIIIKNLJLC_OFFSET UNITYSDK_OFFSET(0x167C7FB0)
#define MOLEMOLE_UISIZECLASS_HJBKDHHDLAC_OFFSET UNITYSDK_OFFSET(0x167C8090)
#define MOLEMOLE_UISIZECLASS_KEBKLAHEFPA_OFFSET UNITYSDK_OFFSET(0x167C7C60)
#define MOLEMOLE_UISIZECLASS_MNIIFKAJMIO_OFFSET UNITYSDK_OFFSET(0x167C7C00)
#define MOLEMOLE_UISIZECLASS_PIIONPPCPKJ_OFFSET UNITYSDK_OFFSET(0x167C8120)
#define MOLEMOLE_UISIZECLASS_RESETSTATICSTATE_OFFSET UNITYSDK_OFFSET(0x167C7A20)

namespace MoleMole
{
	inline static constexpr unsigned int UISizeClass_TypeDefinitionIndex = 67413;

	class UISizeClass : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_OAIGKKNBGAM()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x4AD60);
		}
		static ::System::Int32* StaticGet_GKDFDEMKNGE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x115A0);
		}
		static ::MKLMOLLOGGO* StaticGet_FLGFLHIKHNI()
		{
			return (::MKLMOLLOGGO*)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x115A4);
		}
		static ::System::Int32* StaticGet_JGGBDFELDON()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x115A8);
		}
		static ::System::Int32* StaticGet_OCLBEMGNAKI()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x115AC);
		}
		static ::MKLMOLLOGGO* StaticGet_HLGGJIJNIJN()
		{
			return (::MKLMOLLOGGO*)Il2CppClass::FromTypeDefinitionIndex(UISizeClass_TypeDefinitionIndex)->GetStaticField(0x115B0);
		}

		static ::System::Void ResetStaticState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_RESETSTATICSTATE_OFFSET))();
		}

		static ::System::Void APDBAOPLMDC(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_APDBAOPLMDC_OFFSET))(EGEGIMGMJHN);
		}

		static ::MKLMOLLOGGO MNIIFKAJMIO()
		{
			return ((::MKLMOLLOGGO(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_MNIIFKAJMIO_OFFSET))();
		}

		static ::System::Void KEBKLAHEFPA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_KEBKLAHEFPA_OFFSET))();
		}

		static ::System::Int32 DJMGDLGFHIN(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_DJMGDLGFHIN_OFFSET))(EGEGIMGMJHN);
		}

		static ::System::Void CGCBOJIFEEP(::System::Int32 ODCODCKANIK, ::System::Int32 FACKFLBBOON)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_CGCBOJIFEEP_OFFSET))(ODCODCKANIK, FACKFLBBOON);
		}

		static ::System::Void HJBKDHHDLAC(::System::Action* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_HJBKDHHDLAC_OFFSET))(EGEGIMGMJHN);
		}

		static ::MKLMOLLOGGO PIIONPPCPKJ()
		{
			return ((::MKLMOLLOGGO(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_PIIONPPCPKJ_OFFSET))();
		}

		static ::System::Void BCLJAMJMBGD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_BCLJAMJMBGD_OFFSET))();
		}

		static ::System::Void EGIIIKNLJLC(::System::Int32 ODCODCKANIK, ::System::Int32 FACKFLBBOON)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISIZECLASS_EGIIIKNLJLC_OFFSET))(ODCODCKANIK, FACKFLBBOON);
		}
	};
}
