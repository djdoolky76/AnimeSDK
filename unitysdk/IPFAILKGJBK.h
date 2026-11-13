#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNDHLHALKAK.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define IPFAILKGJBK_CTOR_OFFSET UNITYSDK_OFFSET(0x192FE8B0)
#define IPFAILKGJBK_JOLDEBJNCLL_OFFSET UNITYSDK_OFFSET(0x192FEAC0)
#define IPFAILKGJBK_PFEKEEJINJD_OFFSET UNITYSDK_OFFSET(0x192FE8D0)

inline static constexpr unsigned int IPFAILKGJBK_TypeDefinitionIndex = 61365;

	class IPFAILKGJBK : public ::LNDHLHALKAK
	{
	public:
		::System::Single OCKOLFPPGDF; // 0x30
		::UnityEngine::Vector3 GFNEIGDFCII; // 0x34
		::System::Single PDJLNAILECG; // 0x40
		::System::Single CNDABONKHMH; // 0x44
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
