#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BHHPHPGCODJ;
namespace RPG::Client::MechCraft::View { class MechCraftNodeListControl_CBPOMADILDL; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD623A40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD623A80)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__GETTARGETANCHORPOS_B__5_0_OFFSET UNITYSDK_OFFSET(0xD623A90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C___REFRESH_B__6_1_OFFSET UNITYSDK_OFFSET(0xD623AB0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftProgressAttrTargetControl___c_TypeDefinitionIndex = 79914;

	class MechCraftCraftProgressAttrTargetControl___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x49220);
		}

		static ::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL** StaticGet___9__6_1()
		{
			return (::RPG::Client::MechCraft::View::MechCraftNodeListControl_CBPOMADILDL**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x49228);
		}

		static ::System::Func_3<::BHHPHPGCODJ*, ::System::Int32, ::System::ValueTuple_2<::BHHPHPGCODJ*, ::System::Int32>>** StaticGet___9__5_0()
		{
			return (::System::Func_3<::BHHPHPGCODJ*, ::System::Int32, ::System::ValueTuple_2<::BHHPHPGCODJ*, ::System::Int32>>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x49230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::BHHPHPGCODJ*, ::System::Int32> _GetTargetAnchorPos_b__5_0(::BHHPHPGCODJ* a1, ::System::Int32 a2)
		{
			return ((::System::ValueTuple_2<::BHHPHPGCODJ*, ::System::Int32>(*)(::PVOID, ::BHHPHPGCODJ*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C__GETTARGETANCHORPOS_B__5_0_OFFSET))(this, a1, a2);
		}

		::System::Action* __Refresh_b__6_1(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTPROGRESSATTRTARGETCONTROL___C___REFRESH_B__6_1_OFFSET))(this, a1, a2);
		}

	};
}
