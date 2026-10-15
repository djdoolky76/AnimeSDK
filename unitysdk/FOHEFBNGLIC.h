#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"
namespace System { class String; }

#define FOHEFBNGLIC_CTOR_OFFSET UNITYSDK_OFFSET(0x158E0930)
#define FOHEFBNGLIC_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x158E0910)
#define FOHEFBNGLIC_GET_URL_OFFSET UNITYSDK_OFFSET(0x158E08F0)
#define FOHEFBNGLIC_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x158E0920)
#define FOHEFBNGLIC_SET_URL_OFFSET UNITYSDK_OFFSET(0x158E0900)

inline static constexpr unsigned int FOHEFBNGLIC_TypeDefinitionIndex = 48973;

	class FOHEFBNGLIC : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::String* _url_k__BackingField; // 0x10
		::System::Boolean _isDirty_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOHEFBNGLIC_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHEFBNGLIC_GET_URL_OFFSET))(this);
		}

		::System::Void set_url(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOHEFBNGLIC_SET_URL_OFFSET))(this, a1);
		}

		::System::Boolean get_isDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOHEFBNGLIC_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_isDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOHEFBNGLIC_SET_ISDIRTY_OFFSET))(this, a1);
		}

	};
