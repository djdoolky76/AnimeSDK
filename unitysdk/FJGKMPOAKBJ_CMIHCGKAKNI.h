#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define FJGKMPOAKBJ_CMIHCGKAKNI__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD7040)

inline static constexpr unsigned int FJGKMPOAKBJ_CMIHCGKAKNI_TypeDefinitionIndex = 60467;

class FJGKMPOAKBJ_CMIHCGKAKNI : public ::System::Object
{
public:
	::System::Nullable_1<::Foundation::AssetPath> JNAJDCADOOA; // 0x10
	::System::Byte _padding0[0x10];
	::System::Int32 LKPMJMDJEBL; // 0x28
	::System::Boolean OADLLPJLCPL; // 0x2C
	::System::Byte _padding1[0x3];
	::System::Int32 PPDBNKKPGMD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJGKMPOAKBJ_CMIHCGKAKNI__CTOR_OFFSET))(this);
	}
};
