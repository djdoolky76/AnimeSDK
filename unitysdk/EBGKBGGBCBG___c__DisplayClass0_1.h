#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

#define EBGKBGGBCBG___C__DISPLAYCLASS0_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1C521AE0)
#define EBGKBGGBCBG___C__DISPLAYCLASS0_1__DETERMINE_B__1_OFFSET UNITYSDK_OFFSET(0x1C521BC0)

inline static constexpr unsigned int EBGKBGGBCBG___c__DisplayClass0_1_TypeDefinitionIndex = 41893;

	template <typename T>
	class EBGKBGGBCBG___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::Int32 front; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGKBGGBCBG___C__DISPLAYCLASS0_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _Determine_b__1(::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::System::Int32>))((::PBYTE)hIl2Cpp + EBGKBGGBCBG___C__DISPLAYCLASS0_1__DETERMINE_B__1_OFFSET))(this, a1);
		}

	};
