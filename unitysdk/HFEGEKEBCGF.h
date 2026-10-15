#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBPNHCICJGF.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/HOIMPNMCBEI.h"
class EBBJGCKIBAA;
class EKFMIDBJDIA;
namespace RPG::GameCore { class TurnBasedGameMode; }

#define HFEGEKEBCGF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15C76230)
#define HFEGEKEBCGF_COPMFNMEIGL_OFFSET UNITYSDK_OFFSET(0x15C76760)
#define HFEGEKEBCGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C75CB0)
#define HFEGEKEBCGF_IIAGCPNHHPH_OFFSET UNITYSDK_OFFSET(0x15C76420)
#define HFEGEKEBCGF_IMFHDIACKEG_OFFSET UNITYSDK_OFFSET(0x15C765E0)
#define HFEGEKEBCGF_INOMGFMHLDO_OFFSET UNITYSDK_OFFSET(0x15C763B0)
#define HFEGEKEBCGF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15C75CC0)
#define HFEGEKEBCGF_LOMKGEBMIGP_OFFSET UNITYSDK_OFFSET(0x15C76050)
#define HFEGEKEBCGF_TICK_OFFSET UNITYSDK_OFFSET(0x15C76340)

	class HFEGEKEBCGF : public ::HBPNHCICJGF
	{
	public:
		::System::Boolean CHLOFFEMIJJ; // 0x28
		::System::Boolean FIGLLIBLCCG; // 0x29
		::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1, ::EBBJGCKIBAA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::EBBJGCKIBAA*))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_TICK_OFFSET))(this, a1);
		}

		::HOIMPNMCBEI INOMGFMHLDO()
		{
			return ((::HOIMPNMCBEI(*)(::PVOID))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_INOMGFMHLDO_OFFSET))(this);
		}

		::HOIMPNMCBEI LOMKGEBMIGP(::System::Boolean a1)
		{
			return ((::HOIMPNMCBEI(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_LOMKGEBMIGP_OFFSET))(this, a1);
		}

		::System::Boolean IMFHDIACKEG(::RPG::GameCore::TeamType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_IMFHDIACKEG_OFFSET))(this, a1);
		}

		::System::Boolean IIAGCPNHHPH(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_IIAGCPNHHPH_OFFSET))(this, a1);
		}

		::System::Void COPMFNMEIGL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + HFEGEKEBCGF_COPMFNMEIGL_OFFSET))(this, a1);
		}

	};
