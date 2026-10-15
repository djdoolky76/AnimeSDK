#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MNHFLMDPMMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D68A0)

inline static constexpr unsigned int MNHFLMDPMMP_TypeDefinitionIndex = 10848;

	class MNHFLMDPMMP : public ::System::Object
	{
	public:
		::System::String* CELOLDOGIJF; // 0x10
		::System::String* GGKGFABFGFE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNHFLMDPMMP_CTOR_OFFSET))(this);
		}

	};
