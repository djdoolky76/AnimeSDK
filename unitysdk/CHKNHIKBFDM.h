#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Graphic; }

#define CHKNHIKBFDM_BGFPKOLKPOO_OFFSET UNITYSDK_OFFSET(0xD8C10D0)
#define CHKNHIKBFDM_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xD8C1020)
#define CHKNHIKBFDM_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xD8C0F60)
#define CHKNHIKBFDM_JFNDMGPKLOJ_OFFSET UNITYSDK_OFFSET(0xD8C1160)

inline static constexpr unsigned int CHKNHIKBFDM_TypeDefinitionIndex = 50811;

	class CHKNHIKBFDM : public ::System::Object
	{
	public:
		static ::System::Single JDAGFHEPMHF(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Single(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CHKNHIKBFDM_JDAGFHEPMHF_OFFSET))(a1, a2);
		}

		static ::System::Void HFKFNFKIEON(::UnityEngine::Animation* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + CHKNHIKBFDM_HFKFNFKIEON_OFFSET))(a1, a2);
		}

		static ::System::Void BGFPKOLKPOO(::UnityEngine::Animation* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::Animation*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CHKNHIKBFDM_BGFPKOLKPOO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JFNDMGPKLOJ(::UnityEngine::UI::Graphic* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*, ::System::Single))((::PBYTE)hIl2Cpp + CHKNHIKBFDM_JFNDMGPKLOJ_OFFSET))(a1, a2);
		}

	};
