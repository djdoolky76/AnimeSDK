#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeStoryType.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"
class FCOEMCEDLNL;
class KHBIBLMGMGC;
class PJECBIOOJKI;
namespace RPG::GameCore { class StageMonsterWave; }
namespace RPG::GameCore { class StageRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_GAMECORE_STAGEROW_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB14FE0)
#define RPG_GAMECORE_STAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB14050)
#define RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DB0B410)
#define RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB0BE20)
#define RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DB14060)
#define RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET UNITYSDK_OFFSET(0x1DB14690)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET UNITYSDK_OFFSET(0x1DB146C0)
#define RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET UNITYSDK_OFFSET(0x1DB14CB0)
#define RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET UNITYSDK_OFFSET(0x1DB14E30)
#define RPG_GAMECORE_STAGEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DB140C0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET UNITYSDK_OFFSET(0x1DB14100)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET UNITYSDK_OFFSET(0x1DB143B0)
#define RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET UNITYSDK_OFFSET(0x1DB14200)
#define RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET UNITYSDK_OFFSET(0x1DB14C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageRow_TypeDefinitionIndex = 15142;

	class StageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* StageAbilityConfig; // 0x10
		::System::String* LevelGraphPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedCustomStringList; // 0x20
		::Il2CppArray<::System::String*>* LevelLoseCondition; // 0x28
		::Il2CppArray<::System::String*>* LevelWinCondition; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* _ProcessedTemplateVariables; // 0x38
		::Il2CppArray<::PJECBIOOJKI*>* StageConfigData; // 0x40
		::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* MonsterList; // 0x48
		::Il2CppArray<::KHBIBLMGMGC*>* SubLevelGraphs; // 0x50
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* _ProcessedSubLevelGraphList; // 0x60
		::System::UInt32 EliteGroup; // 0x68
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID StageName; // 0x70
		::System::UInt32 BattleScoringGroup; // 0x80
		::System::Boolean ForbidAutoBattle; // 0x84
		::System::Boolean Release; // 0x85
		::System::Boolean ForbidExitBattle; // 0x86
		::System::Boolean ForbidViewMode; // 0x87
		::RPG::GameCore::StageType StageType; // 0x88
		::System::UInt32 HardLevelGroup; // 0x8C
		::System::UInt32 StageID; // 0x90
		::System::UInt32 Level; // 0x94
		::System::Boolean ResetBattleSpeed; // 0x98
		::System::Byte _padding1[0x3];
		::System::Single MonsterWarningRatio; // 0x9C
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexFloat()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.GameCore", "StageRow")->GetStaticField(0x1C7D0);
		}

		static ::System::Text::RegularExpressions::Regex** StaticGet_s_RegexInteger()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.GameCore", "StageRow")->GetStaticField(0x1C7D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_CCTOR_OFFSET))();
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_RESET_OFFSET))(this);
		}

		::System::Boolean TryGetStageConfigString(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGSTRING_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetStageConfigUint(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetStageConfigUintArray(::System::String* a1, ::System::Object* a2, ::System::Char a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Object*, ::System::Char))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_TRYGETSTAGECONFIGUINTARRAY_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::ChallengeStoryType GetChallengeStoryType()
		{
			return ((::RPG::GameCore::ChallengeStoryType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GETCHALLENGESTORYTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>* get_ProcessedSubLevelGraphList()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Il2CppArray<::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GET_PROCESSEDSUBLEVELGRAPHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* get_ProcessedTemplateVariables()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_GET_PROCESSEDTEMPLATEVARIABLES_OFFSET))(this);
		}

		static ::System::Object* ParseTemplateVariable(::System::String* a1)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW_PARSETEMPLATEVARIABLE_OFFSET))(a1);
		}

		static ::System::Void _TryAddStr(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEROW__TRYADDSTR_OFFSET))(a1, a2);
		}

	};
}
