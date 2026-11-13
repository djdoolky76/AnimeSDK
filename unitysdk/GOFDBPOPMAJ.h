#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAIBJGAMDAI;
class DLCOGLMFDPI;
class KOFJPKOBFEO;
class LMHBFGADIMD;
class OCGCEFDKIEA;

#define GOFDBPOPMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x187B2090)
#define GOFDBPOPMAJ_GJDFDKKAJGN_OFFSET UNITYSDK_OFFSET(0x187B2410)
#define GOFDBPOPMAJ_HADDNGBGHGG_OFFSET UNITYSDK_OFFSET(0x187B2870)
#define GOFDBPOPMAJ_KAFOKMAEJGD_OFFSET UNITYSDK_OFFSET(0x187B20B0)
#define GOFDBPOPMAJ_KNNALBFIBEA_OFFSET UNITYSDK_OFFSET(0x187B27E0)
#define GOFDBPOPMAJ_MOAFGAJHCLE_OFFSET UNITYSDK_OFFSET(0x187B25C0)

inline static constexpr unsigned int GOFDBPOPMAJ_TypeDefinitionIndex = 65332;

	class GOFDBPOPMAJ : public ::System::Object
	{
	public:
		::BAIBJGAMDAI* JIHBGMMGJCE; // 0x10
		::DLCOGLMFDPI* BCLOAGOJAMP; // 0x18
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
