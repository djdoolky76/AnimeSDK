#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNDHLHALKAK.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MBMIGJBLODI_AEFLAAPAGEN_OFFSET UNITYSDK_OFFSET(0xB86D630)
#define MBMIGJBLODI_CTOR_OFFSET UNITYSDK_OFFSET(0xB86D460)
#define MBMIGJBLODI_JOLDEBJNCLL_OFFSET UNITYSDK_OFFSET(0xB86D690)
#define MBMIGJBLODI_PFEKEEJINJD_OFFSET UNITYSDK_OFFSET(0xB86D480)

inline static constexpr unsigned int MBMIGJBLODI_TypeDefinitionIndex = 60077;

	class MBMIGJBLODI : public ::LNDHLHALKAK
	{
	public:
		::System::Single AEMPGLFOLMC; // 0x30
		::System::Single KKJNEDNFEKI; // 0x34
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + MBMIGJBLODI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PFEKEEJINJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMIGJBLODI_PFEKEEJINJD_OFFSET))(this);
		}

		::System::Void JOLDEBJNCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBMIGJBLODI_JOLDEBJNCLL_OFFSET))(this);
		}

		static ::System::Boolean AEFLAAPAGEN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + MBMIGJBLODI_AEFLAAPAGEN_OFFSET))(a1);
		}

	};
