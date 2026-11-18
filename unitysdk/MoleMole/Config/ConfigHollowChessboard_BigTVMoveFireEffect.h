#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/ProtoScript/HollowGridLink.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_CREATERUNTIMEEFFECTLIST_OFFSET UNITYSDK_OFFSET(0x1653AFE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GETGRIDEXISTLIST_OFFSET UNITYSDK_OFFSET(0x1653AC80)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1653A800)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x1653A810)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_TRYCREATECREATERUNTIMEEFFECTINFO_OFFSET UNITYSDK_OFFSET(0x1653B300)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1653B690)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1653B680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveFireEffect_TypeDefinitionIndex = 46337;

	class ConfigHollowChessboard_BigTVMoveFireEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		static ::System::Lazy_1<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>** StaticGet__indexOffset()
		{
			return (::System::Lazy_1<::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowChessboard_BigTVMoveFireEffect_TypeDefinitionIndex)->GetStaticField(0x3E960);
		}
		::System::Collections::Generic::List_1<::System::Object*>* InfoList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT__CCTOR_OFFSET))();
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Collections::Generic::List_1<::System::Object*>* CreateRuntimeEffectList(::PNJDGHBEMLK* chessPiece, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* gridsFullIndex, ::ProtoScript::HollowGridLink moveDir)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::ProtoScript::HollowGridLink))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_CREATERUNTIMEEFFECTLIST_OFFSET))(this, chessPiece, gridsFullIndex, moveDir);
		}

		::System::Void TryCreateCreateRuntimeEffectInfo(::PNJDGHBEMLK* chessPiece, ::FBAMLABJMKF* chessboard, ::System::Collections::Generic::List_1<::System::Object*>* inRuntimeEffectList, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo& effectInfo, ::MoleMole::HollowChessboard::HollowCell fullIndex, ::System::Boolean inIsRightSide, ::System::Boolean inIsMirror, ::System::Boolean inIsUpDir)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::FBAMLABJMKF*, ::System::Collections::Generic::List_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_BigTVMoveFireEffect_EffectInfo&, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_TRYCREATECREATERUNTIMEEFFECTINFO_OFFSET))(this, chessPiece, chessboard, inRuntimeEffectList, effectInfo, fullIndex, inIsRightSide, inIsMirror, inIsUpDir);
		}

		::System::Boolean GetGridExistList(::PNJDGHBEMLK* chessPiece, ::ProtoScript::HollowGridLink curMoveDir, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& gridsExist)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*, ::ProtoScript::HollowGridLink, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVEFIREEFFECT_GETGRIDEXISTLIST_OFFSET))(this, chessPiece, curMoveDir, gridsExist);
		}
	};
}
