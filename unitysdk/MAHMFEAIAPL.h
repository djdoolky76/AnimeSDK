#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Component; }

inline static constexpr unsigned int MAHMFEAIAPL_TypeDefinitionIndex = 50103;

	struct alignas(8) MAHMFEAIAPL
	{
		::System::Object* DHLAFCPGJME; // 0x10
		::System::Int32 AAEHGBPKDPK; // 0x18
		::System::Byte _padding0[0x4];
		::System::Object* IAFFLJMPAJG; // 0x20
		::UnityEngine::Vector3 HNKBMHPLNDJ; // 0x28
		::UnityEngine::Quaternion EABHIKLGFNP; // 0x34
		::UnityEngine::Vector3 OIIIOOAJFEC; // 0x44
		::UnityEngine::Component* EJHLGMEBPBG; // 0x50
	};
