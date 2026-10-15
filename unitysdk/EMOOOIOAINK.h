#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define EMOOOIOAINK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA33100)

inline static constexpr unsigned int EMOOOIOAINK_TypeDefinitionIndex = 43783;

	class EMOOOIOAINK : public ::System::Object
	{
	public:
		::System::Object* DCDPHEIFFGC; // 0x10
		::System::Int32 MJABKKPPCDN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOOOIOAINK_CTOR_OFFSET))(this);
		}

	};
