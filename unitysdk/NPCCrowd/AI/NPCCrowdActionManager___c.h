#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BFD50)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x172BFD90)
#define NPCCROWD_AI_NPCCROWDACTIONMANAGER___C___CTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x172BFDA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdActionManager___c_TypeDefinitionIndex = 55019;

	class NPCCrowdActionManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager___c_TypeDefinitionIndex)->GetStaticField(0x4DC10);
		}
		static ::System::Func_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__48_0()
		{
			return (::System::Func_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdActionManager___c_TypeDefinitionIndex)->GetStaticField(0x4DC18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* __ctor_b__48_0()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDACTIONMANAGER___C___CTOR_B__48_0_OFFSET))(this);
		}
	};
}
