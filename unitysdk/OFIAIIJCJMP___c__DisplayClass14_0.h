#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIAIIJCJMP;
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelChimeraInfo; }

#define OFIAIIJCJMP___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3ADC0)
#define OFIAIIJCJMP___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__0_OFFSET UNITYSDK_OFFSET(0xBE3AEF0)
#define OFIAIIJCJMP___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__2_OFFSET UNITYSDK_OFFSET(0xBE3AF10)

inline static constexpr unsigned int OFIAIIJCJMP___c__DisplayClass14_0_TypeDefinitionIndex = 63384;

	class OFIAIIJCJMP___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelChimeraInfo* chimeraInfo; // 0x10
		::OFIAIIJCJMP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraData* __GetChimeraPoolMaxRarity_b__0(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__0_OFFSET))(this, a1);
		}

		::System::Boolean __GetChimeraPoolMaxRarity_b__2(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C__DISPLAYCLASS14_0___GETCHIMERAPOOLMAXRARITY_B__2_OFFSET))(this, a1);
		}

	};
