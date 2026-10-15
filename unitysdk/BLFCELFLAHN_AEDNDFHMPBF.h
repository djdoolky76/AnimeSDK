#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GJDPEGIFLGB;
namespace UnityEngine { class Transform; }

#define BLFCELFLAHN_AEDNDFHMPBF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6BC50)
#define BLFCELFLAHN_AEDNDFHMPBF_GLDLJMHAJJM_OFFSET UNITYSDK_OFFSET(0xBA6C360)
#define BLFCELFLAHN_AEDNDFHMPBF_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA6C1A0)

inline static constexpr unsigned int BLFCELFLAHN_AEDNDFHMPBF_TypeDefinitionIndex = 52295;

	class BLFCELFLAHN_AEDNDFHMPBF : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::GJDPEGIFLGB* CKLLIFDLNNO; // 0x18
		::UnityEngine::Vector3 NOALMJLJJGC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_AEDNDFHMPBF_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::GJDPEGIFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJDPEGIFLGB*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_AEDNDFHMPBF_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void GLDLJMHAJJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFCELFLAHN_AEDNDFHMPBF_GLDLJMHAJJM_OFFSET))(this, a1);
		}

	};
