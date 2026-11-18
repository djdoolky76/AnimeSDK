#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1968F4F0)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKCONSOLECHECKCONSUMEBTN_G__ONCLICKITEMBTN_0_OFFSET UNITYSDK_OFFSET(0x19692350)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleElitePageController___c__DisplayClass30_0_TypeDefinitionIndex = 55845;

	class UIDoubleElitePageController___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* items; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickConsoleCheckConsumeBtn_g__OnClickItemBtn_0(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS30_0__ONCLICKCONSOLECHECKCONSUMEBTN_G__ONCLICKITEMBTN_0_OFFSET))(this, index);
		}
	};
}
