#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleBase.h"
#include "unitysdk/RPG/Client/Prop/BlockPuzzleLogicFourDirection.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GMPEPADNIKE;
class MCAIEGEMCHA;
namespace RPG::Client::Prop { class SnowballPuzzleBlockItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ANMCPKBGNFI_OFFSET UNITYSDK_OFFSET(0xDDADED0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDAE610)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDACF60)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_EFKAKDMGBPG_OFFSET UNITYSDK_OFFSET(0xDDAE070)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_FOMMNMFAGNG_OFFSET UNITYSDK_OFFSET(0xDDADEE0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDAD000)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INIT_OFFSET UNITYSDK_OFFSET(0xDDAD1E0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDDAD780)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_KGAFJKFJIMF_OFFSET UNITYSDK_OFFSET(0xDDAE0E0)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_NJLJMFEHKAI_OFFSET UNITYSDK_OFFSET(0xDDAE430)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDAD670)
#define RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDAD7D0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int SnowballPuzzleBoard_TypeDefinitionIndex = 78865;

	class SnowballPuzzleBoard : public ::RPG::Client::Prop::BlockPuzzleBase
	{
	public:
		::System::String* PushSnowballTextID; // 0x68
		::System::Int32 MaxSnowballSize; // 0x70
		::System::Single SnowballMoveDuration; // 0x74
		::MCAIEGEMCHA* PLNGIGDCFNC; // 0x78
		::System::Object* NPGCHMPOLDP; // 0x80
		::Il2CppArray<::RPG::Client::Prop::SnowballPuzzleBlockItem*>* CDDGLMLDCBI; // 0x88
		::GMPEPADNIKE* CPJCBKAIGPM; // 0x90
		::UnityEngine::Vector2Int IOOAHOBADCL; // 0x98
		::RPG::Client::Prop::BlockPuzzleLogicFourDirection AMLIEEFCOFC; // 0xA0
		::System::Int32 DOKCCOIBCKH; // 0xA4
		::UnityEngine::Vector2Int FBNHEFELKCI; // 0xA8
		::System::Single PEBDLEECBEE; // 0xB0
		::UnityEngine::Vector3 OIMMGKNHKOA; // 0xB4
		::UnityEngine::Vector3 FCAOOKFEOHC; // 0xC0
		::System::Boolean JDPGFIBLFOP; // 0xCC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_INIT_OFFSET))(this);
		}

		::System::Boolean EFKAKDMGBPG(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_EFKAKDMGBPG_OFFSET))(this, a1);
		}

		::System::Void KGAFJKFJIMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_KGAFJKFJIMF_OFFSET))(this);
		}

		::System::Void FOMMNMFAGNG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_FOMMNMFAGNG_OFFSET))(this, a1);
		}

		::System::Void NJLJMFEHKAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_NJLJMFEHKAI_OFFSET))(this);
		}

		::System::Boolean ANMCPKBGNFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_SNOWBALLPUZZLEBOARD_ANMCPKBGNFI_OFFSET))(this);
		}

	};
}
