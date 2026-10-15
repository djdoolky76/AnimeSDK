#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define KALGLFPKCGH_CTOR_OFFSET UNITYSDK_OFFSET(0xB2D7D80)
#define KALGLFPKCGH_GPAHMMGLFGA_OFFSET UNITYSDK_OFFSET(0xB2D7CF0)
#define KALGLFPKCGH_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB2D7B10)
#define KALGLFPKCGH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2D7910)

inline static constexpr unsigned int KALGLFPKCGH_TypeDefinitionIndex = 72272;

	class KALGLFPKCGH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* EHHMNHMEFEB; // 0x60
		::UnityEngine::Transform* PBAMNMKPJIN; // 0x68
		::UnityEngine::Transform* IILLJBCGOOJ; // 0x70
		::UnityEngine::Transform* MGKMPLIICNA; // 0x78
		// static const ::System::String* JFCMCPFPDFP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALGLFPKCGH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KALGLFPKCGH__ONBIND_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + KALGLFPKCGH_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void GPAHMMGLFGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KALGLFPKCGH_GPAHMMGLFGA_OFFSET))(this, a1);
		}

	};
