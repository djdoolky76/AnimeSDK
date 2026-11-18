#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KADNEIMNGIJ_OJIBMOOEKDB;

#define KADNEIMNGIJ_LFPMCKJNCFB_KLDNNFOICKA_OFFSET UNITYSDK_OFFSET(0x1947C800)
#define KADNEIMNGIJ_LFPMCKJNCFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1947C7F0)

inline static constexpr unsigned int KADNEIMNGIJ_LFPMCKJNCFB_TypeDefinitionIndex = 72645;

class KADNEIMNGIJ_LFPMCKJNCFB : public ::System::Object
{
public:
	::KADNEIMNGIJ_OJIBMOOEKDB* FGBNBFHOKAA; // 0x10
	::System::Int32 DBHFIJGFPOK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_LFPMCKJNCFB__CTOR_OFFSET))(this);
	}

	::System::Void KLDNNFOICKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADNEIMNGIJ_LFPMCKJNCFB_KLDNNFOICKA_OFFSET))(this);
	}
};
