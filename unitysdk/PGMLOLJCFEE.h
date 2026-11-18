#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGOMIFFPAFC.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace System { class String; }

#define PGMLOLJCFEE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1737B330)
#define PGMLOLJCFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x1737B310)

inline static constexpr unsigned int PGMLOLJCFEE_TypeDefinitionIndex = 15068;

class PGMLOLJCFEE : public ::MGOMIFFPAFC
{
public:
	::System::String* KHEPEMJEIHP; // 0x30
	::System::String* ECAFOHDBICH; // 0x38

	::System::Void _ctor(::Foundation::AssetPath& GKBFENNFCDH, ::Foundation::AssetPath& ABOMFKBGCAJ, ::System::String* ECAFOHDBICH)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath&, ::Foundation::AssetPath&, ::System::String*))((::PBYTE)hIl2Cpp + PGMLOLJCFEE__CTOR_OFFSET))(this, GKBFENNFCDH, ABOMFKBGCAJ, ECAFOHDBICH);
	}

	::System::Void _ctor_1(::PGMLOLJCFEE* CHCNMJNAJKI, ::Foundation::AssetPath& HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::PGMLOLJCFEE*, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + PGMLOLJCFEE__CTOR_1_OFFSET))(this, CHCNMJNAJKI, HIAIKHDFCLN);
	}
};
