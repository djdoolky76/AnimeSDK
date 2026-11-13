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

#define GGIBGDHBAMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A3390)
#define GGIBGDHBAMN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4A39E0)
#define GGIBGDHBAMN_EPGLGPDJIKC_OFFSET UNITYSDK_OFFSET(0x1B4A43D0)
#define GGIBGDHBAMN_FEPJAECJNEL_OFFSET UNITYSDK_OFFSET(0x1B4A3A60)
#define GGIBGDHBAMN_GAHOBOLNAIA_OFFSET UNITYSDK_OFFSET(0x1B4A4F30)
#define GGIBGDHBAMN_KANHFCAOALI_OFFSET UNITYSDK_OFFSET(0x1B4A3B70)
#define GGIBGDHBAMN_MKHFJMILGAG_OFFSET UNITYSDK_OFFSET(0x1B4A4AE0)
#define GGIBGDHBAMN_ODGOHFJHDMF_OFFSET UNITYSDK_OFFSET(0x1B4A3FF0)
#define GGIBGDHBAMN_OPNIMOOAKDL_OFFSET UNITYSDK_OFFSET(0x1B4A3C00)

inline static constexpr unsigned int GGIBGDHBAMN_TypeDefinitionIndex = 62188;

	class GGIBGDHBAMN : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PPLFJBHKPDG; // 0x10
		::Il2CppArray<::UnityEngine::RaycastHit>* CIECEBIKPMP; // 0x18
		::UnityEngine::Transform* IFFOHHFHPDO; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BHAKAOEDEII; // 0x28
		::CCKKOKJIIDO* FCIENMANDEG; // 0x30
		::UnityEngine::Vector3 AFJPJMACFPP; // 0x38
		::System::Single PHFMMMBEDKD; // 0x44
		::System::Single DKBKELBFMCD; // 0x48
		::UnityEngine::Vector3 GCDKCNKNDEN; // 0x4C
		::System::Single EEAAFHMHFFB; // 0x58
		::System::Single NCGNANEMDCF; // 0x5C
		::System::Single MFOOBPJLGKG; // 0x60
		::System::Single BBGJMDDEKIC; // 0x64
		::System::Single NEJLFGKIEMM; // 0x68
		::ELDNAILNPNL ILNDMCGIHFH; // 0x6C
		::System::Single JLDNDCNNBCL; // 0xCC
		::System::Single OCGFPOBMDKF; // 0xD0
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
