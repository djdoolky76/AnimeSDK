#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KCOGHBFNNOK_CBCKDKHKOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x157E0B30)

inline static constexpr unsigned int KCOGHBFNNOK_CBCKDKHKOOM_TypeDefinitionIndex = 85734;

class KCOGHBFNNOK_CBCKDKHKOOM : public ::System::Object
{
public:
	::UnityEngine::Transform* FKGEOBBECEE; // 0x10
	::System::String* HKBBKHLNGBN; // 0x18
	::UnityEngine::Transform* EGDDFHHFMKI; // 0x20
	::UnityEngine::Vector3 LOJBEJKDHGH; // 0x28
	::System::Boolean BCKJEIJELCH; // 0x34
	::System::Boolean KGFLJJOJBCG; // 0x35
	::System::Boolean NIOCIIJIHBG; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 BHNDAIOMDIL; // 0x38
	::UnityEngine::Quaternion NPNANLJAJFE; // 0x3C
	::System::Single PILIDFHPPPE; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCOGHBFNNOK_CBCKDKHKOOM__CTOR_OFFSET))(this);
	}
};
