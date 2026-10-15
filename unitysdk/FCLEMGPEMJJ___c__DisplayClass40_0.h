#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
class ILOOAAOHIIG;

#define FCLEMGPEMJJ___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0x156CC7F0)
#define FCLEMGPEMJJ___C__DISPLAYCLASS40_0__HANDLEASSISTANTRECOMMENDCHANGED_B__1_OFFSET UNITYSDK_OFFSET(0x156CD7C0)

	class FCLEMGPEMJJ___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::CHGHIALKMFM* mold; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _HandleAssistantRecommendChanged_b__1(::ILOOAAOHIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILOOAAOHIIG*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ___C__DISPLAYCLASS40_0__HANDLEASSISTANTRECOMMENDCHANGED_B__1_OFFSET))(this, a1);
		}

	};
