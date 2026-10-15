#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCIAMPIIHPF.h"

#define AEBMIFOGFEN_CONFIAMBBBC_OFFSET UNITYSDK_OFFSET(0xB149A30)
#define AEBMIFOGFEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB149A70)

inline static constexpr unsigned int AEBMIFOGFEN_TypeDefinitionIndex = 70638;

	class AEBMIFOGFEN : public ::BCIAMPIIHPF
	{
	public:
		::System::Int32 LPFFJOGCMPG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBMIFOGFEN_CTOR_OFFSET))(this);
		}

		::System::Void CONFIAMBBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEBMIFOGFEN_CONFIAMBBBC_OFFSET))(this);
		}

	};
