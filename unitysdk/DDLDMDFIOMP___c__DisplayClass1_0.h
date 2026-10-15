#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJHMEHAHDNI;
namespace System { class Object; }

#define DDLDMDFIOMP___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE4E5F30)
#define DDLDMDFIOMP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0xE4E6300)
#define DDLDMDFIOMP___C__DISPLAYCLASS1_0__ONTASKBEGIN_G__ONSCENEENTERED_0_OFFSET UNITYSDK_OFFSET(0xE4E6230)

	class DDLDMDFIOMP___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::OJHMEHAHDNI* activityService; // 0x10
		::System::UInt32 trackId; // 0x18
		::System::UInt32 matchId; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLDMDFIOMP___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_g__OnSceneEntered_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDLDMDFIOMP___C__DISPLAYCLASS1_0__ONTASKBEGIN_G__ONSCENEENTERED_0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLDMDFIOMP___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__1_OFFSET))(this);
		}

	};
