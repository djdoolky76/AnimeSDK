#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH;
class GJDPEGIFLGB;
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define BLFCELFLAHN_HJMDLLADCID_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6BC10)
#define BLFCELFLAHN_HJMDLLADCID_GLDLJMHAJJM_OFFSET UNITYSDK_OFFSET(0xBA6C4F0)
#define BLFCELFLAHN_HJMDLLADCID_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBA6CB50)

inline static constexpr unsigned int BLFCELFLAHN_HJMDLLADCID_TypeDefinitionIndex = 52293;

	class BLFCELFLAHN_HJMDLLADCID : public ::System::Object
	{
	public:
		::GJDPEGIFLGB* CKLLIFDLNNO; // 0x10
		::UnityEngine::Transform* JDJMNGAFHLI; // 0x18
		::BLFCELFLAHN_HJMDLLADCID_PCGEKNCGMAH* PNMIOAEEAAG; // 0x20
		::System::Nullable* KOBFNJBBNMP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_CTOR_OFFSET))(this);
		}

		::System::Void GLDLJMHAJJM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_GLDLJMHAJJM_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB(::GJDPEGIFLGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJDPEGIFLGB*))((::PBYTE)hIl2Cpp + BLFCELFLAHN_HJMDLLADCID_NPAFMEBNFOB_OFFSET))(this, a1);
		}

	};
