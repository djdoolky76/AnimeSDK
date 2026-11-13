#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGBPMPBLDNK.h"
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define LCAGAOODECN_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AE590)
#define LCAGAOODECN_DCDJFENHLKE_OFFSET UNITYSDK_OFFSET(0x1B2AE540)
#define LCAGAOODECN_FCGPPFGOFPE_OFFSET UNITYSDK_OFFSET(0x1B2AE3C0)
#define LCAGAOODECN_HFDMCNALNPJ_OFFSET UNITYSDK_OFFSET(0x1B2AE2F0)
#define LCAGAOODECN_HOIDHCGFJCJ_OFFSET UNITYSDK_OFFSET(0x1B2AE410)
#define LCAGAOODECN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B2AE300)

inline static constexpr unsigned int LCAGAOODECN_TypeDefinitionIndex = 49735;

	class LCAGAOODECN : public ::OGBPMPBLDNK
	{
	public:
		::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAGAOODECN_CTOR_OFFSET))(this);
		}

		::RPGTools::MonoTimelineEffect* HFDMCNALNPJ()
		{
			return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAGAOODECN_HFDMCNALNPJ_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + LCAGAOODECN_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FCGPPFGOFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAGAOODECN_FCGPPFGOFPE_OFFSET))(this);
		}

		::System::Void DCDJFENHLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAGAOODECN_DCDJFENHLKE_OFFSET))(this);
		}

		::System::Void HOIDHCGFJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCAGAOODECN_HOIDHCGFJCJ_OFFSET))(this);
		}

	};
