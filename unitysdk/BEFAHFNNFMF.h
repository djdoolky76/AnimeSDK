#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimageComponent; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MdbComponent; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine::Rendering::Universal { class OceanFloatObject; }

#define BEFAHFNNFMF_NGPBDFKGNIC_OFFSET UNITYSDK_OFFSET(0x14C393E0)
#define BEFAHFNNFMF_OBPDBKIJIGA_OFFSET UNITYSDK_OFFSET(0x14C389E0)
#define BEFAHFNNFMF__CTOR_OFFSET UNITYSDK_OFFSET(0x14C38770)

inline static constexpr unsigned int BEFAHFNNFMF_TypeDefinitionIndex = 59529;

class BEFAHFNNFMF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::MdbComponent*, ::System::Boolean>* PKKNBPPJNKA; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::CapsuleCollider*, ::System::Boolean>* EDHHKEEJFPI; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rigidbody*, ::System::Boolean>* LIHJFADHGHL; // 0x20
	::System::Collections::Generic::Dictionary_2<::UnityEngine::AnimageComponent*, ::System::Boolean>* DIEKLGGILGH; // 0x28
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::OceanFloatObject*, ::System::Boolean>* JBHOLCLHIHK; // 0x30

	::System::Void _ctor(::UnityEngine::GameObject* ICPNADIPFKI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEFAHFNNFMF__CTOR_OFFSET))(this, ICPNADIPFKI);
	}

	::System::Void OBPDBKIJIGA(::UnityEngine::GameObject* ICPNADIPFKI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BEFAHFNNFMF_OBPDBKIJIGA_OFFSET))(this, ICPNADIPFKI);
	}

	::System::Void NGPBDFKGNIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFAHFNNFMF_NGPBDFKGNIC_OFFSET))(this);
	}
};
