#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KODIMAJKOMJ.h"

#define NJDPCNLGPML_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2156C0)

inline static constexpr unsigned int NJDPCNLGPML_TypeDefinitionIndex = 25008;

	class NJDPCNLGPML : public ::KODIMAJKOMJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJDPCNLGPML_CTOR_OFFSET))(this);
		}

	};
