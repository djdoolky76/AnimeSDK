#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class NGANFOCANHB;

#define OIOLIMLODPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBEA3800)
#define OIOLIMLODPJ_DFGIFJHICPC_OFFSET UNITYSDK_OFFSET(0xBEA3D50)
#define OIOLIMLODPJ_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xBEA3AB0)
#define OIOLIMLODPJ_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0xBEA39C0)
#define OIOLIMLODPJ__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBEA3870)
#define OIOLIMLODPJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEA3CC0)
#define OIOLIMLODPJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBEA3A50)

	class OIOLIMLODPJ : public ::RPG::Client::UIController
	{
	public:
		::System::Single ECKPKPNMBIL; // 0x190
		::System::UInt32 ODABLBFILEK; // 0x194
		::System::UInt32 ADGBLJLHPPJ; // 0x198
		// static const ::System::Object EGGEFOFAPHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOLIMLODPJ_CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOLIMLODPJ__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOLIMLODPJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIOLIMLODPJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void DFGIFJHICPC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OIOLIMLODPJ_DFGIFJHICPC_OFFSET))(this, a1, a2);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOLIMLODPJ_KANMCJHEFJJ_OFFSET))(this);
		}

		::NGANFOCANHB* OICGPNAMNAI()
		{
			return ((::NGANFOCANHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIOLIMLODPJ_OICGPNAMNAI_OFFSET))(this);
		}

	};
