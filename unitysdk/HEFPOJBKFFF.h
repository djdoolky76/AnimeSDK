#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APGJODNAGHB;

#define HEFPOJBKFFF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C4FA50)
#define HEFPOJBKFFF_EKMPMMLBNEL_OFFSET UNITYSDK_OFFSET(0x15C4FAA0)

inline static constexpr unsigned int HEFPOJBKFFF_TypeDefinitionIndex = 62563;

	class HEFPOJBKFFF : public ::System::Object
	{
	public:
		::APGJODNAGHB* PEEAFBINELO; // 0x10
		::System::Void _ctor(::APGJODNAGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APGJODNAGHB*))((::PBYTE)hIl2Cpp + HEFPOJBKFFF_CTOR_OFFSET))(this, a1);
		}

		::System::Single EKMPMMLBNEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEFPOJBKFFF_EKMPMMLBNEL_OFFSET))(this);
		}

	};
