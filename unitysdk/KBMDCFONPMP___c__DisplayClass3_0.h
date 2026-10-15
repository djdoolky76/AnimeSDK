#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBMDCFONPMP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KBMDCFONPMP___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB3187E0)
#define KBMDCFONPMP___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xB31A570)

inline static constexpr unsigned int KBMDCFONPMP___c__DisplayClass3_0_TypeDefinitionIndex = 75320;

	class KBMDCFONPMP___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::KBMDCFONPMP* __4__this; // 0x10
		::System::UInt32 starNumOnBattleBegin; // 0x18
		::System::UInt32 starNum; // 0x1C
		::System::Boolean isAutoShownByChapterClear; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBMDCFONPMP___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowDataInfoDialog_b__0(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + KBMDCFONPMP___C__DISPLAYCLASS3_0__SHOWDATAINFODIALOG_B__0_OFFSET))(this, a1);
		}

	};
