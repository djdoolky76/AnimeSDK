#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPJPHILONME;
class DCNNAGMLENM;
class FMABAKJCFKJ;
class OJHMEHAHDNI;

#define OJHMEHAHDNI___C__DISPLAYCLASS16_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB7C30)
#define OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xBEBA010)
#define OJHMEHAHDNI___C__DISPLAYCLASS16_0___REQUESTSTARTMATCHANDBEGIN_B__2_OFFSET UNITYSDK_OFFSET(0xBEB9F90)

inline static constexpr unsigned int OJHMEHAHDNI___c__DisplayClass16_0_TypeDefinitionIndex = 81732;

	class OJHMEHAHDNI___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::OJHMEHAHDNI* __4__this; // 0x10
		::DCNNAGMLENM* matchParams; // 0x18
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
