#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

namespace MoleMole { class MonoInLevelBase; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Sprite; }

#define MOLEMOLE_MONOINLEVELBASE_BGKLGGOBIFI_CPBDLOEPPFF_OFFSET UNITYSDK_OFFSET(0x162E4C40)
#define MOLEMOLE_MONOINLEVELBASE_BGKLGGOBIFI__CTOR_OFFSET UNITYSDK_OFFSET(0x162E4C30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInLevelBase_BGKLGGOBIFI_TypeDefinitionIndex = 84515;

	class MonoInLevelBase_BGKLGGOBIFI : public ::System::Object
	{
	public:
		::System::Action_1<::UnityEngine::Sprite*>* NKIFJCDNCFI; // 0x10
		::MoleMole::MonoInLevelBase* KLHPEBKNIFB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_BGKLGGOBIFI__CTOR_OFFSET))(this);
		}

		::System::Void CPBDLOEPPFF(::UnityEngine::Sprite* FPNKAGADALJ, ::Foundation::AssetRequestHandle AOKHOHCJNFJ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELBASE_BGKLGGOBIFI_CPBDLOEPPFF_OFFSET))(this, FPNKAGADALJ, AOKHOHCJNFJ);
		}
	};
}
