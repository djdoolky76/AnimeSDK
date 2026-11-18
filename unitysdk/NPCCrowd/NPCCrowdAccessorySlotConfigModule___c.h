#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace NPCCrowd::Accessories { class NPCAccessoryMapConfig; }
namespace NPCCrowd::Accessories { class NpcAccessoryItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136540A0)
#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET UNITYSDK_OFFSET(0x136540F0)
#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET UNITYSDK_OFFSET(0x13654260)
#define NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136540E0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdAccessorySlotConfigModule___c_TypeDefinitionIndex = 52497;

	class NPCCrowdAccessorySlotConfigModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccessorySlotConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35F70);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccessorySlotConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35F78);
		}
		static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdAccessorySlotConfigModule___c_TypeDefinitionIndex)->GetStaticField(0x35F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CTOR_OFFSET))(this);
		}

		::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>* _CreateOp_b__1_0()
		{
			return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CREATEOP_B__1_0_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>* _CreateOp_b__1_1(::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>* loaded)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Accessories::NpcAccessoryItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryMapConfig*>*))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDACCESSORYSLOTCONFIGMODULE___C__CREATEOP_B__1_1_OFFSET))(this, loaded);
		}
	};
}
