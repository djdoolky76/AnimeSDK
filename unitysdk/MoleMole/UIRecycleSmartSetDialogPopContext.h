#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class HGAJKHIMKJP;
class HPJFKAGBEDG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x147FE8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRecycleSmartSetDialogPopContext_TypeDefinitionIndex = 92552;

	class UIRecycleSmartSetDialogPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* SourceItemList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HPJFKAGBEDG*>* PlatformDataDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECYCLESMARTSETDIALOGPOPCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
