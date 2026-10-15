#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NNBLDMGCENH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C973540)

inline static constexpr unsigned int NNBLDMGCENH_TypeDefinitionIndex = 42352;

	class NNBLDMGCENH : public ::System::Object
	{
	public:
		::System::Int32 ILHEKCADCPO; // 0x10
		::System::Single BGDBPNDEOLK; // 0x14
		::System::Int32 EIEGNHODHAC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBLDMGCENH_CTOR_OFFSET))(this);
		}

	};
