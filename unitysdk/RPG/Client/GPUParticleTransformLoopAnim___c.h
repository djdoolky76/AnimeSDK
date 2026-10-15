#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLPGPGDOCCA_AnimatedItem;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD086420)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD086460)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_0_OFFSET UNITYSDK_OFFSET(0xD086470)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_1_OFFSET UNITYSDK_OFFSET(0xD086490)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUParticleTransformLoopAnim___c_TypeDefinitionIndex = 70316;

	class GPUParticleTransformLoopAnim___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F90);
		}

		static ::System::Func_2<::System::Object*, ::UnityEngine::Mesh*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::Object*, ::UnityEngine::Mesh*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63F98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x63FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* _get_RenderBudgetData_b__19_0(::KLPGPGDOCCA_AnimatedItem* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::KLPGPGDOCCA_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* _get_RenderBudgetData_b__19_1(::KLPGPGDOCCA_AnimatedItem* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID, ::KLPGPGDOCCA_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_1_OFFSET))(this, a1);
		}

	};
}
