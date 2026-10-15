#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAPGFKLGCDH.h"
#include "unitysdk/HPPNJDAKAKO.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }

#define DBMDNNBIOAI_AABJPNHOGMD_OFFSET UNITYSDK_OFFSET(0xE22AE20)
#define DBMDNNBIOAI_ACDDMODKLBJ_OFFSET UNITYSDK_OFFSET(0xE22A480)
#define DBMDNNBIOAI_BGEBEKMJIPD_OFFSET UNITYSDK_OFFSET(0xE22A870)
#define DBMDNNBIOAI_CTOR_OFFSET UNITYSDK_OFFSET(0xE22A3D0)
#define DBMDNNBIOAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE22A430)
#define DBMDNNBIOAI_EEFBKDNCPBD_OFFSET UNITYSDK_OFFSET(0xE22AFF0)
#define DBMDNNBIOAI_ENJMMHDCAPH_OFFSET UNITYSDK_OFFSET(0xE22A9C0)
#define DBMDNNBIOAI_HFEMLLPLCKL_OFFSET UNITYSDK_OFFSET(0xE22AC00)
#define DBMDNNBIOAI_KLHEMNDJLGG_OFFSET UNITYSDK_OFFSET(0xE22A930)
#define DBMDNNBIOAI_LPOBAPPMDAM_OFFSET UNITYSDK_OFFSET(0xE22A740)
#define DBMDNNBIOAI_NPNJLDACKBJ_OFFSET UNITYSDK_OFFSET(0xE22B200)
#define DBMDNNBIOAI_OLGOHKJFGOH_OFFSET UNITYSDK_OFFSET(0xE22AA60)

inline static constexpr unsigned int DBMDNNBIOAI_TypeDefinitionIndex = 68770;

	class DBMDNNBIOAI : public ::System::Object
	{
	public:
		::EAPGFKLGCDH OFPEBOOCBCA; // 0x10
		::RPG::Client::TriggerEffectParamsRef JMLEIELGEJH; // 0x20
		::System::Collections::Generic::List_1<::HPPNJDAKAKO>* FCJMMJPPFGN; // 0x30
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* PNELGAPKCLO; // 0x38
		::UnityEngine::Animator* BNGAPGKMAEG; // 0x40
		::System::Boolean KELHPJAOMHP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_DISPOSE_OFFSET))(this);
		}

		::System::Void LPOBAPPMDAM(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_LPOBAPPMDAM_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* BGEBEKMJIPD(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_BGEBEKMJIPD_OFFSET))(this, a1);
		}

		::System::Void ACDDMODKLBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_ACDDMODKLBJ_OFFSET))(this, a1);
		}

		::System::Void ENJMMHDCAPH(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_ENJMMHDCAPH_OFFSET))(this, a1, a2);
		}

		::System::Void HFEMLLPLCKL(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_HFEMLLPLCKL_OFFSET))(this, a1, a2);
		}

		::System::Void EEFBKDNCPBD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_EEFBKDNCPBD_OFFSET))(this, a1);
		}

		::System::Void AABJPNHOGMD(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_AABJPNHOGMD_OFFSET))(this, a1, a2);
		}

		::System::Void NPNJLDACKBJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_NPNJLDACKBJ_OFFSET))(this, a1);
		}

		::System::Void OLGOHKJFGOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_OLGOHKJFGOH_OFFSET))(this);
		}

		::RPG::Client::TriggerEffectParams* KLHEMNDJLGG()
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMDNNBIOAI_KLHEMNDJLGG_OFFSET))(this);
		}

	};
