#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Behaviour; }

#define LDKMDHHKAKF_HGFKCIDPEEI_OFFSET UNITYSDK_OFFSET(0xB6302C0)
#define LDKMDHHKAKF_MDMLJCPBPAH_OFFSET UNITYSDK_OFFSET(0xB630260)

inline static constexpr unsigned int LDKMDHHKAKF_TypeDefinitionIndex = 73657;

	class LDKMDHHKAKF : public ::System::Object
	{
	public:
		static ::System::Void MDMLJCPBPAH(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + LDKMDHHKAKF_MDMLJCPBPAH_OFFSET))(a1);
		}

		static ::System::Void HGFKCIDPEEI(::UnityEngine::Behaviour* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + LDKMDHHKAKF_HGFKCIDPEEI_OFFSET))(a1);
		}

	};
