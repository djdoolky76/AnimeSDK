#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueFormulaData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4B80)
#define RPG_CLIENT_ROGUEFORMULAINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBF4BB0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETALLULTIMATEFORMULAS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1CBF4D30)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDACHIEVEDFORMULAS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1CBF4BE0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDALLACTIVIATEDFORMULAS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1CBF4CC0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDSHOWNFORMULASBYSTATE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1CBF4C50)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1CBF4BC0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_1_OFFSET UNITYSDK_OFFSET(0x1CBF4BD0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_1_OFFSET UNITYSDK_OFFSET(0x1CBF4D60)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_2_OFFSET UNITYSDK_OFFSET(0x1CBF4D80)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_3_OFFSET UNITYSDK_OFFSET(0x1CBF4DA0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_4_OFFSET UNITYSDK_OFFSET(0x1CBF4DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c_TypeDefinitionIndex = 69161;

	class RogueFormulaInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>** StaticGet___9__29_4()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71200);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71208);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71210);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71218);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71220);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71228);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71238);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71240);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71248);
		}

		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x71250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshBuffCountValue_b__9_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_0_OFFSET))(this, a1);
		}

		::System::Int32 _RefreshBuffCountValue_b__9_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedAchievedFormulas_b__14_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDACHIEVEDFORMULAS_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedShownFormulasByState_b__15_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDSHOWNFORMULASBYSTATE_B__15_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedAllActiviatedFormulas_b__16_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDALLACTIVIATEDFORMULAS_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllUltimateFormulas_b__17_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETALLULTIMATEFORMULAS_B__17_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetSortedFormulasOnBuffChangeImpl_b__29_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueFormulaCategory __GetSortedFormulasOnBuffChangeImpl_b__29_2(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_2_OFFSET))(this, a1);
		}

		::System::Int32 __GetSortedFormulasOnBuffChangeImpl_b__29_3(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueFormulaCategory __GetSortedFormulasOnBuffChangeImpl_b__29_4(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_4_OFFSET))(this, a1);
		}

	};
}
