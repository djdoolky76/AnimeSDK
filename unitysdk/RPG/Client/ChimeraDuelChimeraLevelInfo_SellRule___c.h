#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE340)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE370)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_0_OFFSET UNITYSDK_OFFSET(0x1DFEE380)
#define RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_1_OFFSET UNITYSDK_OFFSET(0x1DFEE3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraLevelInfo_SellRule___c_TypeDefinitionIndex = 64792;

	class ChimeraDuelChimeraLevelInfo_SellRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF880);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF888);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xF890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CreateWithConstValues_b__1_0(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_0_OFFSET))(this, a1);
		}

		::System::Int32 _CreateWithConstValues_b__1_1(::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::GameCore::DynamicValue*, ::RPG::GameCore::DynamicValue*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERALEVELINFO_SELLRULE___C__CREATEWITHCONSTVALUES_B__1_1_OFFSET))(this, a1);
		}

	};
}
