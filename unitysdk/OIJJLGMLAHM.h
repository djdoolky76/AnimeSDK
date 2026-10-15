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

#define OIJJLGMLAHM_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0xBE96E30)
#define OIJJLGMLAHM_CJBDFBCJNMM_OFFSET UNITYSDK_OFFSET(0xBE97BA0)
#define OIJJLGMLAHM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE964E0)
#define OIJJLGMLAHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE96A40)
#define OIJJLGMLAHM_GFFGDKHEJLM_OFFSET UNITYSDK_OFFSET(0xBE98260)
#define OIJJLGMLAHM_HOLMIOCLBIF_OFFSET UNITYSDK_OFFSET(0xBE978B0)
#define OIJJLGMLAHM_IJCCBFLAOHM_OFFSET UNITYSDK_OFFSET(0xBE97A10)
#define OIJJLGMLAHM_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xBE96D00)
#define OIJJLGMLAHM_LHAODCIJGIF_OFFSET UNITYSDK_OFFSET(0xBE97440)
#define OIJJLGMLAHM_LJDIFEEKKEE_OFFSET UNITYSDK_OFFSET(0xBE97980)
#define OIJJLGMLAHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE97010)
#define OIJJLGMLAHM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE970C0)
#define OIJJLGMLAHM_PJHJADDPLDM_OFFSET UNITYSDK_OFFSET(0xBE97B30)
#define OIJJLGMLAHM_TICK_OFFSET UNITYSDK_OFFSET(0xBE981F0)

inline static constexpr unsigned int OIJJLGMLAHM_TypeDefinitionIndex = 52454;

	class OIJJLGMLAHM : public ::GELIALJDFBL
	{
	public:
		::FOOIINCDBFA* DIICJHOADFP; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::GELIALJDFBL* JLBEOOBDBLB; // 0x28
		::OLMLKNCEDKN* IEJKMJCAJDF; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GELIALJDFBL*>* OJPIGDMOGPN; // 0x38
		::RPG::GameCore::AdvNpcMoveAlongPath* IGHAHBNLIJA; // 0x40
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x48
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
