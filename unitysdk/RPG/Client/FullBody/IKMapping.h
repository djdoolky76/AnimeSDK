#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPING_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD074FE0)
#define RPG_CLIENT_FULLBODY_IKMAPPING_BEODLOHJIHE_OFFSET UNITYSDK_OFFSET(0xD075160)
#define RPG_CLIENT_FULLBODY_IKMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0xD075300)
#define RPG_CLIENT_FULLBODY_IKMAPPING_ILADLKABEPP_OFFSET UNITYSDK_OFFSET(0xD075030)
#define RPG_CLIENT_FULLBODY_IKMAPPING_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD074F90)

namespace RPG::Client::FullBody
{
	class IKMapping : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_CTOR_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolver* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Boolean ILADLKABEPP(::UnityEngine::Transform* a1, ::RPG::Client::FullBody::IKSolver* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_ILADLKABEPP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 BEODLOHJIHE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPING_BEODLOHJIHE_OFFSET))(this, a1, a2, a3);
		}

	};
}
