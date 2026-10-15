#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define OAPFEGCKDNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBD28210)
#define OAPFEGCKDNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBD28190)

inline static constexpr unsigned int OAPFEGCKDNG_TypeDefinitionIndex = 59624;

	class OAPFEGCKDNG : public ::System::Object
	{
	public:
		::System::String* EGFJKADNLPO; // 0x10
		::System::String* AOPFJFGGHOL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPFEGCKDNG_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAPFEGCKDNG_TOSTRING_OFFSET))(this);
		}

	};
