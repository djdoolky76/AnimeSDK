#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NMMNJLDKJMD_BELFBEJOIFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1A44E800)
#define NMMNJLDKJMD_BELFBEJOIFB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x1A44D890)
#define NMMNJLDKJMD_BELFBEJOIFB_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1A44E810)

inline static constexpr unsigned int NMMNJLDKJMD_BELFBEJOIFB_TypeDefinitionIndex = 77795;

	class NMMNJLDKJMD_BELFBEJOIFB : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMNJLDKJMD_BELFBEJOIFB_HFKFNFKIEON_OFFSET))(this);
		}

	};
