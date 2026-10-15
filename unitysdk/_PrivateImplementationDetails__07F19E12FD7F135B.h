#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define _PRIVATEIMPLEMENTATIONDETAILS__07F19E12FD7F135B_COMPUTESTRINGHASH_OFFSET UNITYSDK_OFFSET(0x1F442A20)

inline static constexpr unsigned int _PrivateImplementationDetails__07F19E12FD7F135B_TypeDefinitionIndex = 5203;

	class _PrivateImplementationDetails__07F19E12FD7F135B : public ::System::Object
	{
	public:
		static ::System::UInt32 ComputeStringHash(::System::String* a1)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + _PRIVATEIMPLEMENTATIONDETAILS__07F19E12FD7F135B_COMPUTESTRINGHASH_OFFSET))(a1);
		}

	};
