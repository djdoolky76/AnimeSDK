#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJOJHIFMDCN.h"
#include "unitysdk/System/Object.h"

#define GPPJJNCKOAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA872B0)

inline static constexpr unsigned int GPPJJNCKOAI_TypeDefinitionIndex = 42214;

	class GPPJJNCKOAI : public ::System::Object
	{
	public:
		::IJOJHIFMDCN ADCOPNEMJDB; // 0x10
		::IJOJHIFMDCN BKEIHICLIKK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPJJNCKOAI_CTOR_OFFSET))(this);
		}

	};
