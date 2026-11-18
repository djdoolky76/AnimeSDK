#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MENDDDMEBLE_JGGHNLBNKHA_OFFSET UNITYSDK_OFFSET(0x91E230)

inline static constexpr unsigned int MENDDDMEBLE_TypeDefinitionIndex = 94968;

struct alignas(8) MENDDDMEBLE
{
	::System::Boolean GFHPDPHHHGL; // 0x10
	::System::Byte _padding0[0x3];
	::System::UInt32 BKLGNCBNEGM; // 0x14
	::System::Int32 NGMIGPFDJFN; // 0x18
	::System::Byte _padding1[0x4];
	::Foundation::AssetPath OJABNLAIPJI; // 0x20
	::UnityEngine::GameObject* CHNNAEOMCNL; // 0x30
	::Il2CppArray<::Foundation::AssetPath>* ANCMLOHBOJA; // 0x38
	::Il2CppArray<::UnityEngine::GameObject*>* ONDDLLEEJNP; // 0x40

	::System::String* JGGHNLBNKHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENDDDMEBLE_JGGHNLBNKHA_OFFSET))(this);
	}
};
