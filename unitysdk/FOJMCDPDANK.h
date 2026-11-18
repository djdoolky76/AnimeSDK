#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EPJAODADCEA;

#define FOJMCDPDANK_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x10ED4EC0)
#define FOJMCDPDANK_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x10ED4EB0)
#define FOJMCDPDANK_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x10ED4F10)
#define FOJMCDPDANK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10ED4CB0)
#define FOJMCDPDANK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10ED3680)
#define FOJMCDPDANK__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED4E70)

inline static constexpr unsigned int FOJMCDPDANK_TypeDefinitionIndex = 53833;

class FOJMCDPDANK
{
public:
	::MoleMole::EntityHandle LONIKOOFHJG; // 0x28
	::EPJAODADCEA* KPCMPDAIOND; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK_ONDISABLE_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK_ILHIIDBCNEC_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::EPJAODADCEA* ONPGHHGJGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::EPJAODADCEA*))((::PBYTE)hIl2Cpp + FOJMCDPDANK_AMEGHCHMIOD_OFFSET))(this, ONPGHHGJGDJ);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOJMCDPDANK_KDOIBCBFBAG_OFFSET))(this);
	}
};
