#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeCoord.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimePuzzleMode.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeType.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
class DOFODCADEHG;
class EKFMIDBJDIA;
class GNELPKKAEBC;
class KMBCPKFMDEH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC3DDA0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CJELDNHONPG_OFFSET UNITYSDK_OFFSET(0xDC3C180)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CMBEDELFAKF_OFFSET UNITYSDK_OFFSET(0xDC3C7F0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC3DB50)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DIMALLBOARD_OFFSET UNITYSDK_OFFSET(0xDC3CC10)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC3C440)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_GPNMMOCCKNK_OFFSET UNITYSDK_OFFSET(0xDC3C4A0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_HAMGAJPPIBP_OFFSET UNITYSDK_OFFSET(0xDC3B5A0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC3B4D0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0xDC3D720)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_KNACEGNPDCP_OFFSET UNITYSDK_OFFSET(0xDC3D100)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_OJADMGMCENO_OFFSET UNITYSDK_OFFSET(0xDC3CF00)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_OKDEHBDGFFI_OFFSET UNITYSDK_OFFSET(0xDC3D7B0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC3CAB0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SETCHIMEWRONGSTATE_OFFSET UNITYSDK_OFFSET(0xDC3CDC0)
#define RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SHOWBOARD_OFFSET UNITYSDK_OFFSET(0xDC3CD00)

namespace RPG::Client::Prop::ChimePuzzle
{
	inline static constexpr unsigned int ChimePuzzleBoard_TypeDefinitionIndex = 78987;

	class ChimePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::UInt32 ChimePuzzleGroupID; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* ChimePuzzleGroupIDDynamicString; // 0x50
		::RPG::Client::Prop::ChimePuzzle::ChimePuzzleMode Mode; // 0x58
		::System::Int32 MaxValue; // 0x5C
		::Il2CppArray<::System::Int32>* Combination; // 0x60
		::Il2CppArray<::System::Int32>* InitCombination; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* ChimeInfos; // 0x70
		::Il2CppArray<::RPG::Client::Prop::ChimePuzzle::ChimeCoord>* BrokenBlocks; // 0x78
		::Il2CppArray<::DOFODCADEHG*>* _ChimeBoardProxise; // 0x80
		::GNELPKKAEBC* _ChimePuzzleInst; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _ChimeRunTimeIDToIndex; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::KMBCPKFMDEH*>* _ChimeViewProxyMap; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* _BlockCoords; // 0xA0
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>** StaticGet_ChimeScore()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimePuzzle::ChimeType, ::System::Int32>**)UnitySDK::FromName("RPG.Client.Prop.ChimePuzzle", "ChimePuzzleBoard")->GetStaticField(0x35AF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void DimAllBoard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_DIMALLBOARD_OFFSET))(this);
		}

		::System::Void ShowBoard(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SHOWBOARD_OFFSET))(this, a1);
		}

		::System::Void SetChimeWrongState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_SETCHIMEWRONGSTATE_OFFSET))(this);
		}

		::System::Void GPNMMOCCKNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_GPNMMOCCKNK_OFFSET))(this, a1);
		}

		::System::Boolean HAMGAJPPIBP(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_HAMGAJPPIBP_OFFSET))(this, a1);
		}

		::System::Void KNACEGNPDCP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_KNACEGNPDCP_OFFSET))(this, a1);
		}

		::System::Void OJADMGMCENO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_OJADMGMCENO_OFFSET))(this);
		}

		::System::Boolean OKDEHBDGFFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_OKDEHBDGFFI_OFFSET))(this);
		}

		::System::Void CJELDNHONPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CJELDNHONPG_OFFSET))(this);
		}

		::System::Void CMBEDELFAKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_CMBEDELFAKF_OFFSET))(this);
		}

		::System::Void JNPJIEDLIJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMEPUZZLE_CHIMEPUZZLEBOARD_JNPJIEDLIJI_OFFSET))(this);
		}

	};
}
