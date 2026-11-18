#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/System/Object.h"

class NPCPrefabTable;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13654560)
#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0x136545B0)
#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0x136546F0)
#define NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136545A0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAvatarParamsConfigModule___c_TypeDefinitionIndex = 47478;

	class NPCCrowdAvatarParamsConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NPCPrefabTable*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::NPCPrefabTable*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarParamsConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35FB0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarParamsConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35FB8);
		}
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAvatarParamsConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>* _CreateOp_b__1_1(::NPCPrefabTable* npcTable)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::FNpcAvatarGenericParams>*(*)(::PVOID, ::NPCPrefabTable*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDAVATARPARAMSCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, npcTable);
		}
	};
}
