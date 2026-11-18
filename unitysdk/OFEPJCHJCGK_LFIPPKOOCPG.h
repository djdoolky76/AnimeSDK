#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class OFEPJCHJCGK;
namespace UnityEngine { class GameObject; }

#define OFEPJCHJCGK_LFIPPKOOCPG_IJBCHCPFBHE_OFFSET UNITYSDK_OFFSET(0x14F746F0)
#define OFEPJCHJCGK_LFIPPKOOCPG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F746E0)

inline static constexpr unsigned int OFEPJCHJCGK_LFIPPKOOCPG_TypeDefinitionIndex = 70709;

class OFEPJCHJCGK_LFIPPKOOCPG : public ::System::Object
{
public:
	::OFEPJCHJCGK* KLHPEBKNIFB; // 0x10
	::System::Int32 DNFNKBNBJHM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LFIPPKOOCPG__CTOR_OFFSET))(this);
	}

	::System::Void IJBCHCPFBHE(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_LFIPPKOOCPG_IJBCHCPFBHE_OFFSET))(this, OIIHCACKLHD, NJOAJLDJCCJ);
	}
};
