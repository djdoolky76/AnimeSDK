#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class KANECPEBLOO_MMNGGBNOOFO;
namespace UnityEngine { class GameObject; }

#define KANECPEBLOO_MEOCBDPAOMN_KIKMFDHKIKM_OFFSET UNITYSDK_OFFSET(0x157DCB90)
#define KANECPEBLOO_MEOCBDPAOMN__CTOR_OFFSET UNITYSDK_OFFSET(0x157DCB80)

inline static constexpr unsigned int KANECPEBLOO_MEOCBDPAOMN_TypeDefinitionIndex = 79569;

class KANECPEBLOO_MEOCBDPAOMN : public ::System::Object
{
public:
	::UnityEngine::GameObject* NJOAJLDJCCJ; // 0x10
	::KANECPEBLOO_MMNGGBNOOFO* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KANECPEBLOO_MEOCBDPAOMN__CTOR_OFFSET))(this);
	}

	::System::Void KIKMFDHKIKM(::UnityEngine::GameObject* ABADDLJBCPA, ::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + KANECPEBLOO_MEOCBDPAOMN_KIKMFDHKIKM_OFFSET))(this, ABADDLJBCPA, CJBJONJDOLI);
	}
};
