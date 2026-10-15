#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACHNEAMCCEC;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD637AF0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD637B30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDICON_B__3_0_OFFSET UNITYSDK_OFFSET(0xD637B40)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDTEXT_B__4_0_OFFSET UNITYSDK_OFFSET(0xD637B60)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftTargetAttributeControl___c_TypeDefinitionIndex = 79948;

	class MechCraftCraftTargetAttributeControl___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::ACHNEAMCCEC*, ::R3::Observable*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::ACHNEAMCCEC*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x59910);
		}

		static ::System::Func_2<::ACHNEAMCCEC*, ::R3::Observable*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::ACHNEAMCCEC*, ::R3::Observable*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x59918);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x59920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C_CTOR_OFFSET))(this);
		}

		::R3::Observable* __BindIcon_b__3_0(::ACHNEAMCCEC* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::ACHNEAMCCEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDICON_B__3_0_OFFSET))(this, a1);
		}

		::R3::Observable* __BindText_b__4_0(::ACHNEAMCCEC* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::ACHNEAMCCEC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTTARGETATTRIBUTECONTROL___C___BINDTEXT_B__4_0_OFFSET))(this, a1);
		}

	};
}
