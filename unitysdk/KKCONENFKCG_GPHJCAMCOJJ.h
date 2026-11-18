#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KKCONENFKCG_GPHJCAMCOJJ_FLJNIEPLEAA_OFFSET UNITYSDK_OFFSET(0x129A05B0)
#define KKCONENFKCG_GPHJCAMCOJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x129A05A0)

inline static constexpr unsigned int KKCONENFKCG_GPHJCAMCOJJ_TypeDefinitionIndex = 61972;

class KKCONENFKCG_GPHJCAMCOJJ : public ::System::Object
{
public:
	::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::String*> JGAAPEJLGEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_GPHJCAMCOJJ__CTOR_OFFSET))(this);
	}

	::System::String* FLJNIEPLEAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCONENFKCG_GPHJCAMCOJJ_FLJNIEPLEAA_OFFSET))(this);
	}
};
