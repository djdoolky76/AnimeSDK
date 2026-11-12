#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"

#define MPKCHKFKHMA_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FF9A0)
#define MPKCHKFKHMA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xC2FF9B0)

inline static constexpr unsigned int MPKCHKFKHMA_TypeDefinitionIndex = 77685;

	class MPKCHKFKHMA : public ::MLKDDLHNNHH
	{
	public:
		::System::UInt32 AALJIHBMDAI; // 0x20
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MPKCHKFKHMA_CTOR_OFFSET))(this, a1);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPKCHKFKHMA_ONEXECUTE_OFFSET))(this);
		}

	};
