#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
class HEKHCLACHJE;

#define JEJIMOEPDIO___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1661E2B0)
#define JEJIMOEPDIO___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET UNITYSDK_OFFSET(0x1661EA80)

inline static constexpr unsigned int JEJIMOEPDIO___c__DisplayClass0_0_TypeDefinitionIndex = 79416;

	class JEJIMOEPDIO___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::HEKHCLACHJE* currentValues; // 0x10
		::System::Int32 maxAttributeValue; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _ShouldEmphasizeWronglyPeaked_b__1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + JEJIMOEPDIO___C__DISPLAYCLASS0_0__SHOULDEMPHASIZEWRONGLYPEAKED_B__1_OFFSET))(this, a1);
		}

	};
