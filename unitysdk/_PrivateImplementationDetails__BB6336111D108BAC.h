#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__BB6336111D108BAC_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1EE81110)

inline static constexpr unsigned int _PrivateImplementationDetails__BB6336111D108BAC_TypeDefinitionIndex = 3912;

	class _PrivateImplementationDetails__BB6336111D108BAC : public ::System::Object
	{
	public:
		static ::System::UInt32 ComputeStringHash(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__BB6336111D108BAC_COMPUTESTRINGHASH_OFFSET))(a1);
		}

	};
