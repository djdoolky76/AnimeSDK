#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDDEJCPLON.h"
class KJBFDONEACG;
namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define KJBFDONEACG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBCD2AC0)
#define KJBFDONEACG_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD2CF0)
#define KJBFDONEACG_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xBCD2C70)
#define KJBFDONEACG_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xBCD2B60)
#define KJBFDONEACG__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0xBCD2D00)

inline static constexpr unsigned int KJBFDONEACG_TypeDefinitionIndex = 76617;

	class KJBFDONEACG : public ::MFDDEJCPLON
	{
	public:
		::System::String* MJPKBIGCFOM; // 0x28
		::UnityEngine::Transform* NPAFMEBNFOB; // 0x30
		::System::String* GJEAIKIINML; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFDONEACG_CTOR_OFFSET))(this);
		}

		static ::KJBFDONEACG* BPLPBPMEODA(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::KJBFDONEACG*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + KJBFDONEACG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFDONEACG_ONEXECUTE_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFDONEACG_ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnExecute_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJBFDONEACG__ONEXECUTE_B__1_0_OFFSET))(this);
		}

	};
