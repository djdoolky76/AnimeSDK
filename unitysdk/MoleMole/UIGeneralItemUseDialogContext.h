#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALITEMUSEDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166B6F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemUseDialogContext_TypeDefinitionIndex = 81744;

	class UIGeneralItemUseDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* useAction; // 0x28
		::HGAJKHIMKJP* itemData; // 0x30
		::System::String* titleText; // 0x38
		::System::Boolean showInputField; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 maxUseCount; // 0x44
		::System::Int32 expectedInitCount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMUSEDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
