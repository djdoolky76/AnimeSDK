#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CIAOJAMKBGG_CTOR_OFFSET UNITYSDK_OFFSET(0xCF65190)
#define CIAOJAMKBGG_GET_SENDERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xCF651A0)

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
