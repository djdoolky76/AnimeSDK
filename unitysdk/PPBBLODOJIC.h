#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/AGDJEFKDGNK.h"
#include "unitysdk/JHAIEKIJHNE.h"

class EAIOHODECAO;
class KJPPKOPJJCJ;
class LEKHPKOOGIP;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineTrackedDolly; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole::Arcade::BallsRace::Client { class BrCinemachinePath; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define PPBBLODOJIC_AMHLNKDEODC_OFFSET UNITYSDK_OFFSET(0x1EFB7900)
#define PPBBLODOJIC_BCOLELHKDLI_OFFSET UNITYSDK_OFFSET(0x1EFB8DF0)
#define PPBBLODOJIC_EKHBENMNOJA_OFFSET UNITYSDK_OFFSET(0x1EFB89C0)
#define PPBBLODOJIC_EODBBODDHIL_OFFSET UNITYSDK_OFFSET(0x1EFB7680)
#define PPBBLODOJIC_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1EFB76F0)
#define PPBBLODOJIC_LFFABBPCDDI_OFFSET UNITYSDK_OFFSET(0x1EFB8B00)
#define PPBBLODOJIC_NLHHNFDPCCK_OFFSET UNITYSDK_OFFSET(0x1EFB78C0)
#define PPBBLODOJIC_NMGJMPBLBOF_OFFSET UNITYSDK_OFFSET(0x1EFB7960)
#define PPBBLODOJIC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1EFB7270)
#define PPBBLODOJIC_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1EFB8B10)
#define PPBBLODOJIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFB78A0)

inline static constexpr unsigned int PPBBLODOJIC_TypeDefinitionIndex = 94947;

class PPBBLODOJIC : public ::MHOBPPAJKIL
{
public:
	::Cinemachine::CinemachineVirtualCamera* GONFIBCDMEF; // 0x18
	::LEKHPKOOGIP* MDBGNHBJPJE; // 0x20
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x28
	::UnityEngine::Transform* BODECKIDFGF; // 0x30
	::MoleMole::Arcade::BallsRace::Client::BrCinemachinePath* DFOJHJAPIAK; // 0x38
	::Cinemachine::CinemachineBrain* MPMLBBEHCCI; // 0x40
	::Cinemachine::CinemachineTrackedDolly* LDGKAJHDHFP; // 0x48
	::UnityEngine::Transform* NAHCHHOHPLJ; // 0x50
	::Cinemachine::CinemachineVirtualCamera* FOFJHEKJNFP; // 0x58
	::System::Single ANILHGABFGK; // 0x60
	::System::Single AFGJLKKCINJ; // 0x64
	::System::Single DALOBHIHNCM; // 0x68
	::System::Single OKMCJBJBPFA; // 0x6C
	::System::Single IEMAHGKKOCC; // 0x70
	::System::Single ACAHNHEHEMD; // 0x74
	::System::Single LOLPHKLNBJN; // 0x78
	::System::Single DEHKHJODAEI; // 0x7C
	::System::UInt64 JIPKNKMOKBK; // 0x80
	::System::UInt64 NOMFNKAMKME; // 0x88
	::System::Single JOALFKMNGKN; // 0x90
	::System::Boolean ENDNIIOFNGN; // 0x94
	::System::Boolean JKLOEKJHOPE; // 0x95
	::System::Byte _padding0[0x2];
	::System::Single IANEDFOKHPF; // 0x98
	::System::Single BMHDHLELNMO; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + PPBBLODOJIC_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void NLHHNFDPCCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC_NLHHNFDPCCK_OFFSET))(this);
	}

	::System::Void AMHLNKDEODC(::JHAIEKIJHNE BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::JHAIEKIJHNE))((::PBYTE)hIl2Cpp + PPBBLODOJIC_AMHLNKDEODC_OFFSET))(this, BHDNBGLCNOM);
	}

	::KJPPKOPJJCJ* EODBBODDHIL()
	{
		return ((::KJPPKOPJJCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC_EODBBODDHIL_OFFSET))(this);
	}

	::System::Void NMGJMPBLBOF(::MoleMole::Arcade::BallsRace::EBrSpeedLevel KPBKNAOIFDA, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallsRace::EBrSpeedLevel, ::System::Single))((::PBYTE)hIl2Cpp + PPBBLODOJIC_NMGJMPBLBOF_OFFSET))(this, KPBKNAOIFDA, PMNLNNGEIFM);
	}

	::System::Void EKHBENMNOJA(::AGDJEFKDGNK NFFNEFLKPDG)
	{
		return ((::System::Void(*)(::PVOID, ::AGDJEFKDGNK))((::PBYTE)hIl2Cpp + PPBBLODOJIC_EKHBENMNOJA_OFFSET))(this, NFFNEFLKPDG);
	}

	::System::Single LFFABBPCDDI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC_LFFABBPCDDI_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPBBLODOJIC_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Single BCOLELHKDLI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBBLODOJIC_BCOLELHKDLI_OFFSET))(this);
	}
};
