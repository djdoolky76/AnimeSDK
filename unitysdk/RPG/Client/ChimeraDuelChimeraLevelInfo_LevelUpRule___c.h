#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEDF30)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEDF60)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_0_OFFSET UNITYSDK_OFFSET(0x1DFEE030)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__CREATEWITHCONSTVALUES_B__7_1_OFFSET UNITYSDK_OFFSET(0x1DFEE090)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_0_OFFSET UNITYSDK_OFFSET(0x1DFEDF70)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_LEVELUPRULE___C__READCONSTVALUEOFEXPBEFORELEVELUP_B__6_1_OFFSET UNITYSDK_OFFSET(0x1DFEDFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_LevelUpRule___c_TypeDefinitionIndex = 64790;

	class ChimeraDuelChimeraLevelInfo_LevelUpRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF7E0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF7E8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF7F0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF7F8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF800);
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
