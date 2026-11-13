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

#define CKHGGCPHCFD_ALGKKKDLJCF_OFFSET UNITYSDK_OFFSET(0x1AD3F440)
#define CKHGGCPHCFD_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0x1AD3E8B0)
#define CKHGGCPHCFD_CHIIICDIEEK_OFFSET UNITYSDK_OFFSET(0x1AD3E7F0)
#define CKHGGCPHCFD_CJBDFBCJNMM_OFFSET UNITYSDK_OFFSET(0x1AD3F5E0)
#define CKHGGCPHCFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AD3DC20)
#define CKHGGCPHCFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AD3E400)
#define CKHGGCPHCFD_GFFGDKHEJLM_OFFSET UNITYSDK_OFFSET(0x1AD3FAD0)
#define CKHGGCPHCFD_HOLMIOCLBIF_OFFSET UNITYSDK_OFFSET(0x1AD3F370)
#define CKHGGCPHCFD_IJCCBFLAOHM_OFFSET UNITYSDK_OFFSET(0x1AD3F4B0)
#define CKHGGCPHCFD_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0x1AD3E6C0)
#define CKHGGCPHCFD_LHAODCIJGIF_OFFSET UNITYSDK_OFFSET(0x1AD3EFE0)
#define CKHGGCPHCFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AD3EC40)
#define CKHGGCPHCFD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AD3ECF0)
#define CKHGGCPHCFD_PJHJADDPLDM_OFFSET UNITYSDK_OFFSET(0x1AD3F560)
#define CKHGGCPHCFD_TICK_OFFSET UNITYSDK_OFFSET(0x1AD3FA60)

inline static constexpr unsigned int CKHGGCPHCFD_TypeDefinitionIndex = 53540;

	class CKHGGCPHCFD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::FOOIINCDBFA* DIICJHOADFP; // 0x20
		::GELIALJDFBL* JLBEOOBDBLB; // 0x28
		::RPG::GameCore::AdvNPCPatrol* IGHAHBNLIJA; // 0x30
		::OLMLKNCEDKN* IEJKMJCAJDF; // 0x38
		::RPG::GameCore::TransformComponent* LMCMCFHLJEJ; // 0x40
		::BACCOPOCMPC* NILDKJKBHHG; // 0x48
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GELIALJDFBL*>* OJPIGDMOGPN; // 0x58
		::System::Single CCIEKNJANFE; // 0x60
		::UnityEngine::Vector3 NLINJIGDPED; // 0x64
		::System::Single KCOJIMNEECL; // 0x70
		::RPG::GameCore::AdvNpcPatrolStatus OOLOHGCPNCO; // 0x74
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
