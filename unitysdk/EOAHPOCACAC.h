#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define EOAHPOCACAC_CTOR_OFFSET UNITYSDK_OFFSET(0x2E73BF0)
#define EOAHPOCACAC_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D40)
#define EOAHPOCACAC_GET_VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1D30)

	struct alignas(8) EOAHPOCACAC
	{
		::System::Object* _ViewModel_k__BackingField; // 0x10
		::System::String* _Id_k__BackingField; // 0x18
		::System::Void _ctor(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + EOAHPOCACAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* get_ViewModel()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAHPOCACAC_GET_VIEWMODEL_OFFSET))(this);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOAHPOCACAC_GET_ID_OFFSET))(this);
		}

	};
