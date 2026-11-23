#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TA::Iris { class ModifierBase; }

#define TA_IRIS_IRISMODIFIERCHAIN_ADDMODIFIER_OFFSET UNITYSDK_OFFSET(0x285DAD0)
#define TA_IRIS_IRISMODIFIERCHAIN_DELETEMODIFIER_OFFSET UNITYSDK_OFFSET(0x285DBC0)
#define TA_IRIS_IRISMODIFIERCHAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x285DD20)

namespace TA::Iris
{
	inline static constexpr unsigned int IrisModifierChain_TypeDefinitionIndex = 16006;

	class IrisModifierChain : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::TA::Iris::ModifierBase*>* Modifiers; // 0x18

		::TA::Iris::ModifierBase* AddModifier(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::TA::Iris::ModifierBase*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + TA_IRIS_IRISMODIFIERCHAIN_ADDMODIFIER_OFFSET))(this, A288CB28FC2A6DA3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_IRIS_IRISMODIFIERCHAIN__CTOR_OFFSET))(this);
		}

		::System::Int32 DeleteModifier(::System::String* ED6187AE74CD752F)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TA_IRIS_IRISMODIFIERCHAIN_DELETEMODIFIER_OFFSET))(this, ED6187AE74CD752F);
		}
	};
}
