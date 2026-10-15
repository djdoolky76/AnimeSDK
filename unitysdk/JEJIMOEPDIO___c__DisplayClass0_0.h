#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
class HEKHCLACHJE;
namespace System::Collections::Generic { class KeyValuePair; }

#define JEJIMOEPDIO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1662D7B0)
#define JEJIMOEPDIO___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET UNITYSDK_OFFSET(0x1662DF80)

inline static constexpr unsigned int JEJIMOEPDIO___c__DisplayClass0_0_TypeDefinitionIndex = 79417;

	class JEJIMOEPDIO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::HEKHCLACHJE* currentValues; // 0x10
		::System::Int32 maxAttributeValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShouldEmphasizeWronglyPeaked_b__1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET))(this, a1);
		}

	};
