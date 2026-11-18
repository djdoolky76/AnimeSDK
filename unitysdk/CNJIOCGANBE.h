#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class DBMAHDDGMHM_1;

#define CNJIOCGANBE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159E8850)
#define CNJIOCGANBE__CTOR_OFFSET UNITYSDK_OFFSET(0x159E89F0)

inline static constexpr unsigned int CNJIOCGANBE_TypeDefinitionIndex = 82325;

class CNJIOCGANBE : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x10
	::DBMAHDDGMHM_1<::System::Single>* IKOFJEHPPAN; // 0x18
	::System::Int32 LMFLNAOODBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJIOCGANBE__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJIOCGANBE_DISPOSE_OFFSET))(this);
	}
};
