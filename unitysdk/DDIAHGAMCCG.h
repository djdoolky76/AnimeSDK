#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EInflatableFighterSide.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACGKMEPLIBJ;
class DDIAHGAMCCG;
class HLIOELMBHAN;
class MEKHDNHOACK;
class NBFOPBDDALF;
namespace RPG::Client { class InflatableFighterPuzzleBoard; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoInflatableFighter; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }

#define DDIAHGAMCCG_ABDCOKOCDLP_OFFSET UNITYSDK_OFFSET(0xE269C90)
#define DDIAHGAMCCG_AJFNIIOLIIE_OFFSET UNITYSDK_OFFSET(0xE269BE0)
#define DDIAHGAMCCG_BOICKBCFAHE_OFFSET UNITYSDK_OFFSET(0xE268E50)
#define DDIAHGAMCCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xE268230)
#define DDIAHGAMCCG_CTOR_OFFSET UNITYSDK_OFFSET(0xE267AD0)
#define DDIAHGAMCCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE2686D0)
#define DDIAHGAMCCG_DLEDLBLFDGP_OFFSET UNITYSDK_OFFSET(0xE267F20)
#define DDIAHGAMCCG_DNJAGCCADNG_OFFSET UNITYSDK_OFFSET(0xE2681E0)
#define DDIAHGAMCCG_FEOLHJFOKAO_OFFSET UNITYSDK_OFFSET(0xE4DE6E0)
#define DDIAHGAMCCG_GBDINCGOABA_OFFSET UNITYSDK_OFFSET(0xE269980)
#define DDIAHGAMCCG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE267AB0)
#define DDIAHGAMCCG_HMPEMOIADKO_OFFSET UNITYSDK_OFFSET(0xE269EF0)
#define DDIAHGAMCCG_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xE268060)
#define DDIAHGAMCCG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE268820)
#define DDIAHGAMCCG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE269DD0)
#define DDIAHGAMCCG_PGEDNEFADBC_OFFSET UNITYSDK_OFFSET(0xE268F00)
#define DDIAHGAMCCG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xE267AC0)

	class DDIAHGAMCCG : public ::System::Object
	{
	public:
		::ACGKMEPLIBJ* DAELNGNNOBK; // 0x10
		::ACGKMEPLIBJ* NNFBICAOPPE; // 0x18
		::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x20
		::RPG::GameCore::GameEntity* OGLMLEFKHKN; // 0x28
		::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x30
		::RPG::GameCore::GameEntity* IFIADNDCPHH; // 0x38
		::RPG::GameCore::GameEntity* KDAJNFLENID; // 0x40
		::HLIOELMBHAN* GNIKBIOOJGH; // 0x48
		::RPG::Client::MonoInflatableFighter* KGPGMDIPFJN; // 0x50
		::RPG::GameCore::GameEntity* NNPJKEFNOMG; // 0x58
		::NBFOPBDDALF* GMNFMEGKFCK; // 0x60
		::RPG::Client::MonoInflatableFighter* BFGIAGJLMJF; // 0x68
		::MEKHDNHOACK* LGLECMDANCO; // 0x70
		::NBFOPBDDALF* BEFPLOOEKCO; // 0x78
		::System::Collections::Generic::Queue_1<::System::Object*>* OKNIOMJENPK; // 0x80
		::System::Int32 OPKPFOJKAIK; // 0x88
		::System::Int32 HEIKIDKDCJK; // 0x8C
		::RPG::GameCore::StringHash BBAFILGFPJK; // 0x90
		::System::Boolean AGELLGAPADG; // 0x94
		::System::Boolean FPEONIGKCJP; // 0x95
		::System::Boolean NJPHNILEEFH; // 0x96
		::System::Boolean AOBOGIFBNEJ; // 0x97
		::System::Boolean PCHMPNFGDKF; // 0x98
		::System::Byte _padding0[0x3];
		::System::Single COCJDAKNIAP; // 0x9C
		static ::DDIAHGAMCCG** StaticGet__Instance_k__BackingField()
		{
			return (::DDIAHGAMCCG**)UnitySDK::FromName("", "DDIAHGAMCCG")->GetStaticField(0x5CE70);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::InflatableFighterPuzzleBoard* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::Client::InflatableFighterPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::RPG::Client::InflatableFighterPuzzleBoard* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::GameEntity* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::RPG::Client::InflatableFighterPuzzleBoard*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::DDIAHGAMCCG* get_Instance()
		{
			return ((::DDIAHGAMCCG*(*)())((::PBYTE)hIl2Cpp + DDIAHGAMCCG_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::DDIAHGAMCCG* a1)
		{
			return ((::System::Void(*)(::DDIAHGAMCCG*))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void DLEDLBLFDGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_DLEDLBLFDGP_OFFSET))(this);
		}

		::System::Void JFMILGOGGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_JFMILGOGGHP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PGEDNEFADBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_PGEDNEFADBC_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void AJFNIIOLIIE(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_AJFNIIOLIIE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BOICKBCFAHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_BOICKBCFAHE_OFFSET))(this);
		}

		::System::Void HMPEMOIADKO(::UnityEngine::Vector3 a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_HMPEMOIADKO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 GBDINCGOABA(::RPG::Client::MonoInflatableFighter* a1, ::RPG::Client::EInflatableFighterSide a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_GBDINCGOABA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABDCOKOCDLP(::RPG::Client::EInflatableFighterSide a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EInflatableFighterSide, ::System::Boolean))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_ABDCOKOCDLP_OFFSET))(this, a1, a2);
		}

		::System::Void DNJAGCCADNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_DNJAGCCADNG_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FEOLHJFOKAO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDIAHGAMCCG_FEOLHJFOKAO_OFFSET))(this);
		}

	};
