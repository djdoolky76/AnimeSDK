#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EPJAODADCEA;

#define HOAOJLCDMIH_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x17B19A10)
#define HOAOJLCDMIH_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x17B19A60)
#define HOAOJLCDMIH_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x17B19A70)
#define HOAOJLCDMIH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17B19840)
#define HOAOJLCDMIH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x17B18FB0)
#define HOAOJLCDMIH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B199D0)

inline static constexpr unsigned int HOAOJLCDMIH_TypeDefinitionIndex = 62937;

class HOAOJLCDMIH
{
public:
	::EPJAODADCEA* KPCMPDAIOND; // 0x28
	::MoleMole::EntityHandle ABLNALACCDM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_ONDISABLE_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_AMEGHCHMIOD_OFFSET))(this, ONPGHHGJGDJ);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAOJLCDMIH_KDOIBCBFBAG_OFFSET))(this);
	}
};
