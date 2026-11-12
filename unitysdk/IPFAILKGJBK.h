#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNDHLHALKAK.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IPFAILKGJBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB853F30)
#define IPFAILKGJBK_JOLDEBJNCLL_OFFSET UNITYSDK_OFFSET(0xB854140)
#define IPFAILKGJBK_PFEKEEJINJD_OFFSET UNITYSDK_OFFSET(0xB853F50)

inline static constexpr unsigned int IPFAILKGJBK_TypeDefinitionIndex = 61365;

	class IPFAILKGJBK : public ::LNDHLHALKAK
	{
	public:
		::System::Single CNDABONKHMH; // 0x30
		::System::Single OCKOLFPPGDF; // 0x34
		::System::Single PDJLNAILECG; // 0x38
		::UnityEngine::Vector3 GFNEIGDFCII; // 0x3C
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + IPFAILKGJBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void PFEKEEJINJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFAILKGJBK_PFEKEEJINJD_OFFSET))(this);
		}

		::System::Void JOLDEBJNCLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFAILKGJBK_JOLDEBJNCLL_OFFSET))(this);
		}

	};
