#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }

#define COBPCKBMOCM_BMFIGAKPEOJ_OFFSET UNITYSDK_OFFSET(0xDCABB00)
#define COBPCKBMOCM_CCMFJEKBGKI_OFFSET UNITYSDK_OFFSET(0xDCAC130)
#define COBPCKBMOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCAC1A0)
#define COBPCKBMOCM_DCBBJGKCAJD_OFFSET UNITYSDK_OFFSET(0xDCABC70)
#define COBPCKBMOCM_EFOHOFCOIBG_OFFSET UNITYSDK_OFFSET(0xDCABA00)
#define COBPCKBMOCM_JFMGPGLKJHE_OFFSET UNITYSDK_OFFSET(0xDCABEB0)
#define COBPCKBMOCM_JHLLJFMBPHA_OFFSET UNITYSDK_OFFSET(0xDCABB60)
#define COBPCKBMOCM_KGNOLLBFAAH_OFFSET UNITYSDK_OFFSET(0xDCAB560)
#define COBPCKBMOCM_LGJGKIBHGAN_OFFSET UNITYSDK_OFFSET(0xDCABE10)
#define COBPCKBMOCM_MABIFDMOCPK_OFFSET UNITYSDK_OFFSET(0xDCAB780)
#define COBPCKBMOCM_PHJDMIHDBKO_OFFSET UNITYSDK_OFFSET(0xDCABCD0)

inline static constexpr unsigned int COBPCKBMOCM_TypeDefinitionIndex = 78317;

	class COBPCKBMOCM : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* GLKOKAONKDI; // 0x10
		::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* LMAGNOACOGP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPCKBMOCM_CTOR_OFFSET))(this);
		}

		::System::Void KGNOLLBFAAH(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + COBPCKBMOCM_KGNOLLBFAAH_OFFSET))(this, a1, a2);
		}

		::System::Void LGJGKIBHGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPCKBMOCM_LGJGKIBHGAN_OFFSET))(this);
		}

		::System::Void CCMFJEKBGKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COBPCKBMOCM_CCMFJEKBGKI_OFFSET))(this);
		}

		static ::System::Void PHJDMIHDBKO(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig*))((::PBYTE)hIl2Cpp + COBPCKBMOCM_PHJDMIHDBKO_OFFSET))(a1);
		}

		static ::System::Void EFOHOFCOIBG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COBPCKBMOCM_EFOHOFCOIBG_OFFSET))();
		}

		static ::System::Void MABIFDMOCPK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COBPCKBMOCM_MABIFDMOCPK_OFFSET))();
		}

		static ::System::Void BMFIGAKPEOJ(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + COBPCKBMOCM_BMFIGAKPEOJ_OFFSET))(a1);
		}

		static ::System::Void DCBBJGKCAJD(::Cinemachine::CinemachineVirtualCamera* a1)
		{
			return ((::System::Void(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + COBPCKBMOCM_DCBBJGKCAJD_OFFSET))(a1);
		}

		static ::System::Void JHLLJFMBPHA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COBPCKBMOCM_JHLLJFMBPHA_OFFSET))();
		}

		static ::System::Void JFMGPGLKJHE()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COBPCKBMOCM_JFMGPGLKJHE_OFFSET))();
		}

	};
