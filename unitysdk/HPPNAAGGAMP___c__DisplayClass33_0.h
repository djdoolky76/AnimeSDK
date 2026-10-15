#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPPNAAGGAMP;
namespace System { class String; }

#define HPPNAAGGAMP___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE1870)
#define HPPNAAGGAMP___C__DISPLAYCLASS33_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET UNITYSDK_OFFSET(0x15DE1880)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass33_0_TypeDefinitionIndex = 48486;

	class HPPNAAGGAMP___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::String* timelinePath; // 0x10
		::HPPNAAGGAMP* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Void __OnPreloadTimelineAssetFinish_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS33_0___ONPRELOADTIMELINEASSETFINISH_B__1_OFFSET))(this);
		}

	};
