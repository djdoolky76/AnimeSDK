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

#define IHKLFDPCFDB_BGGGILCCHPD_OFFSET UNITYSDK_OFFSET(0x16424040)
#define IHKLFDPCFDB_BKDBDKCGHBO_OFFSET UNITYSDK_OFFSET(0x16424140)
#define IHKLFDPCFDB_CGCAALPIDLI_OFFSET UNITYSDK_OFFSET(0x16423C80)
#define IHKLFDPCFDB_CHEHJNCPKEE_OFFSET UNITYSDK_OFFSET(0x16424EE0)
#define IHKLFDPCFDB_CTOR_OFFSET UNITYSDK_OFFSET(0x164235B0)
#define IHKLFDPCFDB_ENMLCJADHNL_OFFSET UNITYSDK_OFFSET(0x16424590)
#define IHKLFDPCFDB_GEHDFGKKFMD_OFFSET UNITYSDK_OFFSET(0x16424E50)
#define IHKLFDPCFDB_GGKDGJLJIAK_OFFSET UNITYSDK_OFFSET(0x16423B30)
#define IHKLFDPCFDB_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x16423AF0)
#define IHKLFDPCFDB_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16423A30)
#define IHKLFDPCFDB_LLNHDJMMLMD_OFFSET UNITYSDK_OFFSET(0x16423EF0)
#define IHKLFDPCFDB_NBAANGFGGAN_OFFSET UNITYSDK_OFFSET(0x164240D0)

inline static constexpr unsigned int IHKLFDPCFDB_TypeDefinitionIndex = 57646;

	class IHKLFDPCFDB : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* JGONNPBHNNI; // 0x10
		::UnityEngine::Animator* JDFCDMAPBFJ; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::FGNNHFLGJBK* COFJDABICGN; // 0x28
		::JBPIHNMIAPO* LDFELCNMFFH; // 0x30
		::System::Boolean BCPELJMCIBB; // 0x38
		::System::Boolean PFMNLFEOAGO; // 0x39
		::System::Boolean INJJGMIGFFD; // 0x3A
		::System::Byte _padding0[0x1];
		::System::Int32 APNGJPMPMOB; // 0x3C
		::System::Single ILGFNDPAIPL; // 0x40
		::UnityEngine::Vector3 DNGJGPHPLEG; // 0x44
		::UnityEngine::Vector3 NAMGGEJCDMP; // 0x50
		::UnityEngine::Vector3 PDJBFBPEHFE; // 0x5C
		::System::Int32 JDKEKGODFLL; // 0x68
		::UnityEngine::Vector3 OGCDCFHCCHA; // 0x6C
		::UnityEngine::Vector3 CEDFLEAIPML; // 0x78
		::System::Single NCOLHAIIGIP; // 0x84
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
