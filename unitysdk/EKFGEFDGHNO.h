#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EKFGEFDGHNO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA54EC0)

inline static constexpr unsigned int EKFGEFDGHNO_TypeDefinitionIndex = 42249;

	class EKFGEFDGHNO : public ::System::Object
	{
	public:
		::System::Boolean OFGFINMGGGN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKFGEFDGHNO_CTOR_OFFSET))(this);
		}

	};
