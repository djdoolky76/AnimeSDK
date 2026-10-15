#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPPKLLIIDCH_CTOR_OFFSET UNITYSDK_OFFSET(0x155DAAB0)
#define EPPKLLIIDCH_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x155DAAC0)

inline static constexpr unsigned int EPPKLLIIDCH_TypeDefinitionIndex = 79200;

	class EPPKLLIIDCH : public ::System::Object
	{
	public:
		::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPPKLLIIDCH_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_SenderRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPPKLLIIDCH_GET_SENDERRUNTIMEID_OFFSET))(this);
		}

	};
