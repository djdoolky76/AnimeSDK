#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IAJLHKIHBFB.h"
class HJMFDDMHOJC;
namespace RPG::Client::LittleGame::PixAir { class PixAirLevelController; }
namespace RPG::Client::PixAir { class IPixAirBattleAction; }
namespace UnityEngine { class Transform; }

#define GFPBPPJIPJF_CTOR_OFFSET UNITYSDK_OFFSET(0x159F47F0)

inline static constexpr unsigned int GFPBPPJIPJF_TypeDefinitionIndex = 77291;

	class GFPBPPJIPJF : public ::IAJLHKIHBFB
	{
	public:
		::Il2CppArray<::HJMFDDMHOJC*>* DDAOEANOKCK; // 0x28
		::UnityEngine::Transform* OMELIJLJMME; // 0x30
		::RPG::Client::PixAir::IPixAirBattleAction* NCPOBICNFCH; // 0x38
		::HJMFDDMHOJC* CJBIMPODIFN; // 0x40
		::RPG::Client::LittleGame::PixAir::PixAirLevelController* JGCADGDDNCK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFPBPPJIPJF_CTOR_OFFSET))(this);
		}

	};
