#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FHKGNKFGIDF_CTOR_OFFSET UNITYSDK_OFFSET(0x15781300)
#define FHKGNKFGIDF_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15781310)

inline static constexpr unsigned int FHKGNKFGIDF_TypeDefinitionIndex = 79208;

	class FHKGNKFGIDF : public ::System::Object
	{
	public:
		::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FHKGNKFGIDF_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_SenderRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKGNKFGIDF_GET_SENDERRUNTIMEID_OFFSET))(this);
		}

	};
