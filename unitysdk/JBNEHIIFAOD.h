#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPHBDDAACJC.h"
#include "unitysdk/JBNEHIIFAOD_Phase.h"
#include "unitysdk/RPG/Client/AirlineBirdWay_CurveRange.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJBAAGFMEKM.h"
namespace RPG::Client { class AirshipBird; }

#define JBNEHIIFAOD_CLEAR_OFFSET UNITYSDK_OFFSET(0x16567380)
#define JBNEHIIFAOD_CONHCMOGADH_OFFSET UNITYSDK_OFFSET(0x165681E0)
#define JBNEHIIFAOD_CTOR_OFFSET UNITYSDK_OFFSET(0x16568240)
#define JBNEHIIFAOD_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x16566D80)
#define JBNEHIIFAOD_DNFGFHMNDEF_OFFSET UNITYSDK_OFFSET(0x165679B0)
#define JBNEHIIFAOD_EEJFPHJHDNC_OFFSET UNITYSDK_OFFSET(0x165673E0)
#define JBNEHIIFAOD_FBEDJPLCBMI_OFFSET UNITYSDK_OFFSET(0x16567A50)
#define JBNEHIIFAOD_GJIENLJDNGA_OFFSET UNITYSDK_OFFSET(0x165681C0)
#define JBNEHIIFAOD_GMJINEJMCOJ_OFFSET UNITYSDK_OFFSET(0x16567E70)
#define JBNEHIIFAOD_ILDJFKOPNHO_OFFSET UNITYSDK_OFFSET(0x165681B0)
#define JBNEHIIFAOD_IOGIGHOCJKM_OFFSET UNITYSDK_OFFSET(0x165681D0)
#define JBNEHIIFAOD_JADLNEAIKNI_OFFSET UNITYSDK_OFFSET(0x16567BF0)
#define JBNEHIIFAOD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16567490)
#define JBNEHIIFAOD_KHLMMBEIBGA_OFFSET UNITYSDK_OFFSET(0x16568150)
#define JBNEHIIFAOD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16566DE0)
#define JBNEHIIFAOD_MHJPDCCFDFH_OFFSET UNITYSDK_OFFSET(0x16567B10)
#define JBNEHIIFAOD_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x16566F80)
#define JBNEHIIFAOD_NKIKICKEOED_OFFSET UNITYSDK_OFFSET(0x16567DD0)

inline static constexpr unsigned int JBNEHIIFAOD_TypeDefinitionIndex = 59801;

	class JBNEHIIFAOD : public ::System::Object
	{
	public:
		::RPG::Client::AirlineBirdWay_CurveRange LIDOAJOJFEJ; // 0x10
		::RPG::Client::AirlineBirdWay_CurveRange CKPMGPAKAPE; // 0x30
		::RPG::Client::AirlineBirdWay_CurveRange ANEJKOMMFCO; // 0x50
		::RPG::Client::AirshipBird* EHHCPMFKNKP; // 0x70
		::FPHBDDAACJC MOJOBECBPPA; // 0x78
		::System::Single FDELJJLOJIG; // 0xC0
		::System::Single LBFBOIHMCEH; // 0xC4
		::System::Single LBHOAPLLECN; // 0xC8
		::JBNEHIIFAOD_Phase NINDDJCGEIJ; // 0xCC
		::System::Single FKCIBFBHGIL; // 0xD0
		::System::Single NIONINEMEKE; // 0xD4
		::JBNEHIIFAOD_Phase CBDIGBJMCHK; // 0xD8
		::JBNEHIIFAOD_Phase FNCAEKMGHAF; // 0xDC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_CTOR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::AirshipBird* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipBird*))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::JJBAAGFMEKM a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJBAAGFMEKM, ::System::Boolean))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_CLEAR_OFFSET))(this);
		}

		::System::Void EEJFPHJHDNC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_EEJFPHJHDNC_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void FBEDJPLCBMI(::RPG::Client::AirlineBirdWay_CurveRange a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_FBEDJPLCBMI_OFFSET))(this, a1);
		}

		::System::Void MHJPDCCFDFH(::RPG::Client::AirlineBirdWay_CurveRange a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_MHJPDCCFDFH_OFFSET))(this, a1);
		}

		::System::Void JADLNEAIKNI(::RPG::Client::AirlineBirdWay_CurveRange a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_JADLNEAIKNI_OFFSET))(this, a1);
		}

		::System::Void NKIKICKEOED(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_NKIKICKEOED_OFFSET))(this, a1, a2);
		}

		::System::Void GMJINEJMCOJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_GMJINEJMCOJ_OFFSET))(this, a1, a2);
		}

		::System::Void NBJFLGNEBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_NBJFLGNEBED_OFFSET))(this, a1);
		}

		::System::Void DNFGFHMNDEF(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_DNFGFHMNDEF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::AirshipBird* ILDJFKOPNHO()
		{
			return ((::RPG::Client::AirshipBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_ILDJFKOPNHO_OFFSET))(this);
		}

		::System::Single KHLMMBEIBGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_KHLMMBEIBGA_OFFSET))(this);
		}

		::System::Single GJIENLJDNGA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_GJIENLJDNGA_OFFSET))(this);
		}

		::System::Boolean IOGIGHOCJKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_IOGIGHOCJKM_OFFSET))(this);
		}

		::System::Boolean CONHCMOGADH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBNEHIIFAOD_CONHCMOGADH_OFFSET))(this);
		}

	};
