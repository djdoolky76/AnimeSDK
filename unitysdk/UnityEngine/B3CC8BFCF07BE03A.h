#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B8C48C8BF406E9BC/EF22C423CB30F1A1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_B3CC8BFCF07BE03A_AA86E7156486B09A_OFFSET UNITYSDK_OFFSET(0x4175740)

namespace UnityEngine
{
	inline static constexpr unsigned int B3CC8BFCF07BE03A_TypeDefinitionIndex = 17462;

	struct alignas(8) B3CC8BFCF07BE03A
	{
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::System::Int32> EC5053FD431D78C1; // 0x10
		::System::Byte _padding0[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::System::Int32> AF4A5F58B6FD4AF1; // 0x20
		::System::Byte _padding1[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::ACF10FE87B4C5617> B3AC21B7E90D2E81; // 0x30
		::System::Byte _padding2[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::Vector3> B510E156FBC30A6C; // 0x40
		::System::Byte _padding3[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::Quaternion> AA7EDCD18E604F38; // 0x50
		::System::Byte _padding4[0x8];
		::B8C48C8BF406E9BC::EF22C423CB30F1A1<::UnityEngine::Vector3> ECAC76B1FC502B50; // 0x60

		::System::Void AA86E7156486B09A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B3CC8BFCF07BE03A_AA86E7156486B09A_OFFSET))(this);
		}
	};
}
