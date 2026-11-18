#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALITEMSUBMITDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E48040)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralItemSubmitDialogContext_TypeDefinitionIndex = 72912;

	class UIGeneralItemSubmitDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* SubmitAction; // 0x28
		::System::Action* CancelAction; // 0x30
		::System::String* TitleTextKey; // 0x38
		::System::String* DescTextKey; // 0x40
		::HGAJKHIMKJP* ItemData; // 0x48
		::System::Int32 MaxSubmitCount; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALITEMSUBMITDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
