#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HJBHNOJCLMF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D028B0)

inline static constexpr unsigned int HJBHNOJCLMF_TypeDefinitionIndex = 65519;

	class HJBHNOJCLMF : public ::System::Object
	{
	public:
		::System::String* KDHPKOFLNFM; // 0x10
		::System::Boolean KLNBEHCHGIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJBHNOJCLMF_CTOR_OFFSET))(this);
		}

	};
