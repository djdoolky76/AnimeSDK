#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIAOJAMKBGG_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CF0E0)
#define CIAOJAMKBGG_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD8CF0F0)

inline static constexpr unsigned int CIAOJAMKBGG_TypeDefinitionIndex = 81975;

	class CIAOJAMKBGG : public ::System::Object
	{
	public:
		::System::Int32 _SenderRuntimeID_k__BackingField; // 0x10
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIAOJAMKBGG_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_SenderRuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIAOJAMKBGG_GET_SENDERRUNTIMEID_OFFSET))(this);
		}

	};
