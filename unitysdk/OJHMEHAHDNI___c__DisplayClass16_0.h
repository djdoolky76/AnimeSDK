#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPJPHILONME;
class DCNNAGMLENM;
class FMABAKJCFKJ;
class OJHMEHAHDNI;

#define OJHMEHAHDNI___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB0790)
#define OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBEB2B60)
#define OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__2_OFFSET UNITYSDK_OFFSET(0xBEB2AE0)

inline static constexpr unsigned int OJHMEHAHDNI___c__DisplayClass16_0_TypeDefinitionIndex = 81731;

	class OJHMEHAHDNI___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::DCNNAGMLENM* matchParams; // 0x10
		::OJHMEHAHDNI* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS16_0_CTOR_OFFSET))(this);
		}

		::System::Void __RequestStartMatchAndBegin_b__2(::CPJPHILONME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPJPHILONME*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__2_OFFSET))(this, a1);
		}

		::System::Void __RequestStartMatchAndBegin_b__0(::FMABAKJCFKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FMABAKJCFKJ*))((::PBYTE)hIl2Cpp + OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__0_OFFSET))(this, a1);
		}

	};
