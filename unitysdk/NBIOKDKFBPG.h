#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAJELNMMPIP.h"

class AJAMLAJJNHA;
class FEDMBJFJGNF;
class MIGIAHECAGJ;

#define NBIOKDKFBPG_IBELDKINIOF_OFFSET UNITYSDK_OFFSET(0x105A54A0)
#define NBIOKDKFBPG_OFINMOFKGFI_OFFSET UNITYSDK_OFFSET(0x105A5DF0)
#define NBIOKDKFBPG__CTOR_OFFSET UNITYSDK_OFFSET(0x105A53E0)

inline static constexpr unsigned int NBIOKDKFBPG_TypeDefinitionIndex = 54614;

class NBIOKDKFBPG : public ::KAJELNMMPIP
{
public:
	::FEDMBJFJGNF* BBCDJELJHBI; // 0x48
	::MIGIAHECAGJ* DEFIEILJODF; // 0x50

	::System::Void _ctor(::AJAMLAJJNHA* KAINLJMNCHE)
	{
		return ((::System::Void(*)(::PVOID, ::AJAMLAJJNHA*))((::PBYTE)hIl2Cpp + NBIOKDKFBPG__CTOR_OFFSET))(this, KAINLJMNCHE);
	}

	::System::Void IBELDKINIOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOKDKFBPG_IBELDKINIOF_OFFSET))(this);
	}

	::System::Void OFINMOFKGFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIOKDKFBPG_OFINMOFKGFI_OFFSET))(this);
	}
};
