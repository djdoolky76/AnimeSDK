#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGBPMPBLDNK.h"
namespace RPGTools { class MonoTimelineEffect; }
namespace System { class String; }
namespace UnityEngine { class MeshRenderer; }

#define HCCCBGNOACO_CTOR_OFFSET UNITYSDK_OFFSET(0x15C17480)
#define HCCCBGNOACO_DCDJFENHLKE_OFFSET UNITYSDK_OFFSET(0x15C17430)
#define HCCCBGNOACO_FCGPPFGOFPE_OFFSET UNITYSDK_OFFSET(0x15C17250)
#define HCCCBGNOACO_HFDMCNALNPJ_OFFSET UNITYSDK_OFFSET(0x15C17150)
#define HCCCBGNOACO_HOIDHCGFJCJ_OFFSET UNITYSDK_OFFSET(0x15C172A0)
#define HCCCBGNOACO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15C17160)

	class HCCCBGNOACO : public ::OGBPMPBLDNK
	{
	public:
		::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x80
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCCBGNOACO_CTOR_OFFSET))(this);
		}

		::RPGTools::MonoTimelineEffect* HFDMCNALNPJ()
		{
			return ((::RPGTools::MonoTimelineEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCCBGNOACO_HFDMCNALNPJ_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HCCCBGNOACO_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FCGPPFGOFPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCCBGNOACO_FCGPPFGOFPE_OFFSET))(this);
		}

		::System::Void DCDJFENHLKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCCBGNOACO_DCDJFENHLKE_OFFSET))(this);
		}

		::System::Void HOIDHCGFJCJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCCCBGNOACO_HOIDHCGFJCJ_OFFSET))(this);
		}

	};
