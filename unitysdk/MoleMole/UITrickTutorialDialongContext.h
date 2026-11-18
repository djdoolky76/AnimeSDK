#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class EMLGGGPOHEN;
class MEODDGONPBJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA2C40)

namespace MoleMole
{
	inline static constexpr unsigned int UITrickTutorialDialongContext_TypeDefinitionIndex = 87827;

	class UITrickTutorialDialongContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* avatarList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::EMLGGGPOHEN*>* skills; // 0x30
		::MEODDGONPBJ* TutorialGetter; // 0x38
		::System::Boolean HideRole; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 InitGroupID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRICKTUTORIALDIALONGCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
