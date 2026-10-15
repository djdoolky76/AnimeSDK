#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEAMAMLDKFC.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define GDCHAKILGCN_BOLFKCDMPAI_OFFSET UNITYSDK_OFFSET(0x15994D50)
#define GDCHAKILGCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15994F20)
#define GDCHAKILGCN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15994B30)
#define GDCHAKILGCN_HMBCEEEMCFH_OFFSET UNITYSDK_OFFSET(0x15994E30)
#define GDCHAKILGCN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x159947D0)
#define GDCHAKILGCN_ILGFPFOPJGD_OFFSET UNITYSDK_OFFSET(0x159948C0)
#define GDCHAKILGCN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15994750)
#define GDCHAKILGCN_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0x15994ED0)
#define GDCHAKILGCN_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15994C80)
#define GDCHAKILGCN_OMMDCKHBDIM_OFFSET UNITYSDK_OFFSET(0x15994930)
#define GDCHAKILGCN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x159949F0)

	class GDCHAKILGCN : public ::OEAMAMLDKFC
	{
	public:
		::System::Single MHNPCCJDNBO; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDCHAKILGCN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + GDCHAKILGCN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + GDCHAKILGCN_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + GDCHAKILGCN_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GDCHAKILGCN_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GDCHAKILGCN_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Boolean BOLFKCDMPAI(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + GDCHAKILGCN_BOLFKCDMPAI_OFFSET))(this, a1, a2);
		}

		::System::Void ILGFPFOPJGD(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GDCHAKILGCN_ILGFPFOPJGD_OFFSET))(this, a1);
		}

		::System::Void OMMDCKHBDIM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GDCHAKILGCN_OMMDCKHBDIM_OFFSET))(this, a1);
		}

		::System::Void HMBCEEEMCFH(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GDCHAKILGCN_HMBCEEEMCFH_OFFSET))(this, a1);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GDCHAKILGCN_NIOOHGFAKIL_OFFSET))(this, a1);
		}

	};
