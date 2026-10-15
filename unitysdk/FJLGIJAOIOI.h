#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define FJLGIJAOIOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E77020)

inline static constexpr unsigned int FJLGIJAOIOI_TypeDefinitionIndex = 49275;

	struct alignas(8) FJLGIJAOIOI
	{
		::UnityEngine::Gradient* FNLDALLEOIJ; // 0x10
		::System::Single HMAGPLNGNMP; // 0x18
		::System::Int32 OJHOLONFFCO; // 0x1C
		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJLGIJAOIOI_TOSTRING_OFFSET))(this);
		}

	};
