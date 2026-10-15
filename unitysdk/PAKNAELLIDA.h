#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAKNAELLIDA_BindingSide.h"
#include "unitysdk/System/Exception.h"
namespace System { class String; }
namespace System { class Type; }

#define PAKNAELLIDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC40950)
#define PAKNAELLIDA_GET_OWNERTYPE_OFFSET UNITYSDK_OFFSET(0x1EC5DAA0)
#define PAKNAELLIDA_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1EC5DAB0)
#define PAKNAELLIDA_GET_SIDE_OFFSET UNITYSDK_OFFSET(0x1EC5DAC0)

inline static constexpr unsigned int PAKNAELLIDA_TypeDefinitionIndex = 44057;

	class PAKNAELLIDA : public ::System::Exception
	{
	public:
		::System::String* _PropertyName_k__BackingField; // 0x88
		::System::Type* _OwnerType_k__BackingField; // 0x90
		::PAKNAELLIDA_BindingSide _Side_k__BackingField; // 0x98
		::System::Void _ctor(::System::Type* a1, ::System::String* a2, ::PAKNAELLIDA_BindingSide a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::String*, ::PAKNAELLIDA_BindingSide))((::PBYTE)hIl2Cpp + PAKNAELLIDA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Type* get_OwnerType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKNAELLIDA_GET_OWNERTYPE_OFFSET))(this);
		}

		::System::String* get_PropertyName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKNAELLIDA_GET_PROPERTYNAME_OFFSET))(this);
		}

		::PAKNAELLIDA_BindingSide get_Side()
		{
			return ((::PAKNAELLIDA_BindingSide(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKNAELLIDA_GET_SIDE_OFFSET))(this);
		}

	};
