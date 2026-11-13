#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBPPKMAJGCG_AnimatedItem;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7F30A0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F30E0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A7F30F0)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__23_1_OFFSET UNITYSDK_OFFSET(0x1A7F3110)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUTransformLoopAnim___c_TypeDefinitionIndex = 72289;

	class GPUTransformLoopAnim___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A9D0);
		}

		static ::System::Func_2<::System::Object*, ::UnityEngine::Mesh*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::Object*, ::UnityEngine::Mesh*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A9D8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6A9E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* _get_RenderBudgetData_b__23_0(::KBPPKMAJGCG_AnimatedItem* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__23_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* _get_RenderBudgetData_b__23_1(::KBPPKMAJGCG_AnimatedItem* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID, ::KBPPKMAJGCG_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__23_1_OFFSET))(this, a1);
		}

	};
}
