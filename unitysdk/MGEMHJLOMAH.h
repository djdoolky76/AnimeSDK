#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class String; }

#define MGEMHJLOMAH_CTOR_OFFSET UNITYSDK_OFFSET(0xB918260)
#define MGEMHJLOMAH_GET_ID_OFFSET UNITYSDK_OFFSET(0xB9182E0)

inline static constexpr unsigned int MGEMHJLOMAH_TypeDefinitionIndex = 80506;

	class MGEMHJLOMAH : public ::System::Attribute
	{
	public:
		::System::String* _Id_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGEMHJLOMAH_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Id()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGEMHJLOMAH_GET_ID_OFFSET))(this);
		}

	};
