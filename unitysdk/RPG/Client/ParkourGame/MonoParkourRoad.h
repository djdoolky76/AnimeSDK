#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BGCurveExtention;
namespace RPG::Client::ParkourGame { class MonoParkourRoad; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_ConnectionInfo; }
namespace RPG::Client::ParkourGame { class MonoParkourRoad_RoadItem; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_BKJJMPFLBNK_OFFSET UNITYSDK_OFFSET(0xDA6F070)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CTOR_OFFSET UNITYSDK_OFFSET(0xDA72120)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_DEBUG_UPDATEALLSPEEDREGIONINFO_OFFSET UNITYSDK_OFFSET(0xDA6ED50)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ECEJMDBMEJF_OFFSET UNITYSDK_OFFSET(0xDA6E750)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_FEHCGIBKICG_OFFSET UNITYSDK_OFFSET(0xDA71D40)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_GKABJHGKBAN_OFFSET UNITYSDK_OFFSET(0xDA71700)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HPPODPDFKLF_OFFSET UNITYSDK_OFFSET(0xDA6E5E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_IFIAMPBIEOJ_OFFSET UNITYSDK_OFFSET(0xDA70090)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_NHMEHFGJJOP_OFFSET UNITYSDK_OFFSET(0xDA6D9E0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xDA6D160)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_PCOJHCAGMNA_OFFSET UNITYSDK_OFFSET(0xDA71FA0)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEENDPOINTPYNEXTCONNECTIONSTART_OFFSET UNITYSDK_OFFSET(0xDA6FF80)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEGENERATE_OFFSET UNITYSDK_OFFSET(0xDA70F10)
#define RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATENEXTCONNECTIONSTARTPOINT_OFFSET UNITYSDK_OFFSET(0xDA6EEB0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int MonoParkourRoad_TypeDefinitionIndex = 74154;

	class MonoParkourRoad : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* UniqueName; // 0x18
		::UnityEngine::Vector2Int RoadRange; // 0x20
		::System::Int32 StartPointIndex; // 0x28
		::System::Int32 EndPointIndex; // 0x2C
		::BGCurveExtention* Curve; // 0x30
		::RPG::Client::ParkourGame::MonoParkourRoad_ConnectionInfo* Connection; // 0x38
		::Il2CppArray<::System::Object*>* Items; // 0x40
		::Il2CppArray<::System::Object*>* Triggers; // 0x48
		::System::Single HDCNNMLMFAA; // 0x50
		::System::Single EECKKIEPEDH; // 0x54
		::System::Single COCCEOCDJLA; // 0x58
		::System::Single AAJPCONCACN; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_CTOR_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Debug_UpdateAllSpeedRegionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_DEBUG_UPDATEALLSPEEDREGIONINFO_OFFSET))(this);
		}

		::System::Void UpdateNextConnectionStartPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATENEXTCONNECTIONSTARTPOINT_OFFSET))(this);
		}

		::System::Void UpdateEndPointPyNextConnectionStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEENDPOINTPYNEXTCONNECTIONSTART_OFFSET))(this);
		}

		::System::Void UpdateGenerate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_UPDATEGENERATE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* ECEJMDBMEJF(::RPG::Client::ParkourGame::MonoParkourRoad* a1, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad*, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_ECEJMDBMEJF_OFFSET))(this, a1, a2);
		}

		::System::Void BKJJMPFLBNK(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_BKJJMPFLBNK_OFFSET))(this, a1, a2);
		}

		::System::Void NHMEHFGJJOP(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_NHMEHFGJJOP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FEHCGIBKICG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_FEHCGIBKICG_OFFSET))(this, a1, a2, a3);
		}

		::System::Single PCOJHCAGMNA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_PCOJHCAGMNA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::ParkourGame::MonoParkourRoad* GKABJHGKBAN(::System::String* a1)
		{
			return ((::RPG::Client::ParkourGame::MonoParkourRoad*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_GKABJHGKBAN_OFFSET))(this, a1);
		}

		::UnityEngine::Color HPPODPDFKLF(::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem* a1)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::RPG::Client::ParkourGame::MonoParkourRoad_RoadItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_HPPODPDFKLF_OFFSET))(this, a1);
		}

		::System::Void IFIAMPBIEOJ(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_MONOPARKOURROAD_IFIAMPBIEOJ_OFFSET))(this, a1, a2);
		}

	};
}
