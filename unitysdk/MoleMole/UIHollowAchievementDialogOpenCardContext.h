#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FF180)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowAchievementDialogOpenCardContext_TypeDefinitionIndex = 51036;

	class UIHollowAchievementDialogOpenCardContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* cardList; // 0x28
		::System::Int32 questID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWACHIEVEMENTDIALOGOPENCARDCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
