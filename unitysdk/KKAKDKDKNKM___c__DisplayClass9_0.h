#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class IOLIAAFBFON;
class WaveSimPanel;

#define KKAKDKDKNKM___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B36E0)
#define KKAKDKDKNKM___C__DISPLAYCLASS9_0__TRIGGERFALLEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB4B36F0)

inline static constexpr unsigned int KKAKDKDKNKM___c__DisplayClass9_0_TypeDefinitionIndex = 70866;

	class KKAKDKDKNKM___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::IOLIAAFBFON* instance; // 0x10
		::WaveSimPanel* panel; // 0x18
		::System::Single radius; // 0x20
		::UnityEngine::Quaternion rotation; // 0x24
		::UnityEngine::Vector3 position; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void _TriggerFallEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAKDKDKNKM___C__DISPLAYCLASS9_0__TRIGGERFALLEFFECT_B__0_OFFSET))(this);
		}

	};
