#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBNONKAIAMK;

#define FMIEGACIIDH___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1584FD30)
#define FMIEGACIIDH___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1584FD50)

inline static constexpr unsigned int FMIEGACIIDH___c__DisplayClass1_0_TypeDefinitionIndex = 55659;

	class FMIEGACIIDH___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::UInt32 nBattleTargetID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMIEGACIIDH___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnTaskBegin_b__0(::PBNONKAIAMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBNONKAIAMK*))((::PBYTE)hIl2Cpp + FMIEGACIIDH___C__DISPLAYCLASS1_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

	};
