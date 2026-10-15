#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_CAGCHKJHMPD_OFFSET UNITYSDK_OFFSET(0xD73BB50)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_CTOR_OFFSET UNITYSDK_OFFSET(0xD73BBD0)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_KGJKEJANMPD_OFFSET UNITYSDK_OFFSET(0xD73BA50)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xD7413A0)
#define RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_OIBKPJEGPOK_OFFSET UNITYSDK_OFFSET(0xD741400)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveObjectLogic_Load_TypeDefinitionIndex = 68541;

	class MonoCurveObjectLogic_Load : public ::System::Object
	{
	public:
		::System::Boolean loadedState; // 0x10
		::System::Boolean targetLoadedState; // 0x11
		::System::Byte _padding0[0x6];
		::UnityEngine::GameObject* loadGameObject; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void OIBKPJEGPOK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_OIBKPJEGPOK_OFFSET))(this, a1);
		}

		::System::Boolean KGJKEJANMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_KGJKEJANMPD_OFFSET))(this);
		}

		::System::Boolean CAGCHKJHMPD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVEOBJECTLOGIC_LOAD_CAGCHKJHMPD_OFFSET))(this);
		}

	};
}
