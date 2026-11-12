#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEDFBLADEA;

#define PEEDFBLADEA___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC93AB90)
#define PEEDFBLADEA___C__DISPLAYCLASS2_0__PRELOADEXITEFFECTS_B__0_OFFSET UNITYSDK_OFFSET(0xC93CAC0)
#define PEEDFBLADEA___C__DISPLAYCLASS2_0__PRELOADEXITEFFECTS_B__1_OFFSET UNITYSDK_OFFSET(0xC93CAF0)

inline static constexpr unsigned int PEEDFBLADEA___c__DisplayClass2_0_TypeDefinitionIndex = 81555;

	class PEEDFBLADEA___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::PEEDFBLADEA* __4__this; // 0x10
		::System::Int32 loadVersion; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreloadExitEffects_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS2_0__PRELOADEXITEFFECTS_B__0_OFFSET))(this, a1);
		}

		::System::Void _PreloadExitEffects_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEEDFBLADEA___C__DISPLAYCLASS2_0__PRELOADEXITEFFECTS_B__1_OFFSET))(this, a1);
		}

	};
