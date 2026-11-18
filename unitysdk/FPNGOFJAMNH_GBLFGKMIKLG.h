#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;

#define FPNGOFJAMNH_GBLFGKMIKLG_LOOIMGCAJEE_OFFSET UNITYSDK_OFFSET(0x116CB370)
#define FPNGOFJAMNH_GBLFGKMIKLG__CTOR_OFFSET UNITYSDK_OFFSET(0x116C9000)

inline static constexpr unsigned int FPNGOFJAMNH_GBLFGKMIKLG_TypeDefinitionIndex = 41490;

class FPNGOFJAMNH_GBLFGKMIKLG : public ::System::Object
{
public:
	::IBENDELLLAO* ILFKDPDLLIN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNGOFJAMNH_GBLFGKMIKLG__CTOR_OFFSET))(this);
	}

	::System::Void LOOIMGCAJEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPNGOFJAMNH_GBLFGKMIKLG_LOOIMGCAJEE_OFFSET))(this);
	}
};
