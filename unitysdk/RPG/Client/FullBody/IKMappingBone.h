#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FullBody/IKMapping.h"
namespace RPG::Client::FullBody { class IKMapping_BoneMap; }
namespace RPG::Client::FullBody { class IKSolver; }
namespace RPG::Client::FullBody { class IKSolverFullBody; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0xD077B00)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CFEMBBNLLDC_OFFSET UNITYSDK_OFFSET(0xD077C80)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xD0779C0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CTOR_OFFSET UNITYSDK_OFFSET(0xD077970)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KKANJACCOGM_OFFSET UNITYSDK_OFFSET(0xD077BE0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0xD0778D0)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KPKDAIGMCHM_OFFSET UNITYSDK_OFFSET(0xD077A60)
#define RPG_CLIENT_FULLBODY_IKMAPPINGBONE_LLNAPPLEBEL_OFFSET UNITYSDK_OFFSET(0xD077A10)

namespace RPG::Client::FullBody
{
	class IKMappingBone : public ::RPG::Client::FullBody::IKMapping
	{
	public:
		::UnityEngine::Transform* bone; // 0x10
		::System::Single maintainRotationWeight; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::FullBody::IKMapping_BoneMap* boneMap; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean KKKIONIDKFA(::RPG::Client::FullBody::IKSolver* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FullBody::IKSolver*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KKKIONIDKFA_OFFSET))(this, a1, a2);
		}

		::System::Void LLNAPPLEBEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_LLNAPPLEBEL_OFFSET))(this);
		}

		::System::Void KPKDAIGMCHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KPKDAIGMCHM_OFFSET))(this);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::IKSolverFullBody* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::IKSolverFullBody*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void KKANJACCOGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_KKANJACCOGM_OFFSET))(this);
		}

		::System::Void CFEMBBNLLDC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_IKMAPPINGBONE_CFEMBBNLLDC_OFFSET))(this, a1);
		}

	};
}
