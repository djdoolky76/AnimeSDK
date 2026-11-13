#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/EImpactType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define ILLGBAOOJNL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EC37010)
#define ILLGBAOOJNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC37070)

inline static constexpr unsigned int ILLGBAOOJNL_TypeDefinitionIndex = 43897;

	class ILLGBAOOJNL : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* NLIFDJHPHLP; // 0x10
		::System::Single BFPEKOGAALP; // 0x18
		::UnityEngine::Vector3 LJDHGFECMHJ; // 0x1C
		::System::Single GHFHMNDKFNE; // 0x28
		::System::Single IEHPFADHJFD; // 0x2C
		::System::Single HHLNOEILPOJ; // 0x30
		::System::Single LGNNJDNJPJA; // 0x34
		::RPG::Client::LittleGame::RoadRash::EImpactType IGCHMKBAIDJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLGBAOOJNL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILLGBAOOJNL_CLEAR_OFFSET))(this);
		}

	};
