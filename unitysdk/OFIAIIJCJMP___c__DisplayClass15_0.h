#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIAIIJCJMP;
namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::Client { class ChimeraDuelItemInfo; }

#define OFIAIIJCJMP___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3ADD0)
#define OFIAIIJCJMP___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__0_OFFSET UNITYSDK_OFFSET(0xBE3AFB0)
#define OFIAIIJCJMP___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__2_OFFSET UNITYSDK_OFFSET(0xBE3AFD0)

inline static constexpr unsigned int OFIAIIJCJMP___c__DisplayClass15_0_TypeDefinitionIndex = 63385;

	class OFIAIIJCJMP___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::OFIAIIJCJMP* __4__this; // 0x10
		::RPG::Client::ChimeraDuelItemInfo* itemInfo; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* __GetItemPoolMaxRarity_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __GetItemPoolMaxRarity_b__2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS15_0___GETITEMPOOLMAXRARITY_B__2_OFFSET))(this, a1);
		}

	};
