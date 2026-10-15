#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"
namespace System { class Nullable; }
namespace System::Collections::Generic { class KeyValuePair; }

#define EBGKBGGBCBG___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54FE30)
#define EBGKBGGBCBG___C__DISPLAYCLASS0_0__DETERMINE_B__0_OFFSET UNITYSDK_OFFSET(0x1C550000)

inline static constexpr unsigned int EBGKBGGBCBG___c__DisplayClass0_0_TypeDefinitionIndex = 41892;

	class EBGKBGGBCBG___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Nullable* maxPair; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGKBGGBCBG___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _Determine_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + EBGKBGGBCBG___C__DISPLAYCLASS0_0__DETERMINE_B__0_OFFSET))(this, a1);
		}

	};
