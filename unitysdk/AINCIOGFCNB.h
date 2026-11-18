#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace CriWare { class CriManaMovieMaterial; }
namespace CriWare::CriMana { class Player; }

#define AINCIOGFCNB_AADKNBKKGED_1_OFFSET UNITYSDK_OFFSET(0x143A6700)
#define AINCIOGFCNB_AADKNBKKGED_OFFSET UNITYSDK_OFFSET(0x143A66A0)
#define AINCIOGFCNB_CBBFDEGDGIO_1_OFFSET UNITYSDK_OFFSET(0x143A64C0)
#define AINCIOGFCNB_CBBFDEGDGIO_OFFSET UNITYSDK_OFFSET(0x143A6330)
#define AINCIOGFCNB_GMCPPJPFMID_1_OFFSET UNITYSDK_OFFSET(0x143A5DF0)
#define AINCIOGFCNB_GMCPPJPFMID_OFFSET UNITYSDK_OFFSET(0x143A5AD0)
#define AINCIOGFCNB_HBKFNPDKJKK_1_OFFSET UNITYSDK_OFFSET(0x143A6970)
#define AINCIOGFCNB_HBKFNPDKJKK_2_OFFSET UNITYSDK_OFFSET(0x143A6AE0)
#define AINCIOGFCNB_HBKFNPDKJKK_OFFSET UNITYSDK_OFFSET(0x143A5F90)
#define AINCIOGFCNB_JKHKOGCEHBO_1_OFFSET UNITYSDK_OFFSET(0x143A5C90)
#define AINCIOGFCNB_JKHKOGCEHBO_OFFSET UNITYSDK_OFFSET(0x143A5B30)
#define AINCIOGFCNB_KDIIOPHEEFE_1_OFFSET UNITYSDK_OFFSET(0x143A62D0)
#define AINCIOGFCNB_KDIIOPHEEFE_OFFSET UNITYSDK_OFFSET(0x143A6130)
#define AINCIOGFCNB_KEOEJEJLIFD_1_OFFSET UNITYSDK_OFFSET(0x143A6E30)
#define AINCIOGFCNB_KEOEJEJLIFD_OFFSET UNITYSDK_OFFSET(0x143A6910)
#define AINCIOGFCNB_OPKBOMMDALA_1_OFFSET UNITYSDK_OFFSET(0x143A6C80)
#define AINCIOGFCNB_OPKBOMMDALA_OFFSET UNITYSDK_OFFSET(0x143A68A0)
#define AINCIOGFCNB__CTOR_OFFSET UNITYSDK_OFFSET(0x143A5AC0)

inline static constexpr unsigned int AINCIOGFCNB_TypeDefinitionIndex = 49789;

class AINCIOGFCNB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINCIOGFCNB__CTOR_OFFSET))(this);
	}

	static ::System::Int32 GMCPPJPFMID(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::Int32(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_GMCPPJPFMID_OFFSET))(ECKMPOAABAL);
	}

	static ::System::Double JKHKOGCEHBO(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::Double(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_JKHKOGCEHBO_OFFSET))(BAJPDAKGKME);
	}

	static ::System::Int32 GMCPPJPFMID_1(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::Int32(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_GMCPPJPFMID_1_OFFSET))(BAJPDAKGKME);
	}

	static ::System::Double HBKFNPDKJKK(::CriWare::CriMana::Player* ECKMPOAABAL, ::System::Boolean EPGLPGPOOJN)
	{
		return ((::System::Double(*)(::CriWare::CriMana::Player*, ::System::Boolean))((::PBYTE)hIl2Cpp + AINCIOGFCNB_HBKFNPDKJKK_OFFSET))(ECKMPOAABAL, EPGLPGPOOJN);
	}

	static ::System::UInt32 KDIIOPHEEFE(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::UInt32(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_KDIIOPHEEFE_OFFSET))(BAJPDAKGKME);
	}

	static ::System::Int32 CBBFDEGDGIO(::System::Double LPPPEEFLCPF, ::System::Boolean HAFDIMGJBHC, ::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::Int32(*)(::System::Double, ::System::Boolean, ::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_CBBFDEGDGIO_OFFSET))(LPPPEEFLCPF, HAFDIMGJBHC, BAJPDAKGKME);
	}

	static ::System::UInt32 AADKNBKKGED(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::UInt32(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_AADKNBKKGED_OFFSET))(ECKMPOAABAL);
	}

	static ::System::UInt32 AADKNBKKGED_1(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::UInt32(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_AADKNBKKGED_1_OFFSET))(BAJPDAKGKME);
	}

	static ::System::UInt32 OPKBOMMDALA(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::UInt32(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_OPKBOMMDALA_OFFSET))(ECKMPOAABAL);
	}

	static ::System::UInt32 KEOEJEJLIFD(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::UInt32(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_KEOEJEJLIFD_OFFSET))(ECKMPOAABAL);
	}

	static ::System::Double HBKFNPDKJKK_1(::CriWare::CriManaMovieMaterial* BAJPDAKGKME, ::System::Boolean OBMHGBOOLJH)
	{
		return ((::System::Double(*)(::CriWare::CriManaMovieMaterial*, ::System::Boolean))((::PBYTE)hIl2Cpp + AINCIOGFCNB_HBKFNPDKJKK_1_OFFSET))(BAJPDAKGKME, OBMHGBOOLJH);
	}

	static ::System::Double HBKFNPDKJKK_2(::CriWare::CriMana::Player* ECKMPOAABAL, ::System::Int32 FMOPIACNALD)
	{
		return ((::System::Double(*)(::CriWare::CriMana::Player*, ::System::Int32))((::PBYTE)hIl2Cpp + AINCIOGFCNB_HBKFNPDKJKK_2_OFFSET))(ECKMPOAABAL, FMOPIACNALD);
	}

	static ::System::Double JKHKOGCEHBO_1(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::Double(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_JKHKOGCEHBO_1_OFFSET))(ECKMPOAABAL);
	}

	static ::System::UInt32 OPKBOMMDALA_1(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::UInt32(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_OPKBOMMDALA_1_OFFSET))(BAJPDAKGKME);
	}

	static ::System::UInt32 KEOEJEJLIFD_1(::CriWare::CriManaMovieMaterial* BAJPDAKGKME)
	{
		return ((::System::UInt32(*)(::CriWare::CriManaMovieMaterial*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_KEOEJEJLIFD_1_OFFSET))(BAJPDAKGKME);
	}

	static ::System::UInt32 KDIIOPHEEFE_1(::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::UInt32(*)(::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_KDIIOPHEEFE_1_OFFSET))(ECKMPOAABAL);
	}

	static ::System::Int32 CBBFDEGDGIO_1(::System::Double LPPPEEFLCPF, ::System::Boolean HAFDIMGJBHC, ::CriWare::CriMana::Player* ECKMPOAABAL)
	{
		return ((::System::Int32(*)(::System::Double, ::System::Boolean, ::CriWare::CriMana::Player*))((::PBYTE)hIl2Cpp + AINCIOGFCNB_CBBFDEGDGIO_1_OFFSET))(LPPPEEFLCPF, HAFDIMGJBHC, ECKMPOAABAL);
	}
};
