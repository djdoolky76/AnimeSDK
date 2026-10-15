#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAIBJGAMDAI;
class DLCOGLMFDPI;
class KOFJPKOBFEO;
class LMHBFGADIMD;
class OCGCEFDKIEA;

#define GOFDBPOPMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2CFB0)
#define GOFDBPOPMAJ_GJDFDKKAJGN_OFFSET UNITYSDK_OFFSET(0x15B2D330)
#define GOFDBPOPMAJ_HADDNGBGHGG_OFFSET UNITYSDK_OFFSET(0x15B2D790)
#define GOFDBPOPMAJ_KAFOKMAEJGD_OFFSET UNITYSDK_OFFSET(0x15B2CFD0)
#define GOFDBPOPMAJ_KNNALBFIBEA_OFFSET UNITYSDK_OFFSET(0x15B2D700)
#define GOFDBPOPMAJ_MOAFGAJHCLE_OFFSET UNITYSDK_OFFSET(0x15B2D4E0)

	class GOFDBPOPMAJ : public ::System::Object
	{
	public:
		::DLCOGLMFDPI* BCLOAGOJAMP; // 0x10
		::BAIBJGAMDAI* JIHBGMMGJCE; // 0x18
		::OCGCEFDKIEA* JMLGBIGGHJM; // 0x20
		::KOFJPKOBFEO* ANIMKAHNPKG; // 0x28
		::System::Void _ctor(::BAIBJGAMDAI* a1, ::OCGCEFDKIEA* a2, ::DLCOGLMFDPI* a3, ::KOFJPKOBFEO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BAIBJGAMDAI*, ::OCGCEFDKIEA*, ::DLCOGLMFDPI*, ::KOFJPKOBFEO*))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KAFOKMAEJGD(::LMHBFGADIMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMHBFGADIMD*))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_KAFOKMAEJGD_OFFSET))(this, a1);
		}

		::System::Void MOAFGAJHCLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_MOAFGAJHCLE_OFFSET))(this, a1);
		}

		::System::Boolean KNNALBFIBEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_KNNALBFIBEA_OFFSET))(this);
		}

		::System::Void GJDFDKKAJGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_GJDFDKKAJGN_OFFSET))(this);
		}

		::System::Void HADDNGBGHGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOFDBPOPMAJ_HADDNGBGHGG_OFFSET))(this);
		}

	};
