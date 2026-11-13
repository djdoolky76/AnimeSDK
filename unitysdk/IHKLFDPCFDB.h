#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FGNNHFLGJBK;
class JBPIHNMIAPO;
class OEPOKOJHKEL;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }

#define IHKLFDPCFDB_BGGGILCCHPD_OFFSET UNITYSDK_OFFSET(0x193B5E20)
#define IHKLFDPCFDB_BKDBDKCGHBO_OFFSET UNITYSDK_OFFSET(0x193B5F20)
#define IHKLFDPCFDB_CGCAALPIDLI_OFFSET UNITYSDK_OFFSET(0x193B5A60)
#define IHKLFDPCFDB_CHEHJNCPKEE_OFFSET UNITYSDK_OFFSET(0x193B6CB0)
#define IHKLFDPCFDB_CTOR_OFFSET UNITYSDK_OFFSET(0x193B5390)
#define IHKLFDPCFDB_ENMLCJADHNL_OFFSET UNITYSDK_OFFSET(0x193B6360)
#define IHKLFDPCFDB_GEHDFGKKFMD_OFFSET UNITYSDK_OFFSET(0x193B6C20)
#define IHKLFDPCFDB_GGKDGJLJIAK_OFFSET UNITYSDK_OFFSET(0x193B5910)
#define IHKLFDPCFDB_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x193B58D0)
#define IHKLFDPCFDB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x193B5800)
#define IHKLFDPCFDB_LLNHDJMMLMD_OFFSET UNITYSDK_OFFSET(0x193B5CD0)
#define IHKLFDPCFDB_NBAANGFGGAN_OFFSET UNITYSDK_OFFSET(0x193B5EB0)

inline static constexpr unsigned int IHKLFDPCFDB_TypeDefinitionIndex = 58875;

	class IHKLFDPCFDB : public ::System::Object
	{
	public:
		::JBPIHNMIAPO* LDFELCNMFFH; // 0x10
		::FGNNHFLGJBK* COFJDABICGN; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::UnityEngine::AnimationCurve* JGONNPBHNNI; // 0x28
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x30
		::System::Int32 APNGJPMPMOB; // 0x38
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x3C
		::System::Int32 JDKEKGODFLL; // 0x48
		::UnityEngine::Vector3 CEDFLEAIPML; // 0x4C
		::System::Boolean BCPELJMCIBB; // 0x58
		::System::Boolean INJJGMIGFFD; // 0x59
		::System::Boolean PFMNLFEOAGO; // 0x5A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 DNGJGPHPLEG; // 0x5C
		::UnityEngine::Vector3 OGCDCFHCCHA; // 0x68
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x74
		::System::Single NCOLHAIIGIP; // 0x80
		::System::Single ILGFNDPAIPL; // 0x84
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::TaskContext* a3, ::OEPOKOJHKEL* a4, ::RPG::GameCore::GameEntity* a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::TaskContext*, ::OEPOKOJHKEL*, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GGKDGJLJIAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_GGKDGJLJIAK_OFFSET))(this);
		}

		::System::Void CGCAALPIDLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_CGCAALPIDLI_OFFSET))(this);
		}

		::System::Void BGGGILCCHPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_BGGGILCCHPD_OFFSET))(this);
		}

		::System::Void LLNHDJMMLMD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_LLNHDJMMLMD_OFFSET))(this, a1);
		}

		::System::Void NBAANGFGGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_NBAANGFGGAN_OFFSET))(this);
		}

		::FGNNHFLGJBK* ENMLCJADHNL()
		{
			return ((::FGNNHFLGJBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_ENMLCJADHNL_OFFSET))(this);
		}

		::System::Void BKDBDKCGHBO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_BKDBDKCGHBO_OFFSET))(this, a1);
		}

		::System::Single GEHDFGKKFMD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_GEHDFGKKFMD_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 CHEHJNCPKEE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IHKLFDPCFDB_CHEHJNCPKEE_OFFSET))(this);
		}

	};
