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

#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE96C500)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE96C540)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_0_OFFSET UNITYSDK_OFFSET(0xE96C550)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_1_OFFSET UNITYSDK_OFFSET(0xE96C570)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_2_OFFSET UNITYSDK_OFFSET(0xE96C590)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_3_OFFSET UNITYSDK_OFFSET(0xE96C5B0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_4_OFFSET UNITYSDK_OFFSET(0xE96C5D0)
#define RPG_CLIENT_RESBAR_TOPBARCONTROL___C___BINDING_B__6_5_OFFSET UNITYSDK_OFFSET(0xE96C5F0)

namespace RPG::Client::ResBar
{
	inline static constexpr unsigned int TopBarControl___c_TypeDefinitionIndex = 81921;

	class TopBarControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC20);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC28);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::MEAFKINAELF*>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC30);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC38);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_3()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC40);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::ObservableCollections::ObservableList_1<::KCFGMKGNMNP*>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC48);
		}

		static ::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>** StaticGet___9__6_2()
		{
			return (::System::Func_2<::OBOLGLHJLBP*, ::R3::Observable_1<::System::Boolean>*>**)UnitySDK::FromName("RPG.Client.ResBar", "<>c")->GetStaticField(0x6AC50);
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
