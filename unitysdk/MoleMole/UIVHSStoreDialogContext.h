#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIVHSStoreDialogContext_Mode.h"

namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x113693E0)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_MODE_OFFSET UNITYSDK_OFFSET(0x113693D0)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_PREVIEWTAGS_OFFSET UNITYSDK_OFFSET(0x11369400)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_SLOTS_OFFSET UNITYSDK_OFFSET(0x113693F0)
#define MOLEMOLE_UIVHSSTOREDIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11369410)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogContext_TypeDefinitionIndex = 80851;

	class UIVHSStoreDialogContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _slots_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* _previewTags_k__BackingField; // 0x30
		::System::Func_1<::System::Collections::Generic::List_1<::System::Int32>*>* validVhsGetter; // 0x38
		::System::Func_2<::System::Int32, ::System::Boolean>* checkVhsInCd; // 0x40
		::MoleMole::UIVHSStoreDialogContext_Mode _mode_k__BackingField; // 0x48
		::System::Boolean _isReadonly_k__BackingField; // 0x4C

		::System::Void _ctor(::MoleMole::UIVHSStoreDialogContext_Mode mode, ::System::Boolean isReadonly, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* slots, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* previewTags)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreDialogContext_Mode, ::System::Boolean, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT__CTOR_OFFSET))(this, mode, isReadonly, slots, previewTags);
		}

		::MoleMole::UIVHSStoreDialogContext_Mode get_mode()
		{
			return ((::MoleMole::UIVHSStoreDialogContext_Mode(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_MODE_OFFSET))(this);
		}

		::System::Boolean get_isReadonly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* get_slots()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_SLOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* get_previewTags()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGCONTEXT_GET_PREVIEWTAGS_OFFSET))(this);
		}
	};
}
