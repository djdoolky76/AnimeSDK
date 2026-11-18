#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHAEDNPFIGC;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CAKCIIFLNDK_CIAEIEBJDAL_COJMAKDHJDL_OFFSET UNITYSDK_OFFSET(0x14F10780)
#define CAKCIIFLNDK_CIAEIEBJDAL_FBPHMJJKALH_OFFSET UNITYSDK_OFFSET(0x14F107A0)
#define CAKCIIFLNDK_CIAEIEBJDAL__CTOR_OFFSET UNITYSDK_OFFSET(0x14F10770)

inline static constexpr unsigned int CAKCIIFLNDK_CIAEIEBJDAL_TypeDefinitionIndex = 76213;

class CAKCIIFLNDK_CIAEIEBJDAL : public ::System::Object
{
public:
	::System::Action_1<::JHAEDNPFIGC*>* DLMJCFBENGB; // 0x10
	::System::Action* GHPOLOHGGKM; // 0x18
	::System::Int32 JNCPDAHFGCO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_CIAEIEBJDAL__CTOR_OFFSET))(this);
	}

	::System::Void COJMAKDHJDL(::JHAEDNPFIGC* GHIMAGGIAJA)
	{
		return ((::System::Void(*)(::PVOID, ::JHAEDNPFIGC*))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_CIAEIEBJDAL_COJMAKDHJDL_OFFSET))(this, GHIMAGGIAJA);
	}

	::System::Void FBPHMJJKALH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKCIIFLNDK_CIAEIEBJDAL_FBPHMJJKALH_OFFSET))(this);
	}
};
