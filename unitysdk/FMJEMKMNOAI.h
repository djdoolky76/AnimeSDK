#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System { class String; }

#define FMJEMKMNOAI_CKDPBIHENJC_OFFSET UNITYSDK_OFFSET(0x2E77D10)
#define FMJEMKMNOAI_FOLKNHHIJLA_OFFSET UNITYSDK_OFFSET(0x1585F720)
#define FMJEMKMNOAI_JIBEPLDAABO_OFFSET UNITYSDK_OFFSET(0x2E77C70)
#define FMJEMKMNOAI_NOBDGNEMKLO_OFFSET UNITYSDK_OFFSET(0x2E77D80)

inline static constexpr unsigned int FMJEMKMNOAI_TypeDefinitionIndex = 57164;

	struct alignas(4) FMJEMKMNOAI
	{
		::System::Int32 OJDMPJIOBMJ; // 0x10
		::System::Single NFELGGAPKMO; // 0x14
		::System::Boolean MGLKMINMINB; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single JBCFPAEELBL; // 0x1C
		::System::Boolean ANDIMGMEJED; // 0x20
		::System::String* JIBEPLDAABO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJEMKMNOAI_JIBEPLDAABO_OFFSET))(this);
		}

		::System::Boolean CKDPBIHENJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMJEMKMNOAI_CKDPBIHENJC_OFFSET))(this);
		}

		::System::Boolean NOBDGNEMKLO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FMJEMKMNOAI_NOBDGNEMKLO_OFFSET))(this, a1);
		}

		/*
		static ::FMJEMKMNOAI FOLKNHHIJLA(::UnityEngine::AnimatorStateInfo a1)
		{
			return ((::FMJEMKMNOAI(*)(::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + FMJEMKMNOAI_FOLKNHHIJLA_OFFSET))(a1);
		}
		*/

	};
