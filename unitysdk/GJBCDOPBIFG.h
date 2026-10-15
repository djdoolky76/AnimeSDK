#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameBaseEventAction; }
namespace UnityEngine { class AnimationCurve; }

#define GJBCDOPBIFG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA81960)
#define GJBCDOPBIFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA81A20)

inline static constexpr unsigned int GJBCDOPBIFG_TypeDefinitionIndex = 43412;

	class GJBCDOPBIFG : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* FDBFGGMDJBM; // 0x10
		::RPG::PoolList_1<::RPG::GameCore::LittleGameBaseEventAction*>* GKMGEAJGIKN; // 0x18
		::UnityEngine::Vector3 IJHDBLGLCMN; // 0x20
		::System::Single OIKGNPCGODF; // 0x2C
		::UnityEngine::Vector3 DLKMKNFJLIK; // 0x30
		::System::Single IEHPFADHJFD; // 0x3C
		::System::Single IFEPJHGNCOI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBCDOPBIFG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJBCDOPBIFG_CLEAR_OFFSET))(this);
		}

	};
