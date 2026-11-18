#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BIPEBINJAHI_HPPBEDHKOME_OFFSET UNITYSDK_OFFSET(0x128AB230)
#define BIPEBINJAHI_IMJLDFKGMEF_OFFSET UNITYSDK_OFFSET(0x128AB0E0)
#define BIPEBINJAHI__CTOR_OFFSET UNITYSDK_OFFSET(0x128AB0D0)

inline static constexpr unsigned int BIPEBINJAHI_TypeDefinitionIndex = 83572;

class BIPEBINJAHI : public ::System::Object
{
public:
	::System::Int32 APKIKLPPHEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIPEBINJAHI__CTOR_OFFSET))(this);
	}

	static ::System::Int32 IMJLDFKGMEF(::BIPEBINJAHI* LJBPECKCCEA)
	{
		return ((::System::Int32(*)(::BIPEBINJAHI*))((::PBYTE)hIl2Cpp + BIPEBINJAHI_IMJLDFKGMEF_OFFSET))(LJBPECKCCEA);
	}

	static ::System::Int32 HPPBEDHKOME(::BIPEBINJAHI* HAAEBCOBKFF, ::BIPEBINJAHI* BFMMEICFNCD)
	{
		return ((::System::Int32(*)(::BIPEBINJAHI*, ::BIPEBINJAHI*))((::PBYTE)hIl2Cpp + BIPEBINJAHI_HPPBEDHKOME_OFFSET))(HAAEBCOBKFF, BFMMEICFNCD);
	}
};
