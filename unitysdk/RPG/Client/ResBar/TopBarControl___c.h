#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCFGMKGNMNP;
class MEAFKINAELF;
class OBOLGLHJLBP;
namespace ObservableCollections { template <typename T> class ObservableList_1; }
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDEBBB30)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDEBBB70)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_0_OFFSET UNITYSDK_OFFSET(0xDEBBB80)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_1_OFFSET UNITYSDK_OFFSET(0xDEBBBA0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_2_OFFSET UNITYSDK_OFFSET(0xDEBBBC0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_3_OFFSET UNITYSDK_OFFSET(0xDEBBBE0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_4_OFFSET UNITYSDK_OFFSET(0xDEBBC00)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_5_OFFSET UNITYSDK_OFFSET(0xDEBBC20)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int TopBarControl___c_TypeDefinitionIndex = 79145;

	class TopBarControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDB0);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDB8);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDC8);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDD0);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDD8);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x5BDE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CTOR_OFFSET))(this);
		}

		::ObservableCollections::ObservableList_1<::MEAFKINAELF*>* __Binding_b__6_0(::OBOLGLHJLBP* a1)
		{
			return ((::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_0_OFFSET))(this, a1);
		}

		::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>* __Binding_b__6_1(::OBOLGLHJLBP* a1)
		{
			return ((::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_1_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__6_2(::OBOLGLHJLBP* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_2_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__6_3(::OBOLGLHJLBP* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_3_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__6_4(::OBOLGLHJLBP* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_4_OFFSET))(this, a1);
		}

		::R3::Observable_1<::System::Boolean>* __Binding_b__6_5(::OBOLGLHJLBP* a1)
		{
			return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID, ::OBOLGLHJLBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_5_OFFSET))(this, a1);
		}

	};
}
