#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDA9DF50)
#define RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_1__SHOWPERFORMANCESKIPDIALOG_B__2_OFFSET UNITYSDK_OFFSET(0xDA9E930)

namespace RPG::Client
{
	inline static constexpr unsigned int PerformanceSkipUtils___c__DisplayClass0_1_TypeDefinitionIndex = 60744;

	template <typename T>
	class PerformanceSkipUtils___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Action_1<::System::Boolean>* secondConfirmDispatch; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPerformanceSkipDialog_b__2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PERFORMANCESKIPUTILS___C__DISPLAYCLASS0_1__SHOWPERFORMANCESKIPDIALOG_B__2_OFFSET))(this, a1);
		}

	};
}
