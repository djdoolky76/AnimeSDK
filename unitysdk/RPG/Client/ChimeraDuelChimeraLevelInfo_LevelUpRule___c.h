#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD4836A0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD4836D0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET UNITYSDK_OFFSET(0xD4837A0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET UNITYSDK_OFFSET(0xD483800)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET UNITYSDK_OFFSET(0xD4836E0)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET UNITYSDK_OFFSET(0xD483740)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex = 64790;

	class ChimeraDuelChimeraLevelInfo_LevelUpRule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFD80);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFD88);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFD90);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFD98);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xFDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET))(this, a1);
		}

		::System::Int32 _ReadConstValueOfExpBeforeLevelUp_b__6_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET))(this, a1);
		}

		::System::Int32 _CreateWithConstValues_b__7_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET))(this, a1);
		}

		::System::Int32 _CreateWithConstValues_b__7_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET))(this, a1);
		}

	};
}
