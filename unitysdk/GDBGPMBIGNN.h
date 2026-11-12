#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define GDBGPMBIGNN_CTOR_OFFSET UNITYSDK_OFFSET(0x168CA530)
#define GDBGPMBIGNN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x168CA520)

inline static constexpr unsigned int GDBGPMBIGNN_TypeDefinitionIndex = 82126;

	class GDBGPMBIGNN : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GDBGPMBIGNN_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBGPMBIGNN_GET_NAME_OFFSET))(this);
		}

	};
