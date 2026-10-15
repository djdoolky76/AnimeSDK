#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NDFBOPJIKAG_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1C900)
#define NDFBOPJIKAG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBB1C8E0)
#define NDFBOPJIKAG_SET_DESC_OFFSET UNITYSDK_OFFSET(0xBB1C8F0)

inline static constexpr unsigned int NDFBOPJIKAG_TypeDefinitionIndex = 79664;

	class NDFBOPJIKAG : public ::System::Object
	{
	public:
		::System::String* _Desc_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFBOPJIKAG_CTOR_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFBOPJIKAG_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDFBOPJIKAG_SET_DESC_OFFSET))(this, a1);
		}

	};
