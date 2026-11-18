#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BFFKDCEMMJM;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15638C40)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickDialogContext_TypeDefinitionIndex = 52457;

	class UITrickDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::BFFKDCEMMJM*>* Tricks; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKDIALOGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
