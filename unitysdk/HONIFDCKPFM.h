#pragma once
#include "unitysdk/unitysdk.h"

#define HONIFDCKPFM_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB0DC0)
#define HONIFDCKPFM_INTERP_OFFSET UNITYSDK_OFFSET(0x15DB0E30)

inline static constexpr unsigned int HONIFDCKPFM_TypeDefinitionIndex = 74005;

	class HONIFDCKPFM
	{
	public:
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HONIFDCKPFM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Interp(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HONIFDCKPFM_INTERP_OFFSET))(this, a1, a2, a3);
		}

	};
