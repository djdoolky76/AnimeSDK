#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }

#define OFPJBGCDOMK_EIGPPLLMLJA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x5D2460)
#define OFPJBGCDOMK_EIGPPLLMLJA_EQUALS_OFFSET UNITYSDK_OFFSET(0x5D2420)
#define OFPJBGCDOMK_EIGPPLLMLJA_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x5D2560)

inline static constexpr unsigned int OFPJBGCDOMK_EIGPPLLMLJA_TypeDefinitionIndex = 83045;

struct alignas(8) OFPJBGCDOMK_EIGPPLLMLJA
{
	::UnityEngine::Vector3 KHCGLFKKIBO; // 0x10
	::System::Single IDIFKDDAJGA; // 0x1C
	::System::Single CCCHGOIAOOB; // 0x20
	::UnityEngine::Vector3 HGICOJPKCBA; // 0x24
	::UnityEngine::Quaternion OIOKFGAJCAP; // 0x30
	::UnityEngine::Camera* OCIBCMLGGKJ; // 0x40

	/*
	::System::Boolean Equals(::OFPJBGCDOMK_EIGPPLLMLJA LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::OFPJBGCDOMK_EIGPPLLMLJA))((::PBYTE)hIl2Cpp + OFPJBGCDOMK_EIGPPLLMLJA_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Boolean Equals_1(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFPJBGCDOMK_EIGPPLLMLJA_EQUALS_1_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFPJBGCDOMK_EIGPPLLMLJA_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}
};
