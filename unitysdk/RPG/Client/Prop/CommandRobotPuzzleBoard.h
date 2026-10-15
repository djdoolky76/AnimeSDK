#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleDirection.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MHADKAEIHOO;
class OGJCOKNPCMD;
namespace RPG::Client::Billboard { class BillboardNotifyParam; }
namespace RPG::Client::Prop { class CommandRobotPuzzleBlock; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_AANNFOHJKDF_OFFSET UNITYSDK_OFFSET(0xDC81DE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ACMELCEMFED_OFFSET UNITYSDK_OFFSET(0xDC81320)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BCCKBIANFFG_OFFSET UNITYSDK_OFFSET(0xDC81E60)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xDC81A80)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BHEIANKOOPN_OFFSET UNITYSDK_OFFSET(0xDC800E0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC82510)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CEIEPDGKNAL_OFFSET UNITYSDK_OFFSET(0xDC81500)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CHOLLGGLIAJ_OFFSET UNITYSDK_OFFSET(0xDC80E80)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC82460)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DBEBHGNLOHD_OFFSET UNITYSDK_OFFSET(0xDC80620)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DCNKEALDFGL_OFFSET UNITYSDK_OFFSET(0xDC81050)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC7EEC0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DMCLCJHBFLN_OFFSET UNITYSDK_OFFSET(0xDC80390)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_FACLDDOFHFL_OFFSET UNITYSDK_OFFSET(0xDC7F140)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_FMPHCFJIFLL_OFFSET UNITYSDK_OFFSET(0xDC7FCE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET UNITYSDK_OFFSET(0xDC7FD70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET UNITYSDK_OFFSET(0xDC80E00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GIAJLDNFINK_OFFSET UNITYSDK_OFFSET(0xDC80F20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_HCDCJCAJOEB_OFFSET UNITYSDK_OFFSET(0xDC82230)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_HKDNHLPLDDG_OFFSET UNITYSDK_OFFSET(0xDC811F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_IFNIBAMMAPN_OFFSET UNITYSDK_OFFSET(0xDC81990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC7F530)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xDC7F640)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_IPCODDIGGMK_OFFSET UNITYSDK_OFFSET(0xDC80320)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC80780)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_LKFMNMEDACM_OFFSET UNITYSDK_OFFSET(0xDC81680)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MBOJPPPILPI_OFFSET UNITYSDK_OFFSET(0xDC806D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MHJDHIBPPPO_OFFSET UNITYSDK_OFFSET(0xDC80C00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0xDC81140)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MNMIMNBMCKN_OFFSET UNITYSDK_OFFSET(0xDC81FE0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NDCJMPMNJCI_OFFSET UNITYSDK_OFFSET(0xDC803F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NDNNBDKHCKF_OFFSET UNITYSDK_OFFSET(0xDC7F060)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NGOJHGGGADO_OFFSET UNITYSDK_OFFSET(0xDC807D0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NHFHBPCEMEC_OFFSET UNITYSDK_OFFSET(0xDC81B00)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ODJPJPIDEIJ_OFFSET UNITYSDK_OFFSET(0xDC814A0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_OJBCHNAKOHK_OFFSET UNITYSDK_OFFSET(0xDC82290)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_PGCBCKNNCGH_OFFSET UNITYSDK_OFFSET(0xDC7F2F0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC80820)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC7F990)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC804F0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBoard_TypeDefinitionIndex = 78511;

	class CommandRobotPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		::System::UInt32 MaxStep; // 0x68
		::System::Single BlockTime; // 0x6C
		::System::UInt32 ABMAMHHMALG; // 0x70
		::System::UInt32 PHAJLAGCBOH; // 0x74
		::System::UInt32 HGCFDCGANPD; // 0x78
		::System::UInt32 CEEOKONELAO; // 0x7C
		::System::UInt32 GJDAAIMKGOK; // 0x80
		::System::UInt32 ACAPDBKONKO; // 0x84
		::System::UInt32 FBFHGOPCHDC; // 0x88
		::System::UInt32 NFKAMBKMENH; // 0x8C
		::System::UInt32 OMPJIJIPOPO; // 0x90
		::System::UInt32 NPCGroupID; // 0x94
		::System::UInt32 NPCEntityID; // 0x98
		::System::Int32 BFGNCNDCJKK; // 0x9C
		::System::Int32 FPICKBDAHNI; // 0xA0
		::System::UInt32 NJBOGFJLPNN; // 0xA4
		::System::Collections::Generic::List_1<::RPG::Client::Prop::CommandRobotPuzzleDirection>* CILKCKNHEJP; // 0xA8
		::Il2CppArray<::RPG::Client::Prop::CommandRobotPuzzleBlock*>* GEKBDLEDANL; // 0xB0
		::OGJCOKNPCMD* PLNGIGDCFNC; // 0xB8
		::System::UInt32 EOMLMNOEKDJ; // 0xC0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* AJCNLMCKPKB; // 0xC8
		::System::Int32 ACLCKIEPKGB; // 0xD0
		::UnityEngine::Vector2Int IDOGFMIPDBE; // 0xD4
		::UnityEngine::Quaternion NCIDADGFLFK; // 0xDC
		::RPG::Client::Prop::CommandRobotPuzzleState JNBOICMADPC; // 0xEC
		::UnityEngine::Vector2Int AMKNNEAPDKD; // 0xF0
		::MHADKAEIHOO* JDDMAJMCCAO; // 0xF8
		::System::Boolean PIPLLENMLIM; // 0x100
		::System::Byte _padding1[0x7];
		::UnityEngine::Coroutine* BFNINLGKEHN; // 0x108
		::UnityEngine::Coroutine* ADEANNBIOLP; // 0x110
		::UnityEngine::Vector3 KDPELGPOLNC; // 0x118
		::System::Byte _padding2[0x4];
		::RPG::Client::Billboard::BillboardNotifyParam* BOPNPNJENII; // 0x128
		::RPG::GameCore::PlayNPCBubbleTalk* AKHJFPLFOJB; // 0x130
		::System::Boolean NALJDAIDEOC; // 0x138
		::System::Boolean FENKBFBBODD; // 0x139
		::System::Byte _padding3[0x2];
		::System::UInt32 LOKEPPMGHOH; // 0x13C
		::UnityEngine::GameObject* JEMMGPBEOPJ; // 0x140
		static ::System::String** StaticGet_GameKey()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBoard")->GetStaticField(0x3CFE0);
		}

		static ::System::UInt32* StaticGet_EEHBFLJBDFB()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client.Prop", "CommandRobotPuzzleBoard")->GetStaticField(0xC340);
		}

		// static const ::System::String* MJJGEDHINAC; // 0x0
		// static const ::System::Object HOJJGKCJMDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_INIT_OFFSET))(this);
		}

		::System::Void GetNpc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETNPC_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::UInt32 GetUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GETUNIQUEID_OFFSET))(this);
		}

		::System::Void BHEIANKOOPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BHEIANKOOPN_OFFSET))(this);
		}

		::System::Void PGCBCKNNCGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_PGCBCKNNCGH_OFFSET))(this);
		}

		::System::Void IPCODDIGGMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_IPCODDIGGMK_OFFSET))(this, a1);
		}

		::System::Void NGOJHGGGADO(::RPG::Client::Prop::CommandRobotPuzzleState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CommandRobotPuzzleState))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NGOJHGGGADO_OFFSET))(this, a1);
		}

		::System::Void CHOLLGGLIAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CHOLLGGLIAJ_OFFSET))(this, a1);
		}

		::System::Void GIAJLDNFINK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_GIAJLDNFINK_OFFSET))(this, a1);
		}

		::System::Void DCNKEALDFGL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DCNKEALDFGL_OFFSET))(this, a1);
		}

		::System::Void MHLAJOMDJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MHLAJOMDJOG_OFFSET))(this);
		}

		::System::Void FACLDDOFHFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_FACLDDOFHFL_OFFSET))(this);
		}

		::System::Void CEIEPDGKNAL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_CEIEPDGKNAL_OFFSET))(this);
		}

		::System::Void ACMELCEMFED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ACMELCEMFED_OFFSET))(this);
		}

		::System::Void LKFMNMEDACM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_LKFMNMEDACM_OFFSET))(this);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void MBOJPPPILPI(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MBOJPPPILPI_OFFSET))(this, a1);
		}

		::System::Void DBEBHGNLOHD(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DBEBHGNLOHD_OFFSET))(this, a1);
		}

		::System::Void IFNIBAMMAPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_IFNIBAMMAPN_OFFSET))(this);
		}

		::System::Void AANNFOHJKDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_AANNFOHJKDF_OFFSET))(this, a1);
		}

		::System::Void BCCKBIANFFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_BCCKBIANFFG_OFFSET))(this, a1);
		}

		::System::Void MNMIMNBMCKN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MNMIMNBMCKN_OFFSET))(this, a1);
		}

		::System::Void HCDCJCAJOEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_HCDCJCAJOEB_OFFSET))(this);
		}

		::System::Void FMPHCFJIFLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_FMPHCFJIFLL_OFFSET))(this);
		}

		::System::Void DMCLCJHBFLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_DMCLCJHBFLN_OFFSET))(this);
		}

		::System::Void ODJPJPIDEIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_ODJPJPIDEIJ_OFFSET))(this);
		}

		::System::Void NHFHBPCEMEC(::System::UInt32 a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NHFHBPCEMEC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Billboard::BillboardNotifyParam* OJBCHNAKOHK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::Billboard::BillboardNotifyParam*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_OJBCHNAKOHK_OFFSET))(this, a1);
		}

		::System::Void NDCJMPMNJCI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NDCJMPMNJCI_OFFSET))(this, a1);
		}

		::System::Void MHJDHIBPPPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_MHJDHIBPPPO_OFFSET))(this);
		}

		::System::Void HKDNHLPLDDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_HKDNHLPLDDG_OFFSET))(this);
		}

		::System::Void NDNNBDKHCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBOARD_NDNNBDKHCKF_OFFSET))(this);
		}

	};
}
