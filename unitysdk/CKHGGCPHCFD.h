#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNpcPatrolStatus.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BACCOPOCMPC;
class FOOIINCDBFA;
class GELIALJDFBL;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdvNPCPatrol; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CKHGGCPHCFD_ALGKKKDLJCF_OFFSET UNITYSDK_OFFSET(0xD75D4B0)
#define CKHGGCPHCFD_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0xD75C7C0)
#define CKHGGCPHCFD_CHIIICDIEEK_OFFSET UNITYSDK_OFFSET(0xD75C700)
#define CKHGGCPHCFD_CJBDFBCJNMM_OFFSET UNITYSDK_OFFSET(0xD75D6B0)
#define CKHGGCPHCFD_CTOR_OFFSET UNITYSDK_OFFSET(0xD75BB30)
#define CKHGGCPHCFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD75C310)
#define CKHGGCPHCFD_GFFGDKHEJLM_OFFSET UNITYSDK_OFFSET(0xD75DD60)
#define CKHGGCPHCFD_HOLMIOCLBIF_OFFSET UNITYSDK_OFFSET(0xD75D3E0)
#define CKHGGCPHCFD_IJCCBFLAOHM_OFFSET UNITYSDK_OFFSET(0xD75D520)
#define CKHGGCPHCFD_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xD75C5D0)
#define CKHGGCPHCFD_LHAODCIJGIF_OFFSET UNITYSDK_OFFSET(0xD75CF70)
#define CKHGGCPHCFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD75CB40)
#define CKHGGCPHCFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD75CBF0)
#define CKHGGCPHCFD_PJHJADDPLDM_OFFSET UNITYSDK_OFFSET(0xD75D630)
#define CKHGGCPHCFD_TICK_OFFSET UNITYSDK_OFFSET(0xD75DCF0)

inline static constexpr unsigned int CKHGGCPHCFD_TypeDefinitionIndex = 52434;

	class CKHGGCPHCFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNPCPatrol* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::FOOIINCDBFA* DIICJHOADFP; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GELIALJDFBL*>* OJPIGDMOGPN; // 0x38
		::GELIALJDFBL* JLBEOOBDBLB; // 0x40
		::OLMLKNCEDKN* IEJKMJCAJDF; // 0x48
		::BACCOPOCMPC* NILDKJKBHHG; // 0x50
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x58
		::RPG::GameCore::AdvNpcPatrolStatus OOLOHGCPNCO; // 0x60
		::System::Single KCOJIMNEECL; // 0x64
		::System::Single CCIEKNJANFE; // 0x68
		::UnityEngine::Vector3 NLINJIGDPED; // 0x6C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCPatrol* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCPatrol*))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_JLKJIHLELND_OFFSET))(this);
		}

		::System::Boolean CHIIICDIEEK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_CHIIICDIEEK_OFFSET))(this);
		}

		::System::Void CGJDDLLDLMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_CGJDDLLDLMO_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LHAODCIJGIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_LHAODCIJGIF_OFFSET))(this);
		}

		::System::Void PJHJADDPLDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_PJHJADDPLDM_OFFSET))(this);
		}

		::System::Void CJBDFBCJNMM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_CJBDFBCJNMM_OFFSET))(this, a1);
		}

		::System::Void IJCCBFLAOHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_IJCCBFLAOHM_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_TICK_OFFSET))(this, a1);
		}

		::System::Void GFFGDKHEJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_GFFGDKHEJLM_OFFSET))(this);
		}

		::System::Void ALGKKKDLJCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_ALGKKKDLJCF_OFFSET))(this);
		}

		::GELIALJDFBL* HOLMIOCLBIF()
		{
			return ((::GELIALJDFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKHGGCPHCFD_HOLMIOCLBIF_OFFSET))(this);
		}

	};
