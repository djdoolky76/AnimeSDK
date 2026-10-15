#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirDamageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BCLKDMAHONE;
class LAECFLNNOFH;
class NJKFCOIBIOK;
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneStatistics; }
namespace RPG::Client::PixAir { class PixAirJumpTextMessage; }

#define LODOKGPHEMB_ALDMOPEHKEI_OFFSET UNITYSDK_OFFSET(0xB7FCCF0)
#define LODOKGPHEMB_BKLDOAOPDEE_OFFSET UNITYSDK_OFFSET(0xB7FB210)
#define LODOKGPHEMB_CFNNFEEKALF_OFFSET UNITYSDK_OFFSET(0xB7FB3A0)
#define LODOKGPHEMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB7FA4D0)
#define LODOKGPHEMB_EFKEJJJNPIN_OFFSET UNITYSDK_OFFSET(0xB7FE040)
#define LODOKGPHEMB_FACPECALFJH_OFFSET UNITYSDK_OFFSET(0xB7FC0D0)
#define LODOKGPHEMB_FBEGCFGFLEN_OFFSET UNITYSDK_OFFSET(0xB7FDBA0)
#define LODOKGPHEMB_FLMEOEFMBMF_OFFSET UNITYSDK_OFFSET(0xB7FBE20)
#define LODOKGPHEMB_GMLPJCMGNMI_OFFSET UNITYSDK_OFFSET(0xB7FE370)
#define LODOKGPHEMB_HADMLOCHPAP_OFFSET UNITYSDK_OFFSET(0xB7FBCD0)
#define LODOKGPHEMB_KFCLIIJFLLM_OFFSET UNITYSDK_OFFSET(0xB7FB8F0)
#define LODOKGPHEMB_KIPAACLECKI_OFFSET UNITYSDK_OFFSET(0xB7FB080)
#define LODOKGPHEMB_LKHFDGMGGNO_OFFSET UNITYSDK_OFFSET(0xB7FA4E0)
#define LODOKGPHEMB_MEPOHEBEOFE_OFFSET UNITYSDK_OFFSET(0xB7FA720)
#define LODOKGPHEMB_MGNDGIGCFHH_OFFSET UNITYSDK_OFFSET(0xB7FC1D0)
#define LODOKGPHEMB_NAOHLKCKDFP_OFFSET UNITYSDK_OFFSET(0xB7FD940)
#define LODOKGPHEMB_NFFLBLJJJDN_OFFSET UNITYSDK_OFFSET(0xB7FA6B0)
#define LODOKGPHEMB_NHMGFHDBDLN_OFFSET UNITYSDK_OFFSET(0xB7FC6F0)
#define LODOKGPHEMB_ONFNLOKFJMK_OFFSET UNITYSDK_OFFSET(0xB7FA560)

	class LODOKGPHEMB : public ::System::Object
	{
	public:
		::LAECFLNNOFH* FKINCGODJEP; // 0x10
		::NJKFCOIBIOK* JDILNDANFCO; // 0x18
		::System::Void _ctor(::LAECFLNNOFH* a1, ::NJKFCOIBIOK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LAECFLNNOFH*, ::NJKFCOIBIOK*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean LKHFDGMGGNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LODOKGPHEMB_LKHFDGMGGNO_OFFSET))(this);
		}

		::UnityEngine::Vector3 ONFNLOKFJMK(::BCLKDMAHONE* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_ONFNLOKFJMK_OFFSET))(this, a1);
		}

		::System::Void NFFLBLJJJDN(::RPG::Client::PixAir::PixAirJumpTextMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirJumpTextMessage*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_NFFLBLJJJDN_OFFSET))(this, a1);
		}

		::System::Void MEPOHEBEOFE(::BCLKDMAHONE* a1, ::BCLKDMAHONE* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_MEPOHEBEOFE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGNDGIGCFHH(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_MGNDGIGCFHH_OFFSET))(this, a1, a2);
		}

		::System::Void NHMGFHDBDLN(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::BCLKDMAHONE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_NHMGFHDBDLN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint NAOHLKCKDFP(::BCLKDMAHONE* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_NAOHLKCKDFP_OFFSET))(this, a1);
		}

		::System::Void ALDMOPEHKEI(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_ALDMOPEHKEI_OFFSET))(this, a1, a2);
		}

		::System::Void FBEGCFGFLEN(::BCLKDMAHONE* a1, ::BCLKDMAHONE* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_FBEGCFGFLEN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EFKEJJJNPIN(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_EFKEJJJNPIN_OFFSET))(this, a1, a2);
		}

		::System::Void GMLPJCMGNMI(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_GMLPJCMGNMI_OFFSET))(this, a1, a2);
		}

		::System::Void CFNNFEEKALF(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LODOKGPHEMB_CFNNFEEKALF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KFCLIIJFLLM(::BCLKDMAHONE* a1, ::RPG::GameCore::FixPoint a2, ::RPG::Client::LittleGame::PixAir::PixAirDamageType a3)
		{
			return ((::System::Void(*)(::PVOID, ::BCLKDMAHONE*, ::RPG::GameCore::FixPoint, ::RPG::Client::LittleGame::PixAir::PixAirDamageType))((::PBYTE)hIl2Cpp + LODOKGPHEMB_KFCLIIJFLLM_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 HADMLOCHPAP(::BCLKDMAHONE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_HADMLOCHPAP_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint KIPAACLECKI(::BCLKDMAHONE* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_KIPAACLECKI_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint BKLDOAOPDEE(::BCLKDMAHONE* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_BKLDOAOPDEE_OFFSET))(this, a1);
		}

		::System::Boolean FLMEOEFMBMF(::BCLKDMAHONE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCLKDMAHONE*))((::PBYTE)hIl2Cpp + LODOKGPHEMB_FLMEOEFMBMF_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics* FACPECALFJH(::System::Boolean a1)
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirPlaneStatistics*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LODOKGPHEMB_FACPECALFJH_OFFSET))(this, a1);
		}

	};
