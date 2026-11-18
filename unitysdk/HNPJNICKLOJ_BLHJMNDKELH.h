#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ODAEDPKLBPE;

#define HNPJNICKLOJ_BLHJMNDKELH_FOCDGKCOOAC_OFFSET UNITYSDK_OFFSET(0x15B6F5B0)
#define HNPJNICKLOJ_BLHJMNDKELH__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6F5A0)

inline static constexpr unsigned int HNPJNICKLOJ_BLHJMNDKELH_TypeDefinitionIndex = 40628;

class HNPJNICKLOJ_BLHJMNDKELH : public ::System::Object
{
public:
	::System::Int32 EKOHIAJDIEC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPJNICKLOJ_BLHJMNDKELH__CTOR_OFFSET))(this);
	}

	::System::Void FOCDGKCOOAC(::ODAEDPKLBPE* JNDDJMAHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::ODAEDPKLBPE*))((::PBYTE)hIl2Cpp + HNPJNICKLOJ_BLHJMNDKELH_FOCDGKCOOAC_OFFSET))(this, JNDDJMAHNAI);
	}
};
