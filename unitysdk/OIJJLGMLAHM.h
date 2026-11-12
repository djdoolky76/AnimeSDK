#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNpcMoveAlongPathStatus.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class GELIALJDFBL;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdvNpcMoveAlongPath; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIJJLGMLAHM_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0xC794630)
#define OIJJLGMLAHM_CJBDFBCJNMM_OFFSET UNITYSDK_OFFSET(0xC7951E0)
#define OIJJLGMLAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xC793CE0)
#define OIJJLGMLAHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC794240)
#define OIJJLGMLAHM_GFFGDKHEJLM_OFFSET UNITYSDK_OFFSET(0xC7956F0)
#define OIJJLGMLAHM_HOLMIOCLBIF_OFFSET UNITYSDK_OFFSET(0xC794F50)
#define OIJJLGMLAHM_IJCCBFLAOHM_OFFSET UNITYSDK_OFFSET(0xC7950B0)
#define OIJJLGMLAHM_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xC794500)
#define OIJJLGMLAHM_LHAODCIJGIF_OFFSET UNITYSDK_OFFSET(0xC794BB0)
#define OIJJLGMLAHM_LJDIFEEKKEE_OFFSET UNITYSDK_OFFSET(0xC795020)
#define OIJJLGMLAHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC794810)
#define OIJJLGMLAHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC7948C0)
#define OIJJLGMLAHM_PJHJADDPLDM_OFFSET UNITYSDK_OFFSET(0xC795170)
#define OIJJLGMLAHM_TICK_OFFSET UNITYSDK_OFFSET(0xC795680)

inline static constexpr unsigned int OIJJLGMLAHM_TypeDefinitionIndex = 53560;

	class OIJJLGMLAHM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNpcMoveAlongPath* IGHAHBNLIJA; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GELIALJDFBL*>* OJPIGDMOGPN; // 0x20
		::GELIALJDFBL* JLBEOOBDBLB; // 0x28
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x30
		::FOOIINCDBFA* DIICJHOADFP; // 0x38
		::OLMLKNCEDKN* IEJKMJCAJDF; // 0x40
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x48
		::System::Single CCIEKNJANFE; // 0x50
		::UnityEngine::Vector3 NLINJIGDPED; // 0x54
		::RPG::GameCore::AdvNpcMoveAlongPathStatus OOLOHGCPNCO; // 0x60
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcMoveAlongPath* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcMoveAlongPath*))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_JLKJIHLELND_OFFSET))(this);
		}

		::System::Void CGJDDLLDLMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_CGJDDLLDLMO_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LHAODCIJGIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_LHAODCIJGIF_OFFSET))(this);
		}

		::System::Void PJHJADDPLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_PJHJADDPLDM_OFFSET))(this);
		}

		::System::Void CJBDFBCJNMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_CJBDFBCJNMM_OFFSET))(this, a1);
		}

		::System::Void IJCCBFLAOHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_IJCCBFLAOHM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_TICK_OFFSET))(this, a1);
		}

		::System::Void GFFGDKHEJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_GFFGDKHEJLM_OFFSET))(this);
		}

		::System::Void LJDIFEEKKEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_LJDIFEEKKEE_OFFSET))(this);
		}

		::GELIALJDFBL* HOLMIOCLBIF()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJLGMLAHM_HOLMIOCLBIF_OFFSET))(this);
		}

	};
