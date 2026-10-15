#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig; }

#define COBPCKBMOCM_BMFIGAKPEOJ_OFFSET UNITYSDK_OFFSET(0xDCB29B0)
#define COBPCKBMOCM_CCMFJEKBGKI_OFFSET UNITYSDK_OFFSET(0xDCB2FE0)
#define COBPCKBMOCM_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB3050)
#define COBPCKBMOCM_DCBBJGKCAJD_OFFSET UNITYSDK_OFFSET(0xDCB2B20)
#define COBPCKBMOCM_EFOHOFCOIBG_OFFSET UNITYSDK_OFFSET(0xDCB28B0)
#define COBPCKBMOCM_JFMGPGLKJHE_OFFSET UNITYSDK_OFFSET(0xDCB2D60)
#define COBPCKBMOCM_JHLLJFMBPHA_OFFSET UNITYSDK_OFFSET(0xDCB2A10)
#define COBPCKBMOCM_KGNOLLBFAAH_OFFSET UNITYSDK_OFFSET(0xDCB2410)
#define COBPCKBMOCM_LGJGKIBHGAN_OFFSET UNITYSDK_OFFSET(0xDCB2CC0)
#define COBPCKBMOCM_MABIFDMOCPK_OFFSET UNITYSDK_OFFSET(0xDCB2630)
#define COBPCKBMOCM_PHJDMIHDBKO_OFFSET UNITYSDK_OFFSET(0xDCB2B80)

inline static constexpr unsigned int COBPCKBMOCM_TypeDefinitionIndex = 78318;

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
