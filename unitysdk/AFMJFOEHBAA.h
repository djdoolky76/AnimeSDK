#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class HIOEAKHGILF;
class NOOHPODHIAA;
class PEEDLCHFAFL;
class POHNBOACDHB;

#define AFMJFOEHBAA_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xCF11970)
#define AFMJFOEHBAA_COKPBNHGCMN_OFFSET UNITYSDK_OFFSET(0xCF10C30)
#define AFMJFOEHBAA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF119C0)
#define AFMJFOEHBAA_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xCF10A80)
#define AFMJFOEHBAA_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xCF118D0)
#define AFMJFOEHBAA_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xCF107C0)
#define AFMJFOEHBAA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCF10560)
#define AFMJFOEHBAA_LFIFIEGFMOM_OFFSET UNITYSDK_OFFSET(0xCF10A10)
#define AFMJFOEHBAA_LFMLEKPJMIL_OFFSET UNITYSDK_OFFSET(0xCF11740)
#define AFMJFOEHBAA_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xCF108C0)
#define AFMJFOEHBAA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xCF10930)

inline static constexpr unsigned int AFMJFOEHBAA_TypeDefinitionIndex = 77060;

	class AFMJFOEHBAA : public ::CBIKMJHGEDE
	{
	public:
		::System::Single FLHOEGBFPJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void LFIFIEGFMOM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_LFIFIEGFMOM_OFFSET))(this, a1);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void COKPBNHGCMN(::HIOEAKHGILF* a1, ::NOOHPODHIAA* a2, ::PEEDLCHFAFL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::NOOHPODHIAA*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_COKPBNHGCMN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Boolean LFMLEKPJMIL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_LFMLEKPJMIL_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMJFOEHBAA_BPMGPFLHPLC_OFFSET))(this);
		}

	};
