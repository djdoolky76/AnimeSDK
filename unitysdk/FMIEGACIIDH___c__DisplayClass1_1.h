#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBNONKAIAMK;

#define FMIEGACIIDH___C__DISPLAYCLASS1_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1585BAB0)
#define FMIEGACIIDH___C__DISPLAYCLASS1_1__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x1585BAE0)

	template <typename T>
	class FMIEGACIIDH___c__DisplayClass1_1 : public ::System::Object
	{
	public:
		::System::UInt32 stageBattleTargetID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIEGACIIDH___C__DISPLAYCLASS1_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTaskBegin_b__1(::PBNONKAIAMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBNONKAIAMK*))((::PBYTE)hIl2Cpp + FMIEGACIIDH___C__DISPLAYCLASS1_1__ONTASKBEGIN_B__1_OFFSET))(this, a1);
		}

	};
