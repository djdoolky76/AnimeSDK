#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/CPCIFLHOOMC.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AEBAPGAGNAK;
class CCCBENCKELF;
namespace System { class Nullable; }
namespace UnityEngine { class Transform; }

#define DCBDMBEKAKN_APALIMEKLMD_OFFSET UNITYSDK_OFFSET(0x1CA1A740)
#define DCBDMBEKAKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1B010)
#define DCBDMBEKAKN_EICCNLAMKKG_OFFSET UNITYSDK_OFFSET(0x1CA1A880)
#define DCBDMBEKAKN_JLGNLIHJMEJ_OFFSET UNITYSDK_OFFSET(0x1CA1AC30)
#define DCBDMBEKAKN_JOKDPLDPMDO_OFFSET UNITYSDK_OFFSET(0x1CA1A900)
#define DCBDMBEKAKN_LBEIBLANIKB_OFFSET UNITYSDK_OFFSET(0x1CA1AFB0)
#define DCBDMBEKAKN_LLMMJPDOPIB_OFFSET UNITYSDK_OFFSET(0x1CA1A8E0)

inline static constexpr unsigned int DCBDMBEKAKN_TypeDefinitionIndex = 42628;

	class DCBDMBEKAKN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_CTOR_OFFSET))(this);
		}

		::AEBAPGAGNAK* APALIMEKLMD()
		{
			return ((::AEBAPGAGNAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_APALIMEKLMD_OFFSET))(this);
		}

		::CCCBENCKELF* EICCNLAMKKG()
		{
			return ((::CCCBENCKELF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_EICCNLAMKKG_OFFSET))(this);
		}

		::System::Boolean LLMMJPDOPIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_LLMMJPDOPIB_OFFSET))(this);
		}

		::AEBAPGAGNAK* JOKDPLDPMDO(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable* a8)
		{
			return ((::AEBAPGAGNAK*(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_JOKDPLDPMDO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void JLGNLIHJMEJ(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable* a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable*))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_JLGNLIHJMEJ_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void LBEIBLANIKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBDMBEKAKN_LBEIBLANIKB_OFFSET))(this);
		}

	};
