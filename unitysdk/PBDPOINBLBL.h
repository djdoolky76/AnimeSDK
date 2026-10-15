#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define PBDPOINBLBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEA460)

inline static constexpr unsigned int PBDPOINBLBL_TypeDefinitionIndex = 49329;

	class PBDPOINBLBL : public ::System::Attribute
	{
	public:
		::System::Type* GPNFGFGMGAD; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PBDPOINBLBL_CTOR_OFFSET))(this, a1);
		}

	};
