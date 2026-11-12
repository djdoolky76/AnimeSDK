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

#define DDIAHGAMCCG_ABDCOKOCDLP_OFFSET UNITYSDK_OFFSET(0xEE25140)
#define DDIAHGAMCCG_AJFNIIOLIIE_OFFSET UNITYSDK_OFFSET(0xEE25090)
#define DDIAHGAMCCG_BOICKBCFAHE_OFFSET UNITYSDK_OFFSET(0xEE24300)
#define DDIAHGAMCCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0xEE23700)
#define DDIAHGAMCCG_CTOR_OFFSET UNITYSDK_OFFSET(0xEE22FF0)
#define DDIAHGAMCCG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEE23B70)
#define DDIAHGAMCCG_DLEDLBLFDGP_OFFSET UNITYSDK_OFFSET(0xEE23420)
#define DDIAHGAMCCG_DNJAGCCADNG_OFFSET UNITYSDK_OFFSET(0xEE236B0)
#define DDIAHGAMCCG_FEOLHJFOKAO_OFFSET UNITYSDK_OFFSET(0xEE25590)
#define DDIAHGAMCCG_GBDINCGOABA_OFFSET UNITYSDK_OFFSET(0xEE24E30)
#define DDIAHGAMCCG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEE22FD0)
#define DDIAHGAMCCG_HMPEMOIADKO_OFFSET UNITYSDK_OFFSET(0xEE253D0)
#define DDIAHGAMCCG_JFMILGOGGHP_OFFSET UNITYSDK_OFFSET(0xEE23530)
#define DDIAHGAMCCG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEE23CC0)
#define DDIAHGAMCCG_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xEE25280)
#define DDIAHGAMCCG_PGEDNEFADBC_OFFSET UNITYSDK_OFFSET(0xEE243B0)
#define DDIAHGAMCCG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xEE22FE0)

inline static constexpr unsigned int DDIAHGAMCCG_TypeDefinitionIndex = 70622;

	class DDIAHGAMCCG : public ::System::Object
	{
	public:
		::NBFOPBDDALF* BEFPLOOEKCO; // 0x10
		::HLIOELMBHAN* GNIKBIOOJGH; // 0x18
		::RPG::GameCore::GameEntity* KDAJNFLENID; // 0x20
		::RPG::Client::MonoEffectManager* KMLMEHCDDMA; // 0x28
		::RPG::GameCore::GameEntity* NNPJKEFNOMG; // 0x30
		::System::Collections::Generic::Queue_1<::System::Object*>* OKNIOMJENPK; // 0x38
		::ACGKMEPLIBJ* DAELNGNNOBK; // 0x40
		::RPG::Client::MonoInflatableFighter* KGPGMDIPFJN; // 0x48
		::RPG::GameCore::GameEntity* OGLMLEFKHKN; // 0x50
		::NBFOPBDDALF* GMNFMEGKFCK; // 0x58
		::MEKHDNHOACK* LGLECMDANCO; // 0x60
		::RPG::GameCore::GameEntity* IFIADNDCPHH; // 0x68
		::RPG::Client::MonoInflatableFighter* BFGIAGJLMJF; // 0x70
		::RPG::Client::InflatableFighterPuzzleBoard* CCAHGFIABKE; // 0x78
		::ACGKMEPLIBJ* NNFBICAOPPE; // 0x80
		::System::Boolean PCHMPNFGDKF; // 0x88
		::System::Boolean AGELLGAPADG; // 0x89
		::System::Boolean AOBOGIFBNEJ; // 0x8A
		::System::Boolean FPEONIGKCJP; // 0x8B
		::System::Boolean NJPHNILEEFH; // 0x8C
		::System::Byte _padding0[0x3];
		::System::Int32 HEIKIDKDCJK; // 0x90
		::System::Single COCJDAKNIAP; // 0x94
		::RPG::GameCore::StringHash BBAFILGFPJK; // 0x98
		::System::Int32 OPKPFOJKAIK; // 0x9C
		static ::DDIAHGAMCCG** StaticGet__Instance_k__BackingField()
		{
			return (::DDIAHGAMCCG**)UnitySDK::FromName("", "DDIAHGAMCCG")->GetStaticField(0x46B70);
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
