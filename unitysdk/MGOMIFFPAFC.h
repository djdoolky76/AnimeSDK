#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define MGOMIFFPAFC__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB1EC0)

inline static constexpr unsigned int MGOMIFFPAFC_TypeDefinitionIndex = 14392;

class MGOMIFFPAFC : public ::System::Object
{
public:
	::Foundation::AssetPath GKBFENNFCDH; // 0x10
	::Foundation::AssetPath ABOMFKBGCAJ; // 0x20

	::System::Void _ctor(::Foundation::AssetPath& GKBFENNFCDH, ::Foundation::AssetPath& ABOMFKBGCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + MGOMIFFPAFC__CTOR_OFFSET))(this, GKBFENNFCDH, ABOMFKBGCAJ);
	}
};
