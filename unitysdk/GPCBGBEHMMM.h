#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GPCBGBEHMMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8D3D0)

inline static constexpr unsigned int GPCBGBEHMMM_TypeDefinitionIndex = 44732;

	class GPCBGBEHMMM : public ::System::Object
	{
	public:
		::System::Int32 GELAMLPPBKE; // 0x10
		::System::Int32 IBNGJKBPMOO; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPCBGBEHMMM_CTOR_OFFSET))(this);
		}

	};
