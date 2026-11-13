#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECBOLFGIMA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALKGFCBJODP;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class GameEntity; }

#define MACPKMEBPGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6D6110)
#define MACPKMEBPGE_FOHGCGENOCP_OFFSET UNITYSDK_OFFSET(0x1B6D6220)
#define MACPKMEBPGE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x1B6D6140)

inline static constexpr unsigned int MACPKMEBPGE_TypeDefinitionIndex = 62265;

	class MACPKMEBPGE : public ::System::Object
	{
	public:
		::NECBOLFGIMA JINLCKIALKC; // 0x10
		::ALKGFCBJODP* CGPOGMMADPN; // 0x20
		::UnityEngine::Quaternion NCMEPPHLGEG; // 0x28
		::UnityEngine::Vector3 MIFKHBDOGLN; // 0x38
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::NECBOLFGIMA a3, ::ALKGFCBJODP* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::NECBOLFGIMA, ::ALKGFCBJODP*))((::PBYTE)hIl2Cpp + MACPKMEBPGE_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + MACPKMEBPGE_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::Boolean FOHGCGENOCP(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MACPKMEBPGE_FOHGCGENOCP_OFFSET))(this, a1);
		}

	};
