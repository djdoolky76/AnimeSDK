#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class DBMAHDDGMHM_1;

#define HNMKELIGNPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B6F2B0)
#define HNMKELIGNPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F4E0)

inline static constexpr unsigned int HNMKELIGNPJ_TypeDefinitionIndex = 89349;

class HNMKELIGNPJ : public ::System::Object
{
public:
	::DBMAHDDGMHM_1<::System::Single>* IKOFJEHPPAN; // 0x10
	::DBMAHDDGMHM_1<::System::Boolean>* ODKGAHDFMAP; // 0x18
	::DBMAHDDGMHM_1<::System::Boolean>* BNJLLBGGADA; // 0x20
	::System::Int32 EBOCMCEOHMO; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMKELIGNPJ__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMKELIGNPJ_DISPOSE_OFFSET))(this);
	}
};
