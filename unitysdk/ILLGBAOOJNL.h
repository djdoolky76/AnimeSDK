#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define ILLGBAOOJNL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD3EAC0)
#define ILLGBAOOJNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3EB20)

inline static constexpr unsigned int ILLGBAOOJNL_TypeDefinitionIndex = 43897;

	class ILLGBAOOJNL : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x10
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x18
		::System::Single GHFHMNDKFNE; // 0x24
		::System::Single HHLNOEILPOJ; // 0x28
		::System::Single BFPEKOGAALP; // 0x2C
		::System::Single IEHPFADHJFD; // 0x30
		::RPG::Client::LittleGame::RoadRash::EImpactType IGCHMKBAIDJ; // 0x34
		::System::Single LGNNJDNJPJA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLGBAOOJNL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLGBAOOJNL_CLEAR_OFFSET))(this);
		}

	};
