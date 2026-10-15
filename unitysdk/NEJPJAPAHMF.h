#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBJANKHLNGO;

#define NEJPJAPAHMF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB630D0)
#define NEJPJAPAHMF_NAKIGFCHAMF_OFFSET UNITYSDK_OFFSET(0xBB63140)

inline static constexpr unsigned int NEJPJAPAHMF_TypeDefinitionIndex = 80501;

	class NEJPJAPAHMF : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + NEJPJAPAHMF_CTOR_OFFSET))(this, a1);
		}

		::System::Void NAKIGFCHAMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJPJAPAHMF_NAKIGFCHAMF_OFFSET))(this);
		}

	};
