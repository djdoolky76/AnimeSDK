#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HBLDGJCDJPF_CTOR_OFFSET UNITYSDK_OFFSET(0x15C0FFB0)

inline static constexpr unsigned int HBLDGJCDJPF_TypeDefinitionIndex = 77658;

	class HBLDGJCDJPF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLDGJCDJPF_CTOR_OFFSET))(this);
		}

	};
