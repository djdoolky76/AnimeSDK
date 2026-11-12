#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LookAtTargetData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class LookAtIK; }
namespace RPG::Client { class LookAtTargetConstraint; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET UNITYSDK_OFFSET(0xDF298F0)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDF1F9E0)
#define RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF29C40)

namespace RPG::Client
{
	inline static constexpr unsigned int LookAtIK_LookAtCacheData_TypeDefinitionIndex = 70416;

	class LookAtIK_LookAtCacheData : public ::System::Object
	{
	public:
		::System::String* _SolverUniqueName; // 0x10
		::UnityEngine::Transform* LookAtTarget; // 0x18
		::RPG::Client::LookAtTargetConstraint* LookAtConstraint; // 0x20
		::RPG::Client::LookAtTargetData LookAtData; // 0x28
		::System::Single FadeInTime; // 0xB0
		::UnityEngine::Vector3 PrevTracePos; // 0xB4
		::System::Single FadeOutTime; // 0xC0
		::System::Single UpDownFilterIntensity; // 0xC4
		::System::Single LookAtToTargetSpeed; // 0xC8
		::System::Single OverrideLookAtSpeed; // 0xCC
		::System::Single Speed; // 0xD0
		::System::Single OverrideLookAtFadeInTime; // 0xD4
		::System::Single LeftRightFilterIntensity; // 0xD8
		::System::Single StopSpeed; // 0xDC
		::System::Single OverrideLookAtFadeOutTime; // 0xE0
		::System::Void _ctor(::RPG::Client::LookAtIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LookAtIK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void CopyTo(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_COPYTO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOKATIK_LOOKATCACHEDATA_DISPOSE_OFFSET))(this);
		}

	};
}
