#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKDHMALJKND_CTOR_OFFSET UNITYSDK_OFFSET(0x154F54F0)
#define EKDHMALJKND_HHNOCHCDKPP_OFFSET UNITYSDK_OFFSET(0x154F5410)

inline static constexpr unsigned int EKDHMALJKND_TypeDefinitionIndex = 80173;

	class EKDHMALJKND : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDHMALJKND_CTOR_OFFSET))(this);
		}

		::System::Void HHNOCHCDKPP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EKDHMALJKND_HHNOCHCDKPP_OFFSET))(this, a1, a2);
		}

	};
