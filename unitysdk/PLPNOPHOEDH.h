#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
#include "unitysdk/RPG/Client/TextID.h"
class CFNBLNHMHGO;
class JIAFOPELMJJ;
class PCLKBDDGBJE;
class PKONCMDMODF;
namespace System { class Object; }
namespace System { class String; }

#define PLPNOPHOEDH_AJAHKNEBJAE_OFFSET UNITYSDK_OFFSET(0xC310000)
#define PLPNOPHOEDH_AOCKNGJLFCL_OFFSET UNITYSDK_OFFSET(0xC30FCE0)
#define PLPNOPHOEDH_CHAMHFBICKC_OFFSET UNITYSDK_OFFSET(0xC3100C0)
#define PLPNOPHOEDH_CMPHCFAJIPA_OFFSET UNITYSDK_OFFSET(0xC3104F0)
#define PLPNOPHOEDH_CTOR_OFFSET UNITYSDK_OFFSET(0xC30E7A0)
#define PLPNOPHOEDH_DHGMLJIGPBK_OFFSET UNITYSDK_OFFSET(0xC30FAB0)
#define PLPNOPHOEDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC30E850)
#define PLPNOPHOEDH_DPDCHGPFPBK_OFFSET UNITYSDK_OFFSET(0xC310450)
#define PLPNOPHOEDH_ENTER_OFFSET UNITYSDK_OFFSET(0xC30E960)
#define PLPNOPHOEDH_FCDHANBDKJA_OFFSET UNITYSDK_OFFSET(0xC30ED00)
#define PLPNOPHOEDH_FKAJAGNNDIL_OFFSET UNITYSDK_OFFSET(0xC30FDB0)
#define PLPNOPHOEDH_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xC30FA60)
#define PLPNOPHOEDH_GJCEFMFIONI_OFFSET UNITYSDK_OFFSET(0xC310320)
#define PLPNOPHOEDH_HODOIEKAKEP_OFFSET UNITYSDK_OFFSET(0xC30FBA0)
#define PLPNOPHOEDH_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xC310A00)
#define PLPNOPHOEDH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC30F0B0)
#define PLPNOPHOEDH_LEAVE_OFFSET UNITYSDK_OFFSET(0xC30F110)
#define PLPNOPHOEDH_NAFGIEKEJLO_OFFSET UNITYSDK_OFFSET(0xC30F570)
#define PLPNOPHOEDH_NICDKCMNACI_OFFSET UNITYSDK_OFFSET(0xC3107D0)
#define PLPNOPHOEDH_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xC310730)
#define PLPNOPHOEDH_TICK_OFFSET UNITYSDK_OFFSET(0xC30E900)

inline static constexpr unsigned int PLPNOPHOEDH_TypeDefinitionIndex = 61148;

	class PLPNOPHOEDH : public ::RPG::Client::LoginPhase
	{
	public:
		::PKONCMDMODF* OMOKCNINHKG; // 0x28
		::JIAFOPELMJJ* MIPPNCGOJNM; // 0x30
		::PCLKBDDGBJE* JFDMEIHEGOP; // 0x38
		::System::Boolean APCKGAOKNLE; // 0x40
		::System::Boolean DNPPNAIGJHE; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_TICK_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_ENTER_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_LEAVE_OFFSET))(this, a1);
		}

		::System::Void NAFGIEKEJLO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_NAFGIEKEJLO_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void DHGMLJIGPBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_DHGMLJIGPBK_OFFSET))(this, a1);
		}

		::System::Void HODOIEKAKEP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_HODOIEKAKEP_OFFSET))(this, a1);
		}

		::System::Void FKAJAGNNDIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_FKAJAGNNDIL_OFFSET))(this);
		}

		::System::Void AOCKNGJLFCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_AOCKNGJLFCL_OFFSET))(this);
		}

		::System::Void FCDHANBDKJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_FCDHANBDKJA_OFFSET))(this);
		}

		::System::Void CHAMHFBICKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_CHAMHFBICKC_OFFSET))(this);
		}

		::System::Void DPDCHGPFPBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_DPDCHGPFPBK_OFFSET))(this, a1);
		}

		::System::Void CMPHCFAJIPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_CMPHCFAJIPA_OFFSET))(this);
		}

		::System::Void NICDKCMNACI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_NICDKCMNACI_OFFSET))(this, a1);
		}

		::System::Void GJCEFMFIONI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_GJCEFMFIONI_OFFSET))(this, a1);
		}

		::System::Void OHMHJFANEIF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_OHMHJFANEIF_OFFSET))(this, a1);
		}

		::System::Void IECIAPPANHI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPNOPHOEDH_IECIAPPANHI_OFFSET))(this, a1);
		}

		static ::RPG::Client::TextID AJAHKNEBJAE()
		{
			return ((::RPG::Client::TextID(*)())((::PBYTE)hIl2Cpp + PLPNOPHOEDH_AJAHKNEBJAE_OFFSET))();
		}

	};
