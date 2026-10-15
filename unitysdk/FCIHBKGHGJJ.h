#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/AdvNpcPatrolStatus.h"
#include "unitysdk/RPG/GameCore/OfficerLineupPatrolStatus.h"
#include "unitysdk/RPG/GameCore/SoldierLineupPatrolStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class GELIALJDFBL;
class GHGDNILKGLI;
class KNKPLOGICFO;
class MKENMOHJNCP;
class OLMLKNCEDKN;
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class AISlaveConfig; }
namespace RPG::GameCore { class AdvNPCOfficerLineupPatrol; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCIHBKGHGJJ_ABFLJFAAMHJ_OFFSET UNITYSDK_OFFSET(0x156BFF10)
#define FCIHBKGHGJJ_AHDMJMBENGK_OFFSET UNITYSDK_OFFSET(0x156C1CC0)
#define FCIHBKGHGJJ_ALGKKKDLJCF_OFFSET UNITYSDK_OFFSET(0x156C13A0)
#define FCIHBKGHGJJ_BFFLNFPDMGG_OFFSET UNITYSDK_OFFSET(0x156BFFA0)
#define FCIHBKGHGJJ_CAAFDCBOEFL_OFFSET UNITYSDK_OFFSET(0x156BFDF0)
#define FCIHBKGHGJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x156C2050)
#define FCIHBKGHGJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156BE080)
#define FCIHBKGHGJJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156BE4E0)
#define FCIHBKGHGJJ_DKDOIMGLPPH_OFFSET UNITYSDK_OFFSET(0x156C0B20)
#define FCIHBKGHGJJ_EGELDGCNDND_OFFSET UNITYSDK_OFFSET(0x156BFA20)
#define FCIHBKGHGJJ_FGDBFMECDNO_OFFSET UNITYSDK_OFFSET(0x156BFA90)
#define FCIHBKGHGJJ_GBNNLIMBGIK_OFFSET UNITYSDK_OFFSET(0x156C0240)
#define FCIHBKGHGJJ_GKHFIJHGFGD_OFFSET UNITYSDK_OFFSET(0x156BFC20)
#define FCIHBKGHGJJ_HBHCKEGINEN_OFFSET UNITYSDK_OFFSET(0x156C1E80)
#define FCIHBKGHGJJ_IGENLOHIEOP_OFFSET UNITYSDK_OFFSET(0x156C1A30)
#define FCIHBKGHGJJ_IHPMIDLMPDN_OFFSET UNITYSDK_OFFSET(0x156BEA60)
#define FCIHBKGHGJJ_JEPCGDECHEC_OFFSET UNITYSDK_OFFSET(0x156C1B80)
#define FCIHBKGHGJJ_JGILCKKKOJO_OFFSET UNITYSDK_OFFSET(0x156C1070)
#define FCIHBKGHGJJ_KNEIOOBNENB_OFFSET UNITYSDK_OFFSET(0x156C16F0)
#define FCIHBKGHGJJ_KOAMALIDJNH_OFFSET UNITYSDK_OFFSET(0x156BEFF0)
#define FCIHBKGHGJJ_NFCMBBFGJGO_OFFSET UNITYSDK_OFFSET(0x156C05E0)
#define FCIHBKGHGJJ_ODHBJIKLNMB_OFFSET UNITYSDK_OFFSET(0x156BFFF0)
#define FCIHBKGHGJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156BE6C0)
#define FCIHBKGHGJJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156BE8B0)
#define FCIHBKGHGJJ_PGNIAKICLLH_OFFSET UNITYSDK_OFFSET(0x156C1F70)
#define FCIHBKGHGJJ_POBDIHFFIJE_OFFSET UNITYSDK_OFFSET(0x156C16A0)
#define FCIHBKGHGJJ_POJEMNPNDGA_OFFSET UNITYSDK_OFFSET(0x156C04F0)
#define FCIHBKGHGJJ_POPIGLMGGNP_OFFSET UNITYSDK_OFFSET(0x156BF980)
#define FCIHBKGHGJJ_TICK_OFFSET UNITYSDK_OFFSET(0x156BEB50)
#define FCIHBKGHGJJ__ENTERPATROL_B__16_0_OFFSET UNITYSDK_OFFSET(0x156C2060)
#define FCIHBKGHGJJ__FACETOTARGETPOSITION_B__22_0_OFFSET UNITYSDK_OFFSET(0x156C2070)

	class FCIHBKGHGJJ : public ::GELIALJDFBL
	{
	public:
		::OLMLKNCEDKN* IEJKMJCAJDF; // 0x18
		::KNKPLOGICFO* PHJEGAHCJIK; // 0x20
		::FOOIINCDBFA* EIJAMKAKADD; // 0x28
		::GELIALJDFBL* JLBEOOBDBLB; // 0x30
		::RPG::GameCore::NPCComponent* ACMDKOBBDNJ; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::System::Collections::Generic::List_1<::GHGDNILKGLI*>* BHPPNMIPCHI; // 0x48
		::RPG::Client::MapNpcDef* KKKADHHBMLD; // 0x50
		::RPG::GameCore::AdvNPCOfficerLineupPatrol* IGHAHBNLIJA; // 0x58
		::RPG::GameCore::AdventureCharacterController* EEMOFHKBEBO; // 0x60
		::System::Collections::Generic::Dictionary_2<::MKENMOHJNCP*, ::RPG::GameCore::SoldierLineupPatrolStatus>* PNKLLOGFIGN; // 0x68
		::System::Collections::Generic::List_1<::MKENMOHJNCP*>* PAEJFJNAIND; // 0x70
		::UnityEngine::Vector3 NLINJIGDPED; // 0x78
		::System::UInt32 GNLAAHDCIAB; // 0x84
		::System::Single FGNLGFKJLNC; // 0x88
		::System::Int32 EOANEAHGAGP; // 0x8C
		::RPG::GameCore::AdvNpcPatrolStatus OOLOHGCPNCO; // 0x90
		::System::Boolean HHBGOBMFMML; // 0x94
		::System::Byte _padding0[0x3];
		::RPG::GameCore::OfficerLineupPatrolStatus CPPNFCBEJLK; // 0x98
		static ::System::Single* StaticGet_IHHGJPECJDL()
		{
			return (::System::Single*)UnitySDK::FromName("", "FCIHBKGHGJJ")->GetStaticField(0x14560);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNPCOfficerLineupPatrol* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNPCOfficerLineupPatrol*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IHPMIDLMPDN(::MKENMOHJNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKENMOHJNCP*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_IHPMIDLMPDN_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_TICK_OFFSET))(this, a1);
		}

		::System::Void CAAFDCBOEFL(::MKENMOHJNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKENMOHJNCP*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_CAAFDCBOEFL_OFFSET))(this, a1);
		}

		::System::Void ABFLJFAAMHJ(::MKENMOHJNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKENMOHJNCP*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_ABFLJFAAMHJ_OFFSET))(this, a1);
		}

		::System::Void BFFLNFPDMGG(::MKENMOHJNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKENMOHJNCP*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_BFFLNFPDMGG_OFFSET))(this, a1);
		}

		::System::Boolean ODHBJIKLNMB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_ODHBJIKLNMB_OFFSET))(this, a1);
		}

		::System::Void KOAMALIDJNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_KOAMALIDJNH_OFFSET))(this);
		}

		::System::Void POJEMNPNDGA(::RPG::GameCore::AISlaveConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AISlaveConfig*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_POJEMNPNDGA_OFFSET))(this, a1);
		}

		::System::Void POPIGLMGGNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_POPIGLMGGNP_OFFSET))(this);
		}

		::System::Boolean FGDBFMECDNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_FGDBFMECDNO_OFFSET))(this);
		}

		::System::Void GKHFIJHGFGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_GKHFIJHGFGD_OFFSET))(this);
		}

		::System::Void EGELDGCNDND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_EGELDGCNDND_OFFSET))(this);
		}

		::System::Void JGILCKKKOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_JGILCKKKOJO_OFFSET))(this);
		}

		::System::Void POBDIHFFIJE(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_POBDIHFFIJE_OFFSET))(this, a1);
		}

		::System::Void ALGKKKDLJCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_ALGKKKDLJCF_OFFSET))(this);
		}

		::System::Void NFCMBBFGJGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_NFCMBBFGJGO_OFFSET))(this);
		}

		::System::Void DKDOIMGLPPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_DKDOIMGLPPH_OFFSET))(this);
		}

		::System::Void JEPCGDECHEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_JEPCGDECHEC_OFFSET))(this, a1);
		}

		::System::Void GBNNLIMBGIK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_GBNNLIMBGIK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AHDMJMBENGK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_AHDMJMBENGK_OFFSET))(this);
		}

		::System::Void HBHCKEGINEN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_HBHCKEGINEN_OFFSET))(this, a1, a2);
		}

		::System::Boolean PGNIAKICLLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_PGNIAKICLLH_OFFSET))(this);
		}

		::System::Void KNEIOOBNENB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_KNEIOOBNENB_OFFSET))(this);
		}

		::System::Void IGENLOHIEOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ_IGENLOHIEOP_OFFSET))(this);
		}

		::System::Void _EnterPatrol_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ__ENTERPATROL_B__16_0_OFFSET))(this);
		}

		::System::Void _FaceToTargetPosition_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCIHBKGHGJJ__FACETOTARGETPOSITION_B__22_0_OFFSET))(this);
		}

	};
