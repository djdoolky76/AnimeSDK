#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
class KKBMBCNKKNL;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KKBMBCNKKNL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB4B5800)
#define KKBMBCNKKNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B5AE0)
#define KKBMBCNKKNL_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB4B5A60)
#define KKBMBCNKKNL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB4B58C0)
#define KKBMBCNKKNL__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xB4B5AF0)

inline static constexpr unsigned int KKBMBCNKKNL_TypeDefinitionIndex = 74468;

	class KKBMBCNKKNL : public ::MFDDEJCPLON
	{
	public:
		::System::String* GJEAIKIINML; // 0x28
		::UnityEngine::Transform* NPAFMEBNFOB; // 0x30
		::System::String* MJPKBIGCFOM; // 0x38
		::RPG::Client::PlanetFesFloatingController_ItemType LINLNNHIBAK; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBMBCNKKNL_CTOR_OFFSET))(this);
		}

		static ::KKBMBCNKKNL* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::RPG::Client::PlanetFesFloatingController_ItemType a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::KKBMBCNKKNL*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KKBMBCNKKNL_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBMBCNKKNL_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBMBCNKKNL_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKBMBCNKKNL__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
