#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class DBMAHDDGMHM_1;

#define HEDEOMJGEBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DA1BE0)
#define HEDEOMJGEBP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA1FC0)

inline static constexpr unsigned int HEDEOMJGEBP_TypeDefinitionIndex = 42349;

class HEDEOMJGEBP : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* OEBCPLMLALA; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x18
	::DBMAHDDGMHM_1<::System::Single>* IKOFJEHPPAN; // 0x20
	::DBMAHDDGMHM_1<::System::Boolean>* OIMBMENANOG; // 0x28
	::DBMAHDDGMHM_1<::System::Boolean>* LIFFBCKDKIF; // 0x30
	::DBMAHDDGMHM_1<::System::Boolean>* DNGJPJPMBIN; // 0x38
	::System::Int32 OOHKBILJIID; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEOMJGEBP__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDEOMJGEBP_DISPOSE_OFFSET))(this);
	}
};
