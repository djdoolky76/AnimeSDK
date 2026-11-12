#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HKDADFEOGKC_CTOR_OFFSET UNITYSDK_OFFSET(0x16C919D0)

inline static constexpr unsigned int HKDADFEOGKC_TypeDefinitionIndex = 61279;

	class HKDADFEOGKC : public ::System::Object
	{
	public:
		::System::String* CCEPJAFEKHM; // 0x10
		::System::String* JCMHOLDHPPH; // 0x18
		::System::String* GCPFJEOJKLO; // 0x20
		::System::String* DLKADOJENEI; // 0x28
		::System::String* LOJFDBJKOEB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKDADFEOGKC_CTOR_OFFSET))(this);
		}

	};
