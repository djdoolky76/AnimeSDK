#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GAMIFHKJLFE;

#define KGJGAGJNKBB_EMLKPKJNAKP_NELBKDMAOLM_OFFSET UNITYSDK_OFFSET(0x20053230)
#define KGJGAGJNKBB_EMLKPKJNAKP__CTOR_OFFSET UNITYSDK_OFFSET(0x20053220)

inline static constexpr unsigned int KGJGAGJNKBB_EMLKPKJNAKP_TypeDefinitionIndex = 96407;

class KGJGAGJNKBB_EMLKPKJNAKP : public ::System::Object
{
public:
	::GAMIFHKJLFE* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGAGJNKBB_EMLKPKJNAKP__CTOR_OFFSET))(this);
	}

	::System::Void NELBKDMAOLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGJGAGJNKBB_EMLKPKJNAKP_NELBKDMAOLM_OFFSET))(this);
	}
};
