#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
class CFIDFBEPAFN;

#define NBIOOMEPCFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC34CBC0)
#define NBIOOMEPCFJ_LOFBIPAKHKM_OFFSET UNITYSDK_OFFSET(0xC34CC50)
#define NBIOOMEPCFJ_NGFOFCCMEJK_OFFSET UNITYSDK_OFFSET(0xC34D640)
#define NBIOOMEPCFJ_OICGPNAMNAI_OFFSET UNITYSDK_OFFSET(0xC34D330)
#define NBIOOMEPCFJ__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC34D3A0)
#define NBIOOMEPCFJ__ONTICK_OFFSET UNITYSDK_OFFSET(0xC34D5E0)
#define NBIOOMEPCFJ__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC34D440)

inline static constexpr unsigned int NBIOOMEPCFJ_TypeDefinitionIndex = 74564;

	class NBIOOMEPCFJ : public ::RPG::Client::UIController
	{
	public:
		::System::Single KJIGEHNHMOH; // 0x190
		::System::UInt32 MGLEPKGFODH; // 0x194
		::System::Single KEKHDBKLHOK; // 0x198
		::System::Boolean JPPFGNBCEIL; // 0x19C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ_CTOR_OFFSET))(this);
		}

		::System::Void LOFBIPAKHKM(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ_LOFBIPAKHKM_OFFSET))(this, a1, a2);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NGFOFCCMEJK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ_NGFOFCCMEJK_OFFSET))(this, a1);
		}

		::CFIDFBEPAFN* OICGPNAMNAI()
		{
			return ((::CFIDFBEPAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOOMEPCFJ_OICGPNAMNAI_OFFSET))(this);
		}

	};
