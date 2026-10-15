#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HBEABJKBJAL_CTOR_OFFSET UNITYSDK_OFFSET(0x15BED500)
#define HBEABJKBJAL_ENMMCCNFDGC_OFFSET UNITYSDK_OFFSET(0x15BECF60)
#define HBEABJKBJAL_KODNOFIPEOH_OFFSET UNITYSDK_OFFSET(0x15BECEE0)
#define HBEABJKBJAL_LFLFLHHFNNC_OFFSET UNITYSDK_OFFSET(0x15BECFA0)
#define HBEABJKBJAL_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x15BED090)
#define HBEABJKBJAL_PCDLKLNDNKO_OFFSET UNITYSDK_OFFSET(0x15BED4A0)

	class HBEABJKBJAL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* KODNOFIPEOH()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_KODNOFIPEOH_OFFSET))(this);
		}

		::UnityEngine::GameObject* ENMMCCNFDGC()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_ENMMCCNFDGC_OFFSET))(this);
		}

		::System::String* LFLFLHHFNNC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBEABJKBJAL_LFLFLHHFNNC_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::System::Collections::Generic::List_1<::System::Single>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + HBEABJKBJAL_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* PCDLKLNDNKO(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2, ::System::Single a3)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + HBEABJKBJAL_PCDLKLNDNKO_OFFSET))(this, a1, a2, a3);
		}

	};
