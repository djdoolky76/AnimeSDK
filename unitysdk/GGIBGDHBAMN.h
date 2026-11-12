#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELDNAILNPNL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CCKKOKJIIDO;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerLockRangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define GGIBGDHBAMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1693FD50)
#define GGIBGDHBAMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16940380)
#define GGIBGDHBAMN_EPGLGPDJIKC_OFFSET UNITYSDK_OFFSET(0x16940D70)
#define GGIBGDHBAMN_FEPJAECJNEL_OFFSET UNITYSDK_OFFSET(0x16940400)
#define GGIBGDHBAMN_GAHOBOLNAIA_OFFSET UNITYSDK_OFFSET(0x169418D0)
#define GGIBGDHBAMN_KANHFCAOALI_OFFSET UNITYSDK_OFFSET(0x16940510)
#define GGIBGDHBAMN_MKHFJMILGAG_OFFSET UNITYSDK_OFFSET(0x16941480)
#define GGIBGDHBAMN_ODGOHFJHDMF_OFFSET UNITYSDK_OFFSET(0x16940990)
#define GGIBGDHBAMN_OPNIMOOAKDL_OFFSET UNITYSDK_OFFSET(0x169405A0)

inline static constexpr unsigned int GGIBGDHBAMN_TypeDefinitionIndex = 62188;

	class GGIBGDHBAMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BHAKAOEDEII; // 0x10
		::UnityEngine::Transform* IFFOHHFHPDO; // 0x18
		::CCKKOKJIIDO* FCIENMANDEG; // 0x20
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PPLFJBHKPDG; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit>* CIECEBIKPMP; // 0x30
		::System::Single NCGNANEMDCF; // 0x38
		::System::Single BBGJMDDEKIC; // 0x3C
		::UnityEngine::Vector3 AFJPJMACFPP; // 0x40
		::System::Single MFOOBPJLGKG; // 0x4C
		::System::Single DKBKELBFMCD; // 0x50
		::UnityEngine::Vector3 GCDKCNKNDEN; // 0x54
		::System::Single JLDNDCNNBCL; // 0x60
		::System::Single OCGFPOBMDKF; // 0x64
		::System::Single NEJLFGKIEMM; // 0x68
		::System::Single EEAAFHMHFFB; // 0x6C
		::ELDNAILNPNL ILNDMCGIHFH; // 0x70
		::System::Single PHFMMMBEDKD; // 0xD0
		// static const ::System::Object BAHOMNMNIFM; // 0x0
		::System::Void _ctor(::RPG::GameCore::PlayerLockRangeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerLockRangeConfig*))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_DISPOSE_OFFSET))(this);
		}

		::System::Void FEPJAECJNEL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_FEPJAECJNEL_OFFSET))(this, a1);
		}

		::System::Void KANHFCAOALI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_KANHFCAOALI_OFFSET))(this, a1);
		}

		::System::Void OPNIMOOAKDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_OPNIMOOAKDL_OFFSET))(this);
		}

		::System::Boolean ODGOHFJHDMF(::RPG::GameCore::EntityTimeRewindComponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_ODGOHFJHDMF_OFFSET))(this, a1);
		}

		::System::Boolean EPGLGPDJIKC(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_EPGLGPDJIKC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean MKHFJMILGAG(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Collider* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_MKHFJMILGAG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::GameEntity* GAHOBOLNAIA()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIBGDHBAMN_GAHOBOLNAIA_OFFSET))(this);
		}

	};
