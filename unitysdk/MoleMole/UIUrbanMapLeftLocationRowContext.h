#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KOIDMLPJGML;
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13B23100)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B23050)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B23260)
#define MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x13B232B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapLeftLocationRowContext_TypeDefinitionIndex = 48723;

	class UIUrbanMapLeftLocationRowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::MoleMole::UIUrbanMapLeftLocationRowContext*>* OnClick; // 0x28
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* CurrentSelectFlag; // 0x30
		::System::Action* OnClickClose; // 0x38
		::System::String* Title; // 0x40
		::System::Collections::Generic::List_1<::KOIDMLPJGML*>* ItemList; // 0x48
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* PlayerInFlag; // 0x50
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::Foundation::AssetPath>* Icon; // 0x58
		::System::Func_2<::MoleMole::UIUrbanMapLeftLocationRowContext*, ::System::Boolean>* IsLock; // 0x60
		::System::Int32 SpecialId; // 0x68
		::System::Int32 LeftNum; // 0x6C
		::System::Boolean IsSimpleTitleMode; // 0x70
		::System::Boolean IsEmpty; // 0x71
		::System::Boolean IsFinish; // 0x72
		::System::Byte _padding0[0x1];
		::System::Int32 RightNum; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIUrbanMapLeftLocationRowContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIUrbanMapLeftLocationRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPLEFTLOCATIONROWCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
