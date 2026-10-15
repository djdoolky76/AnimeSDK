#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
namespace System { class Exception; }
namespace System { class String; }

#define NNOBKIHIEHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBCD6B40)
#define NNOBKIHIEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD6AA0)
#define NNOBKIHIEHP_GET_SHARECODE_OFFSET UNITYSDK_OFFSET(0xBCD6BF0)

inline static constexpr unsigned int NNOBKIHIEHP_TypeDefinitionIndex = 67507;

	class NNOBKIHIEHP : public ::System::Exception
	{
	public:
		::System::String* _ShareCode_k__BackingField; // 0x88
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + NNOBKIHIEHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::Exception* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NNOBKIHIEHP_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_ShareCode()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOBKIHIEHP_GET_SHARECODE_OFFSET))(this);
		}

	};
