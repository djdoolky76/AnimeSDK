#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define EMIOLHAIOIG_CTOR_OFFSET UNITYSDK_OFFSET(0x3E06DB0)
#define EMIOLHAIOIG_GET_BLOCKNAME_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define EMIOLHAIOIG_GET_REASON_OFFSET UNITYSDK_OFFSET(0x6C95B0)

inline static constexpr unsigned int EMIOLHAIOIG_TypeDefinitionIndex = 63579;

	struct alignas(8) EMIOLHAIOIG
	{
		::System::String* _BlockName_k__BackingField; // 0x10
		::System::String* _Reason_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EMIOLHAIOIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_BlockName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIOLHAIOIG_GET_BLOCKNAME_OFFSET))(this);
		}

		::System::String* get_Reason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIOLHAIOIG_GET_REASON_OFFSET))(this);
		}

	};
