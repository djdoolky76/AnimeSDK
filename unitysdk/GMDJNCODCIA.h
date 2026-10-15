#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Dest/Math/Orientations.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
namespace System { class String; }

#define GMDJNCODCIA_CDLJDCNDLKC_1_OFFSET UNITYSDK_OFFSET(0x1DD30840)
#define GMDJNCODCIA_CDLJDCNDLKC_2_OFFSET UNITYSDK_OFFSET(0x1DD309B0)
#define GMDJNCODCIA_CDLJDCNDLKC_OFFSET UNITYSDK_OFFSET(0x3C48B80)
#define GMDJNCODCIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB310)
#define GMDJNCODCIA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C489A0)
#define GMDJNCODCIA_GICBKIOCGLB_OFFSET UNITYSDK_OFFSET(0x3C493A0)
#define GMDJNCODCIA_HOBEGLFEDIC_1_OFFSET UNITYSDK_OFFSET(0x1DD305D0)
#define GMDJNCODCIA_HOBEGLFEDIC_2_OFFSET UNITYSDK_OFFSET(0x1DD30640)
#define GMDJNCODCIA_HOBEGLFEDIC_OFFSET UNITYSDK_OFFSET(0x3C48B10)
#define GMDJNCODCIA_IDADAGMGNLH_1_OFFSET UNITYSDK_OFFSET(0x3C49930)
#define GMDJNCODCIA_IDADAGMGNLH_OFFSET UNITYSDK_OFFSET(0x3C498A0)
#define GMDJNCODCIA_JAEEMFANBNB_1_OFFSET UNITYSDK_OFFSET(0x3C48EF0)
#define GMDJNCODCIA_JAEEMFANBNB_2_OFFSET UNITYSDK_OFFSET(0x3C48F50)
#define GMDJNCODCIA_JAEEMFANBNB_OFFSET UNITYSDK_OFFSET(0x3C48E90)
#define GMDJNCODCIA_JBLANOJCNLN_OFFSET UNITYSDK_OFFSET(0x3C489C0)
#define GMDJNCODCIA_JDAPDOLJLPN_OFFSET UNITYSDK_OFFSET(0x3C49230)
#define GMDJNCODCIA_JIEOOKCIJNC_1_OFFSET UNITYSDK_OFFSET(0x1DD30CE0)
#define GMDJNCODCIA_JIEOOKCIJNC_2_OFFSET UNITYSDK_OFFSET(0x1DD30E80)
#define GMDJNCODCIA_JIEOOKCIJNC_OFFSET UNITYSDK_OFFSET(0x3C48CF0)
#define GMDJNCODCIA_JJGMIBEPGLG_OFFSET UNITYSDK_OFFSET(0x3C48A90)
#define GMDJNCODCIA_JMGDAILLNON_OFFSET UNITYSDK_OFFSET(0x3C49250)
#define GMDJNCODCIA_KBIOEOCGKFA_1_OFFSET UNITYSDK_OFFSET(0x3C48FB0)
#define GMDJNCODCIA_KBIOEOCGKFA_2_OFFSET UNITYSDK_OFFSET(0x3C490E0)
#define GMDJNCODCIA_KBIOEOCGKFA_OFFSET UNITYSDK_OFFSET(0x1DD311B0)
#define GMDJNCODCIA_LBDJFNDMMOA_OFFSET UNITYSDK_OFFSET(0x3C49500)
#define GMDJNCODCIA_LCJMKJPECAP_1_OFFSET UNITYSDK_OFFSET(0x3C49610)
#define GMDJNCODCIA_LCJMKJPECAP_OFFSET UNITYSDK_OFFSET(0x3C49540)
#define GMDJNCODCIA_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3C48970)
#define GMDJNCODCIA_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C48930)
#define GMDJNCODCIA_PIOHIOOKKNC_OFFSET UNITYSDK_OFFSET(0x3C48A30)
#define GMDJNCODCIA_POHHMBNEBNP_1_OFFSET UNITYSDK_OFFSET(0x3C497A0)
#define GMDJNCODCIA_POHHMBNEBNP_OFFSET UNITYSDK_OFFSET(0x3C49710)
#define GMDJNCODCIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C49A30)

inline static constexpr unsigned int GMDJNCODCIA_TypeDefinitionIndex = 6288;

	struct alignas(4) GMDJNCODCIA
	{
		::RPG::MVector2 KIGGGJGOIGD; // 0x10
		::RPG::MVector2 IJMIFGGPKEB; // 0x18
		::RPG::MVector2 GCHJMKEGBOC; // 0x20
		::System::Void _ctor(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector2 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMDJNCODCIA_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 JBLANOJCNLN(::System::Int32 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JBLANOJCNLN_OFFSET))(this, a1);
		}

		::System::Single PIOHIOOKKNC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDJNCODCIA_PIOHIOOKKNC_OFFSET))(this);
		}

		::Dest::Math::Orientations JJGMIBEPGLG(::System::Single a1)
		{
			return ((::Dest::Math::Orientations(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JJGMIBEPGLG_OFFSET))(this, a1);
		}

		::System::Single HOBEGLFEDIC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDJNCODCIA_HOBEGLFEDIC_OFFSET))(this);
		}

		static ::System::Single HOBEGLFEDIC_1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_HOBEGLFEDIC_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Single HOBEGLFEDIC_2(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Single(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_HOBEGLFEDIC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector3 CDLJDCNDLKC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDJNCODCIA_CDLJDCNDLKC_OFFSET))(this);
		}

		static ::RPG::MVector3 CDLJDCNDLKC_1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_CDLJDCNDLKC_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 CDLJDCNDLKC_2(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_CDLJDCNDLKC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector3 JIEOOKCIJNC()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JIEOOKCIJNC_OFFSET))(this);
		}

		static ::RPG::MVector3 JIEOOKCIJNC_1(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JIEOOKCIJNC_1_OFFSET))(a1, a2, a3);
		}

		static ::RPG::MVector3 JIEOOKCIJNC_2(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JIEOOKCIJNC_2_OFFSET))(a1, a2, a3);
		}

		::RPG::MVector2 JAEEMFANBNB(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JAEEMFANBNB_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 JAEEMFANBNB_1(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JAEEMFANBNB_1_OFFSET))(this, a1);
		}

		::RPG::MVector2 JAEEMFANBNB_2(::RPG::MVector3 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JAEEMFANBNB_2_OFFSET))(this, a1);
		}

		static ::System::Void KBIOEOCGKFA(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3, ::RPG::MVector2 a4, ::RPG::MVector3 a5)
		{
			return ((::System::Void(*)(::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GMDJNCODCIA_KBIOEOCGKFA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::RPG::MVector3 KBIOEOCGKFA_1(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_KBIOEOCGKFA_1_OFFSET))(this, a1);
		}

		::RPG::MVector3 KBIOEOCGKFA_2(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_KBIOEOCGKFA_2_OFFSET))(this, a1);
		}

		::System::Single JDAPDOLJLPN(::RPG::MVector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JDAPDOLJLPN_OFFSET))(this, a1);
		}

		::System::Int32 JMGDAILLNON(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + GMDJNCODCIA_JMGDAILLNON_OFFSET))(this, a1, a2);
		}

		::System::Int32 GICBKIOCGLB(::RPG::MVector2 a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + GMDJNCODCIA_GICBKIOCGLB_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 LBDJFNDMMOA(::RPG::MVector2 a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_LBDJFNDMMOA_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_LCJMKJPECAP_OFFSET))(this, a1);
		}

		::System::Boolean LCJMKJPECAP_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_LCJMKJPECAP_1_OFFSET))(this, a1);
		}

		::System::Boolean POHHMBNEBNP(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_POHHMBNEBNP_OFFSET))(this, a1);
		}

		::System::Boolean POHHMBNEBNP_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_POHHMBNEBNP_1_OFFSET))(this, a1);
		}

		::System::Boolean IDADAGMGNLH(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_IDADAGMGNLH_OFFSET))(this, a1);
		}

		::System::Boolean IDADAGMGNLH_1(::RPG::MVector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + GMDJNCODCIA_IDADAGMGNLH_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDJNCODCIA_TOSTRING_OFFSET))(this);
		}

	};
