#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CCHDOBAEGCN.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
namespace UnityEngine { class Collider; }

#define NNOOFOJPAHL_BDNJOBHADEI_OFFSET UNITYSDK_OFFSET(0x17A19B80)
#define NNOOFOJPAHL_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x17A1C9A0)
#define NNOOFOJPAHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x17A1CA10)
#define NNOOFOJPAHL_CFMJGOEGDBJ_OFFSET UNITYSDK_OFFSET(0x17A1B710)
#define NNOOFOJPAHL_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x17A194E0)
#define NNOOFOJPAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x17A1C9F0)
#define NNOOFOJPAHL_DAKCPAHFJGD_OFFSET UNITYSDK_OFFSET(0x17A1AB20)
#define NNOOFOJPAHL_HPOKGGLPPEM_OFFSET UNITYSDK_OFFSET(0x17A195C0)
#define NNOOFOJPAHL_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x17A19C60)
#define NNOOFOJPAHL_INHNECLGCJF_OFFSET UNITYSDK_OFFSET(0x17A196A0)
#define NNOOFOJPAHL_JGLIEKLJAJG_OFFSET UNITYSDK_OFFSET(0x17A1B3A0)
#define NNOOFOJPAHL_KJGEIFLBJAO_OFFSET UNITYSDK_OFFSET(0x17A1C910)
#define NNOOFOJPAHL_MHAGIKPKFOC_OFFSET UNITYSDK_OFFSET(0x17A19D60)
#define NNOOFOJPAHL_NLBJILBICAP_OFFSET UNITYSDK_OFFSET(0x17A1B4A0)
#define NNOOFOJPAHL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x17A1A3E0)
#define NNOOFOJPAHL_PHHOAIBGJFP_OFFSET UNITYSDK_OFFSET(0x17A1A6D0)

inline static constexpr unsigned int NNOOFOJPAHL_TypeDefinitionIndex = 79397;

	class NNOOFOJPAHL : public ::CCHDOBAEGCN
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_NANKADLCJGO()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "NNOOFOJPAHL")->GetStaticField(0x597F0);
		}

		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_BIGKOJPBIEC()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "NNOOFOJPAHL")->GetStaticField(0x597F8);
		}

		static ::System::Int32* StaticGet_AIIOHLBHFAD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNOOFOJPAHL")->GetStaticField(0x13210);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOOFOJPAHL_CCTOR_OFFSET))();
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void HPOKGGLPPEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_HPOKGGLPPEM_OFFSET))(this);
		}

		::UnityEngine::Vector3 INHNECLGCJF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_INHNECLGCJF_OFFSET))(this);
		}

		::System::Void BDNJOBHADEI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_BDNJOBHADEI_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void MHAGIKPKFOC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_MHAGIKPKFOC_OFFSET))(this, a1);
		}

		::System::Void PHHOAIBGJFP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_PHHOAIBGJFP_OFFSET))(this, a1);
		}

		::System::Boolean DAKCPAHFJGD(::UnityEngine::Collider* a1, ::System::Boolean a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::System::Boolean, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_DAKCPAHFJGD_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JGLIEKLJAJG(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_JGLIEKLJAJG_OFFSET))(this, a1);
		}

		::System::Void CFMJGOEGDBJ(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::HIOEAKHGILF* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_CFMJGOEGDBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NLBJILBICAP(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_NLBJILBICAP_OFFSET))(this, a1);
		}

		::System::Boolean KJGEIFLBJAO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_KJGEIFLBJAO_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOOFOJPAHL_BPMGPFLHPLC_OFFSET))(this);
		}

	};
