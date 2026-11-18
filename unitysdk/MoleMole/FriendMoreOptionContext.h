#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/IBAHIJOBGBG.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FBHPDPBIGPK;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE8EC0)

namespace MoleMole
{
	inline static constexpr unsigned int FriendMoreOptionContext_TypeDefinitionIndex = 44415;

	class FriendMoreOptionContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::FBHPDPBIGPK* info; // 0x28
		::System::Collections::Generic::List_1<::BDEHNBMOHMG>* extraReportTypes; // 0x30
		::UnityEngine::Events::UnityAction* overrideReportBtnAction; // 0x38
		::System::Boolean isRealPlayer; // 0x40
		::System::Byte _padding0[0x3];
		::IBAHIJOBGBG DisplayType; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FRIENDMOREOPTIONCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
