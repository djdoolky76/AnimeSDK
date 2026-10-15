#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMMGODFEEO;
namespace System { class String; }

#define HPPNAAGGAMP___C__DISPLAYCLASS20_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15DE1770)
#define HPPNAAGGAMP___C__DISPLAYCLASS20_0__STOPTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x15DE1780)

inline static constexpr unsigned int HPPNAAGGAMP___c__DisplayClass20_0_TypeDefinitionIndex = 48483;

	class HPPNAAGGAMP___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::String* timelineName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS20_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _StopTimeline_b__0(::EBMMGODFEEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMMGODFEEO*))((::PBYTE)hIl2Cpp + HPPNAAGGAMP___C__DISPLAYCLASS20_0__STOPTIMELINE_B__0_OFFSET))(this, a1);
		}

	};
